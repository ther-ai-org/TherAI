import Foundation
import Supabase

final class GoogleSignIn {
    func signIn(redirectURL: URL, client: SupabaseClient) async throws -> Session {
        print("[Auth][Google] invoking Supabase OAuth - redirect: \(redirectURL.absoluteString)")
        let session = try await client.auth.signInWithOAuth(
            provider: .google,
            redirectTo: redirectURL,
            queryParams: [(name: "prompt", value: "select_account")]
        )
        print("[Auth][Google] Supabase OAuth returned session")
        return session
    }
}


