#include <stdio.h>

// Declaration only; implementation is inside libbpf
int probe_memcg_account(int token_fd);

int main() {
    int result = probe_memcg_account(0);
    if (result)
        printf("✅ memcg-based accounting is ENABLED.\n");
    else
        printf("❌ memcg-based accounting is NOT enabled. Falling back to RLIMIT_MEMLOCK.\n");
    return 0;
}

