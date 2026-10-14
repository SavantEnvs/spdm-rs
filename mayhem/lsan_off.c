/* Build-time LeakSanitizer off-switch (ASan and UBSan stay on): the ASan runtime calls this weak hook. */
int __lsan_is_turned_off(void) { return 1; }
