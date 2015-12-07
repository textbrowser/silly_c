#if defined(__amd64__)
#define ARCHITECTURE_STR "__amd64__"
#elif defined(__amd64)
#define ARCHITECTURE_STR "__amd64"
#elif defined(__x86_64__)
#define ARCHITECTURE_STR "__x86_64__"
#elif defined(__x86_64)
#define ARCHITECTURE_STR "__x86_64"
#elif defined(__ARM_ARCH_6__)
#define ARCHITECTURE_STR "__ARM_ARCH_6__"
#elif defined(__ARM_ARCH_6J__)
#define ARCHITECTURE_STR "__ARM_ARCH_6J__"
#elif defined(__ARM_ARCH_6K__)
#define ARCHITECTURE_STR "__ARM_ARCH_6K__"
#elif defined(__ARM_ARCH_6Z__)
#define ARCHITECTURE_STR "__ARM_ARCH_6Z__"
#elif defined(__ARM_ARCH_6ZK__)
#define ARCHITECTURE_STR "__ARM_ARCH_6ZK__"
#elif defined(__ARM_ARCH_6T2__)
#define ARCHITECTURE_STR "__ARM_ARCH_6T2__"
#elif defined(__ARM_ARCH_7__)
#define ARCHITECTURE_STR "__ARM_ARCH_7__"
#elif defined(__ARM_ARCH_7A__)
#define ARCHITECTURE_STR "__ARM_ARCH_7A__"
#elif defined(__ARM_ARCH_7R__)
#define ARCHITECTURE_STR "__ARM_ARCH_7R__"
#elif defined(__ARM_ARCH_7M__)
#define ARCHITECTURE_STR "__ARM_ARCH_7M__"
#elif defined(__ARM_ARCH_7S__)
#define ARCHITECTURE_STR "__ARM_ARCH_7S__"
#else
#define ARCHITECTURE_STR "unknown"
#endif
