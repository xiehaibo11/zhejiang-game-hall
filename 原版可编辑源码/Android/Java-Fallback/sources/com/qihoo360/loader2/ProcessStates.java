package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ProcessStates {
    com.qihoo360.loader2.LaunchModeStates mLaunchModeStates;
    com.qihoo360.loader2.TaskAffinityStates mTaskAffinityStates;

    ProcessStates() {
            r1 = this;
            r1.<init>()
            com.qihoo360.loader2.TaskAffinityStates r0 = new com.qihoo360.loader2.TaskAffinityStates
            r0.<init>()
            r1.mTaskAffinityStates = r0
            com.qihoo360.loader2.LaunchModeStates r0 = new com.qihoo360.loader2.LaunchModeStates
            r0.<init>()
            r1.mLaunchModeStates = r0
            return
    }
}
