.class public Lcom/tencent/bugly/crashreport/CrashReport;
.super Ljava/lang/Object;
.source "BUGLY"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tencent/bugly/crashreport/CrashReport$a;,
        Lcom/tencent/bugly/crashreport/CrashReport$CrashHandleCallback;,
        Lcom/tencent/bugly/crashreport/CrashReport$UserStrategy;
    }
.end annotation


# static fields
.field private static a:Landroid/content/Context;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 45
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static closeBugly()V
    .locals 2

    .line 349
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 350
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "Can not close bugly because bugly is disable."

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 353
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 354
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 358
    :cond_1
    sget-object v0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    if-nez v0, :cond_2

    return-void

    .line 362
    :cond_2
    invoke-static {}, Lcom/tencent/bugly/proguard/aq;->a()Lcom/tencent/bugly/proguard/aq;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 364
    sget-object v1, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/tencent/bugly/proguard/aq;->b(Landroid/content/Context;)V

    .line 367
    :cond_3
    invoke-static {}, Lcom/tencent/bugly/crashreport/CrashReport;->closeCrashReport()V

    .line 369
    sget-object v0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/s;->a(Landroid/content/Context;)V

    .line 371
    invoke-static {}, Lcom/tencent/bugly/proguard/ak;->a()Lcom/tencent/bugly/proguard/ak;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 373
    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/ak;->b()V

    :cond_4
    return-void
.end method

.method public static closeCrashReport()V
    .locals 2

    .line 333
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 334
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "Can not close crash report because bugly is disable."

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 337
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 338
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 342
    :cond_1
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/at;->c()V

    return-void
.end method

.method public static closeNativeReport()V
    .locals 2

    .line 300
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 301
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "Can not close native report because bugly is disable."

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 304
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 305
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 310
    :cond_1
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/at;->d()V

    return-void
.end method

.method public static enableBugly(Z)V
    .locals 0

    .line 52
    sput-boolean p0, Lcom/tencent/bugly/proguard/p;->a:Z

    return-void
.end method

.method public static enableObtainId(Landroid/content/Context;Z)V
    .locals 0

    .line 1059
    invoke-static {p0, p1}, Lcom/tencent/bugly/crashreport/CrashReport;->setCollectPrivacyInfo(Landroid/content/Context;Z)V

    return-void
.end method

.method public static getAllUserDataKeys(Landroid/content/Context;)Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 544
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 545
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "Can not get all keys of user data because bugly is disable."

    invoke-static {p0, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 546
    new-instance p0, Ljava/util/HashSet;

    invoke-direct {p0}, Ljava/util/HashSet;-><init>()V

    return-object p0

    :cond_0
    if-nez p0, :cond_1

    .line 549
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "getAllUserDataKeys args context should not be null"

    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 550
    new-instance p0, Ljava/util/HashSet;

    invoke-direct {p0}, Ljava/util/HashSet;-><init>()V

    return-object p0

    .line 553
    :cond_1
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/aa;->w()Ljava/util/Set;

    move-result-object p0

    return-object p0
.end method

.method public static getAppChannel()Ljava/lang/String;
    .locals 3

    .line 736
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    const-string v1, "unknown"

    if-nez v0, :cond_0

    .line 737
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v2, "Can not get App channel because bugly is disable."

    invoke-static {v0, v2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 740
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 741
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v2, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 746
    :cond_1
    sget-object v0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->s:Ljava/lang/String;

    return-object v0
.end method

.method public static getAppID()Ljava/lang/String;
    .locals 3

    .line 581
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    const-string v1, "unknown"

    if-nez v0, :cond_0

    .line 582
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v2, "Can not get App ID because bugly is disable."

    invoke-static {v0, v2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 585
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 586
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v2, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 591
    :cond_1
    sget-object v0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/aa;->e()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getAppVer()Ljava/lang/String;
    .locals 3

    .line 717
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    const-string v1, "unknown"

    if-nez v0, :cond_0

    .line 718
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v2, "Can not get app version because bugly is disable."

    invoke-static {v0, v2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 721
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 722
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v2, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 727
    :cond_1
    sget-object v0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;

    return-object v0
.end method

.method public static getBuglyVersion(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    .line 127
    new-array p0, p0, [Ljava/lang/Object;

    const-string v0, "Please call with context."

    invoke-static {v0, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string p0, "unknown"

    return-object p0

    .line 130
    :cond_0
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    .line 1305
    iget-object p0, p0, Lcom/tencent/bugly/proguard/aa;->h:Ljava/lang/String;

    return-object p0
.end method

.method public static getContext()Landroid/content/Context;
    .locals 1

    .line 116
    sget-object v0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    return-object v0
.end method

.method public static getDeviceID(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 708
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/aa;->g()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getHttpProxy()Ljava/net/Proxy;
    .locals 1

    .line 6052
    sget-object v0, Lcom/tencent/bugly/proguard/an;->a:Ljava/net/Proxy;

    return-object v0
.end method

.method public static getSdkExtraData()Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 796
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 797
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "Can not get SDK extra data because bugly is disable."

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 798
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    return-object v0

    .line 800
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 801
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    return-object v0

    .line 805
    :cond_1
    sget-object v0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->K:Ljava/util/HashMap;

    return-object v0
.end method

.method public static getSdkExtraData(Landroid/content/Context;)Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 814
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 815
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "Can not get SDK extra data because bugly is disable."

    invoke-static {p0, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 816
    new-instance p0, Ljava/util/HashMap;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    return-object p0

    :cond_0
    if-nez p0, :cond_1

    const/4 p0, 0x0

    .line 819
    new-array p0, p0, [Ljava/lang/Object;

    const-string v0, "Context should not be null."

    invoke-static {v0, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    const/4 p0, 0x0

    return-object p0

    .line 822
    :cond_1
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    iget-object p0, p0, Lcom/tencent/bugly/proguard/aa;->K:Ljava/util/HashMap;

    return-object p0
.end method

.method public static getUserData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 426
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    const-string v1, "unknown"

    if-nez v0, :cond_0

    .line 427
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not get user data because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    :cond_0
    if-nez p0, :cond_1

    .line 431
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "getUserDataValue args context should not be null"

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 435
    :cond_1
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 p0, 0x0

    return-object p0

    .line 439
    :cond_2
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/tencent/bugly/proguard/aa;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getUserDatasSize(Landroid/content/Context;)I
    .locals 2

    .line 563
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    const/4 v1, -0x1

    if-nez v0, :cond_0

    .line 564
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "Can not get size of user data because bugly is disable."

    invoke-static {p0, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    :cond_0
    if-nez p0, :cond_1

    .line 568
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "getUserDatasSize args context should not be null"

    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    .line 572
    :cond_1
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/aa;->v()I

    move-result p0

    return p0
.end method

.method public static getUserId()Ljava/lang/String;
    .locals 3

    .line 665
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    const-string v1, "unknown"

    if-nez v0, :cond_0

    .line 666
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v2, "Can not get user ID because bugly is disable."

    invoke-static {v0, v2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 669
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 670
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v2, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 675
    :cond_1
    sget-object v0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/aa;->f()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getUserSceneTagId(Landroid/content/Context;)I
    .locals 2

    .line 406
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    const/4 v1, -0x1

    if-nez v0, :cond_0

    .line 407
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "Can not get user scene tag because bugly is disable."

    invoke-static {p0, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    :cond_0
    if-nez p0, :cond_1

    .line 411
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "getUserSceneTagId args context should not be null"

    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    .line 415
    :cond_1
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/aa;->z()I

    move-result p0

    return p0
.end method

.method public static initCrashReport(Landroid/content/Context;)V
    .locals 1

    if-nez p0, :cond_0

    return-void

    .line 65
    :cond_0
    sput-object p0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    .line 66
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-static {v0}, Lcom/tencent/bugly/proguard/p;->a(Lcom/tencent/bugly/proguard/o;)V

    .line 67
    invoke-static {p0}, Lcom/tencent/bugly/proguard/p;->a(Landroid/content/Context;)V

    return-void
.end method

.method public static initCrashReport(Landroid/content/Context;Lcom/tencent/bugly/crashreport/CrashReport$UserStrategy;)V
    .locals 1

    if-nez p0, :cond_0

    return-void

    .line 80
    :cond_0
    sput-object p0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    .line 81
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-static {v0}, Lcom/tencent/bugly/proguard/p;->a(Lcom/tencent/bugly/proguard/o;)V

    .line 82
    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/p;->a(Landroid/content/Context;Lcom/tencent/bugly/BuglyStrategy;)V

    return-void
.end method

.method public static initCrashReport(Landroid/content/Context;Ljava/lang/String;Z)V
    .locals 1

    const/4 v0, 0x0

    .line 94
    invoke-static {p0, p1, p2, v0}, Lcom/tencent/bugly/crashreport/CrashReport;->initCrashReport(Landroid/content/Context;Ljava/lang/String;ZLcom/tencent/bugly/crashreport/CrashReport$UserStrategy;)V

    return-void
.end method

.method public static initCrashReport(Landroid/content/Context;Ljava/lang/String;ZLcom/tencent/bugly/crashreport/CrashReport$UserStrategy;)V
    .locals 1

    if-nez p0, :cond_0

    return-void

    .line 110
    :cond_0
    sput-object p0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    .line 111
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-static {v0}, Lcom/tencent/bugly/proguard/p;->a(Lcom/tencent/bugly/proguard/o;)V

    .line 112
    invoke-static {p0, p1, p2, p3}, Lcom/tencent/bugly/proguard/p;->a(Landroid/content/Context;Ljava/lang/String;ZLcom/tencent/bugly/BuglyStrategy;)V

    return-void
.end method

.method public static isLastSessionCrash()Z
    .locals 7

    .line 759
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 760
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v2, "The info \'isLastSessionCrash\' is not accurate because bugly is disable."

    invoke-static {v0, v2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    .line 764
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 765
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v2, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    .line 770
    :cond_1
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v0

    .line 4180
    iget-object v2, v0, Lcom/tencent/bugly/proguard/at;->A:Ljava/lang/Boolean;

    if-eqz v2, :cond_2

    .line 4182
    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    .line 4185
    :cond_2
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v2

    iget-object v2, v2, Lcom/tencent/bugly/proguard/aa;->d:Ljava/lang/String;

    .line 4187
    invoke-static {}, Lcom/tencent/bugly/proguard/w;->a()Lcom/tencent/bugly/proguard/w;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v3, v4}, Lcom/tencent/bugly/proguard/w;->a(I)Ljava/util/List;

    move-result-object v3

    .line 4188
    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    if-eqz v3, :cond_6

    .line 4189
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v6

    if-lez v6, :cond_6

    .line 4190
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_3
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tencent/bugly/proguard/y;

    .line 4191
    iget-object v6, v3, Lcom/tencent/bugly/proguard/y;->c:Ljava/lang/String;

    invoke-virtual {v2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_3

    .line 4192
    sget-object v6, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    iput-object v6, v0, Lcom/tencent/bugly/proguard/at;->A:Ljava/lang/Boolean;

    .line 4193
    invoke-interface {v5, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 4197
    :cond_4
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_5

    .line 4198
    invoke-static {}, Lcom/tencent/bugly/proguard/w;->a()Lcom/tencent/bugly/proguard/w;

    move-result-object v0

    invoke-virtual {v0, v5}, Lcom/tencent/bugly/proguard/w;->a(Ljava/util/List;)V

    :cond_5
    return v4

    .line 4203
    :cond_6
    sget-object v2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    iput-object v2, v0, Lcom/tencent/bugly/proguard/at;->A:Ljava/lang/Boolean;

    return v1
.end method

.method public static postCatchedException(Ljava/lang/Throwable;)V
    .locals 1

    .line 243
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/tencent/bugly/crashreport/CrashReport;->postCatchedException(Ljava/lang/Throwable;Ljava/lang/Thread;)V

    return-void
.end method

.method public static postCatchedException(Ljava/lang/Throwable;Ljava/lang/Thread;)V
    .locals 1

    const/4 v0, 0x0

    .line 252
    invoke-static {p0, p1, v0}, Lcom/tencent/bugly/crashreport/CrashReport;->postCatchedException(Ljava/lang/Throwable;Ljava/lang/Thread;Z)V

    return-void
.end method

.method public static postCatchedException(Ljava/lang/Throwable;Ljava/lang/Thread;Z)V
    .locals 3

    .line 263
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 264
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not post crash caught because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 267
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 268
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    if-nez p0, :cond_2

    const/4 p0, 0x0

    .line 274
    new-array p0, p0, [Ljava/lang/Object;

    const-string p1, "throwable is null, just return"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    :cond_2
    if-nez p1, :cond_3

    .line 279
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object p1

    .line 281
    :cond_3
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v0

    .line 2330
    iget-object v1, v0, Lcom/tencent/bugly/proguard/at;->w:Lcom/tencent/bugly/proguard/ak;

    new-instance v2, Lcom/tencent/bugly/proguard/at$3;

    invoke-direct {v2, v0, p1, p0, p2}, Lcom/tencent/bugly/proguard/at$3;-><init>(Lcom/tencent/bugly/proguard/at;Ljava/lang/Thread;Ljava/lang/Throwable;Z)V

    invoke-virtual {v1, v2}, Lcom/tencent/bugly/proguard/ak;->a(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public static postException(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 236
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    move v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    invoke-static/range {v0 .. v5}, Lcom/tencent/bugly/crashreport/CrashReport;->postException(Ljava/lang/Thread;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static postException(Ljava/lang/Thread;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Thread;",
            "I",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 213
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 214
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not post crash caught because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 217
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 218
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 222
    :cond_1
    invoke-static/range {p0 .. p5}, Lcom/tencent/bugly/proguard/au;->a(Ljava/lang/Thread;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method private static putSdkData(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    if-eqz p0, :cond_3

    .line 827
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-static {p2}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "[a-zA-Z[0-9]]+"

    const-string v1, ""

    .line 830
    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    .line 831
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0x64

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-le v0, v1, :cond_1

    .line 832
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    new-array v1, v2, [Ljava/lang/Object;

    const/16 v4, 0x32

    .line 833
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v1, v3

    const-string v5, "putSdkData key length over limit %d, will be cutted."

    .line 832
    invoke-static {v5, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 834
    invoke-virtual {p1, v3, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    .line 836
    :cond_1
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0x1f4

    if-le v0, v1, :cond_2

    .line 837
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    new-array v1, v2, [Ljava/lang/Object;

    const/16 v4, 0xc8

    .line 838
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v1, v3

    const-string v5, "putSdkData value length over limit %d, will be cutted!"

    .line 837
    invoke-static {v5, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 839
    invoke-virtual {p2, v3, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p2

    .line 842
    :cond_2
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Lcom/tencent/bugly/proguard/aa;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x2

    .line 843
    new-array p0, p0, [Ljava/lang/Object;

    aput-object p1, p0, v3

    aput-object p2, p0, v2

    const-string p1, "[param] putSdkData data: %s - %s"

    invoke-static {p1, p0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    new-array p1, v3, [Ljava/lang/Object;

    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/String;[Ljava/lang/Object;)Z

    :cond_3
    :goto_0
    return-void
.end method

.method public static putUserData(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    .line 451
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 452
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not put user data because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    if-nez p0, :cond_1

    .line 456
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "putUserData args context should not be null"

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    const/4 v0, 0x0

    if-nez p1, :cond_2

    .line 461
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 462
    new-array p0, v0, [Ljava/lang/Object;

    const-string p1, "putUserData args key should not be null or empty"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    :cond_2
    if-nez p2, :cond_3

    .line 467
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 468
    new-array p0, v0, [Ljava/lang/Object;

    const-string p1, "putUserData args value should not be null"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    .line 472
    :cond_3
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v1

    const/16 v2, 0xc8

    const/4 v3, 0x1

    if-le v1, v2, :cond_4

    .line 473
    new-array v1, v3, [Ljava/lang/Object;

    .line 474
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v1, v0

    const-string v4, "user data value length over limit %d, it will be cutted!"

    .line 473
    invoke-static {v4, v1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 475
    invoke-virtual {p2, v0, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p2

    .line 478
    :cond_4
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v1

    .line 479
    invoke-virtual {v1}, Lcom/tencent/bugly/proguard/aa;->w()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2, p1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v2

    const/4 v4, 0x2

    if-eqz v2, :cond_6

    .line 482
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getInstance()Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    move-result-object v1

    if-eqz v1, :cond_5

    .line 484
    invoke-virtual {v1, p1, p2}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->putKeyValueToNative(Ljava/lang/String;Ljava/lang/String;)Z

    .line 486
    :cond_5
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Lcom/tencent/bugly/proguard/aa;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 487
    new-array p0, v4, [Ljava/lang/Object;

    aput-object p1, p0, v0

    aput-object p2, p0, v3

    const-string p1, "replace KV %s %s"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    .line 492
    :cond_6
    invoke-virtual {v1}, Lcom/tencent/bugly/proguard/aa;->v()I

    move-result v1

    const/16 v2, 0x32

    if-lt v1, v2, :cond_7

    .line 493
    new-array p0, v3, [Ljava/lang/Object;

    .line 494
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, p0, v0

    const-string p1, "user data size is over limit %d, it will be cutted!"

    .line 493
    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    .line 498
    :cond_7
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v1

    if-le v1, v2, :cond_8

    .line 499
    new-array v1, v4, [Ljava/lang/Object;

    .line 500
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v1, v0

    aput-object p1, v1, v3

    const-string v5, "user data key length over limit %d , will drop this new key %s"

    .line 499
    invoke-static {v5, v1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 501
    invoke-virtual {p1, v0, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    .line 505
    :cond_8
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getInstance()Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    move-result-object v1

    if-eqz v1, :cond_9

    .line 507
    invoke-virtual {v1, p1, p2}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->putKeyValueToNative(Ljava/lang/String;Ljava/lang/String;)Z

    .line 509
    :cond_9
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Lcom/tencent/bugly/proguard/aa;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 510
    new-array p0, v4, [Ljava/lang/Object;

    aput-object p1, p0, v0

    aput-object p2, p0, v3

    const-string p1, "[param] set user data: %s - %s"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void
.end method

.method public static removeUserData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 520
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    const-string v1, "unknown"

    if-nez v0, :cond_0

    .line 521
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not remove user data because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    :cond_0
    if-nez p0, :cond_1

    .line 525
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "removeUserData args context should not be null"

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 529
    :cond_1
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 p0, 0x0

    return-object p0

    :cond_2
    const/4 v0, 0x1

    .line 533
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const-string v1, "[param] remove user data: %s"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 534
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/tencent/bugly/proguard/aa;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static setAllThreadStackEnable(Landroid/content/Context;ZZ)V
    .locals 0

    .line 293
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    .line 2384
    iput-boolean p1, p0, Lcom/tencent/bugly/proguard/aa;->Q:Z

    .line 2385
    iput-boolean p2, p0, Lcom/tencent/bugly/proguard/aa;->R:Z

    return-void
.end method

.method public static setAppChannel(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 947
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 948
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not set App channel because Bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    if-nez p0, :cond_1

    .line 952
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "setAppChannel args context should not be null"

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    if-nez p1, :cond_2

    .line 956
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "App channel is null, will not set"

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 959
    :cond_2
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    iput-object p1, p0, Lcom/tencent/bugly/proguard/aa;->s:Ljava/lang/String;

    .line 961
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getInstance()Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 963
    invoke-virtual {p0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setNativeAppChannel(Ljava/lang/String;)Z

    :cond_3
    return-void
.end method

.method public static setAppPackage(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 974
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 975
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not set App package because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    if-nez p0, :cond_1

    .line 979
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "setAppPackage args context should not be null"

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    if-nez p1, :cond_2

    .line 983
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "App package is null, will not set"

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 986
    :cond_2
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    iput-object p1, p0, Lcom/tencent/bugly/proguard/aa;->c:Ljava/lang/String;

    .line 988
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getInstance()Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 990
    invoke-virtual {p0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setNativeAppPackage(Ljava/lang/String;)Z

    :cond_3
    return-void
.end method

.method public static setAppVersion(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 920
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 921
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not set App version because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    if-nez p0, :cond_1

    .line 925
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "setAppVersion args context should not be null"

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    if-nez p1, :cond_2

    .line 929
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "App version is null, will not set"

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 932
    :cond_2
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    iput-object p1, p0, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;

    .line 934
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getInstance()Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 936
    invoke-virtual {p0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setNativeAppVersion(Ljava/lang/String;)Z

    :cond_3
    return-void
.end method

.method public static setBuglyDbName(Ljava/lang/String;)V
    .locals 3

    .line 1045
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 1046
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "Can not set DB name because bugly is disable."

    invoke-static {p0, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 1049
    :cond_0
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "Set Bugly DB name: "

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1050
    sput-object p0, Lcom/tencent/bugly/proguard/x;->a:Ljava/lang/String;

    return-void
.end method

.method public static setCollectPrivacyInfo(Landroid/content/Context;Z)V
    .locals 3

    .line 1068
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 1069
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not set collect privacy info enable because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    if-nez p0, :cond_1

    .line 1073
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "setCollectPrivacyInfo args context should not be null"

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 1076
    :cond_1
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v1

    const-string v2, "setCollectPrivacyInfo: "

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1077
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    .line 5379
    iput-boolean p1, p0, Lcom/tencent/bugly/proguard/aa;->n:Z

    return-void
.end method

.method public static setContext(Landroid/content/Context;)V
    .locals 0

    .line 750
    sput-object p0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    return-void
.end method

.method public static setCrashFilter(Ljava/lang/String;)V
    .locals 3

    .line 1000
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 1001
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "Can not set App package because bugly is disable."

    invoke-static {p0, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 1004
    :cond_0
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "Set crash stack filter: "

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1005
    sput-object p0, Lcom/tencent/bugly/proguard/at;->q:Ljava/lang/String;

    return-void
.end method

.method public static setCrashRegularFilter(Ljava/lang/String;)V
    .locals 3

    .line 1014
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 1015
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "Can not set App package because bugly is disable."

    invoke-static {p0, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 1018
    :cond_0
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "Set crash stack filter: "

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1019
    sput-object p0, Lcom/tencent/bugly/proguard/at;->r:Ljava/lang/String;

    return-void
.end method

.method public static setDeviceId(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    if-eqz p0, :cond_0

    .line 685
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 686
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/tencent/bugly/proguard/aa;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public static setDeviceModel(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    if-eqz p0, :cond_0

    .line 697
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 698
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/tencent/bugly/proguard/aa;->b(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public static setDumpFilePath(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 896
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 897
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not set App version because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    if-nez p0, :cond_1

    .line 901
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "setTombPath args context should not be null"

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    if-nez p1, :cond_2

    .line 905
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "tombstone path is null, will not set"

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 908
    :cond_2
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "user set tombstone path: "

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 910
    invoke-static {p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setDumpFilePath(Ljava/lang/String;)V

    return-void
.end method

.method public static setHandleNativeCrashInJava(Z)V
    .locals 3

    .line 1029
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 1030
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "Can not set App package because bugly is disable."

    invoke-static {p0, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 1033
    :cond_0
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    invoke-static {p0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v1

    const-string v2, "Should handle native crash in Java profile after handled in native profile: "

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1036
    invoke-static {p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setShouldHandleInJava(Z)V

    return-void
.end method

.method public static setHttpProxy(Ljava/lang/String;I)V
    .locals 3

    .line 6025
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x0

    .line 6026
    sput-object p0, Lcom/tencent/bugly/proguard/an;->a:Ljava/net/Proxy;

    return-void

    .line 6029
    :cond_0
    new-instance v0, Ljava/net/Proxy;

    sget-object v1, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    new-instance v2, Ljava/net/InetSocketAddress;

    invoke-direct {v2, p0, p1}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    invoke-direct {v0, v1, v2}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 6030
    sput-object v0, Lcom/tencent/bugly/proguard/an;->a:Ljava/net/Proxy;

    return-void
.end method

.method public static setHttpProxy(Ljava/net/InetAddress;I)V
    .locals 3

    if-nez p0, :cond_0

    const/4 p0, 0x0

    .line 6041
    sput-object p0, Lcom/tencent/bugly/proguard/an;->a:Ljava/net/Proxy;

    return-void

    .line 6044
    :cond_0
    new-instance v0, Ljava/net/Proxy;

    sget-object v1, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    new-instance v2, Ljava/net/InetSocketAddress;

    invoke-direct {v2, p0, p1}, Ljava/net/InetSocketAddress;-><init>(Ljava/net/InetAddress;I)V

    invoke-direct {v0, v1, v2}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 6045
    sput-object v0, Lcom/tencent/bugly/proguard/an;->a:Ljava/net/Proxy;

    return-void
.end method

.method public static setIsAppForeground(Landroid/content/Context;Z)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 p0, 0x0

    .line 853
    new-array p0, p0, [Ljava/lang/Object;

    const-string p1, "App fore and back status are no longer supported"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void
.end method

.method public static setIsDevelopmentDevice(Landroid/content/Context;Z)V
    .locals 2

    .line 860
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 861
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not set \'isDevelopmentDevice\' because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    const/4 v0, 0x0

    if-nez p0, :cond_1

    .line 865
    new-array p0, v0, [Ljava/lang/Object;

    const-string p1, "Context should not be null."

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    :cond_1
    if-eqz p1, :cond_2

    .line 869
    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "This is a development device."

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    goto :goto_0

    .line 871
    :cond_2
    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "This is not a development device."

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 873
    :goto_0
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    iput-boolean p1, p0, Lcom/tencent/bugly/proguard/aa;->I:Z

    return-void
.end method

.method public static setJavascriptMonitor(Landroid/webkit/WebView;Z)Z
    .locals 1

    const/4 v0, 0x0

    .line 1125
    invoke-static {p0, p1, v0}, Lcom/tencent/bugly/crashreport/CrashReport;->setJavascriptMonitor(Landroid/webkit/WebView;ZZ)Z

    move-result p0

    return p0
.end method

.method public static setJavascriptMonitor(Landroid/webkit/WebView;ZZ)Z
    .locals 2
    .annotation build Landroid/annotation/SuppressLint;
        value = {
            "SetJavaScriptEnabled"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p0, :cond_0

    .line 1146
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "WebView is null."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return v0

    .line 1149
    :cond_0
    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 1150
    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 1151
    new-instance v0, Lcom/tencent/bugly/crashreport/CrashReport$1;

    invoke-direct {v0, p0}, Lcom/tencent/bugly/crashreport/CrashReport$1;-><init>(Landroid/webkit/WebView;)V

    .line 1180
    invoke-static {v0, p1, p2}, Lcom/tencent/bugly/crashreport/CrashReport;->setJavascriptMonitor(Lcom/tencent/bugly/crashreport/CrashReport$a;ZZ)Z

    move-result p0

    return p0
.end method

.method public static setJavascriptMonitor(Lcom/tencent/bugly/crashreport/CrashReport$a;Z)Z
    .locals 1

    const/4 v0, 0x0

    .line 1198
    invoke-static {p0, p1, v0}, Lcom/tencent/bugly/crashreport/CrashReport;->setJavascriptMonitor(Lcom/tencent/bugly/crashreport/CrashReport$a;ZZ)Z

    move-result p0

    return p0
.end method

.method public static setJavascriptMonitor(Lcom/tencent/bugly/crashreport/CrashReport$a;ZZ)Z
    .locals 4
    .annotation build Landroid/annotation/SuppressLint;
        value = {
            "SetJavaScriptEnabled"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p0, :cond_0

    .line 1220
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "WebViewInterface is null."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return v0

    .line 1223
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v1

    if-nez v1, :cond_1

    .line 1224
    new-array p0, v0, [Ljava/lang/Object;

    const-string p1, "CrashReport has not been initialed! please to call method \'initCrashReport\' first!"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v0

    .line 1228
    :cond_1
    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "Set Javascript exception monitor of webview."

    invoke-static {v2, v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 1229
    sget-boolean v1, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v1, :cond_2

    .line 1230
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not set JavaScript monitor because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return v0

    :cond_2
    const/4 v1, 0x1

    .line 1233
    new-array v2, v1, [Ljava/lang/Object;

    invoke-interface {p0}, Lcom/tencent/bugly/crashreport/CrashReport$a;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v0

    const-string v3, "URL of webview is %s"

    invoke-static {v3, v2}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    if-nez p2, :cond_3

    .line 1238
    sget p2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    if-ge p2, v2, :cond_3

    .line 1240
    new-array p0, v0, [Ljava/lang/Object;

    const-string p1, "This interface is only available for Android 4.4 or later."

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v0

    .line 1245
    :cond_3
    new-array p2, v0, [Ljava/lang/Object;

    const-string v2, "Enable the javascript needed by webview monitor."

    invoke-static {v2, p2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 1246
    invoke-interface {p0}, Lcom/tencent/bugly/crashreport/CrashReport$a;->b()V

    .line 1247
    invoke-static {p0}, Lcom/tencent/bugly/crashreport/crash/h5/H5JavaScriptInterface;->getInstance(Lcom/tencent/bugly/crashreport/CrashReport$a;)Lcom/tencent/bugly/crashreport/crash/h5/H5JavaScriptInterface;

    move-result-object p2

    if-eqz p2, :cond_4

    .line 1249
    new-array v2, v0, [Ljava/lang/Object;

    const-string v3, "Add a secure javascript interface to the webview."

    invoke-static {v3, v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v2, "exceptionUploader"

    .line 1250
    invoke-interface {p0, p2, v2}, Lcom/tencent/bugly/crashreport/CrashReport$a;->a(Lcom/tencent/bugly/crashreport/crash/h5/H5JavaScriptInterface;Ljava/lang/String;)V

    :cond_4
    if-eqz p1, :cond_6

    .line 1253
    new-array p1, v1, [Ljava/lang/Object;

    invoke-static {}, Lcom/tencent/bugly/proguard/bc;->b()Ljava/lang/String;

    move-result-object p2

    aput-object p2, p1, v0

    const-string p2, "Inject bugly.js(v%s) to the webview."

    invoke-static {p2, p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 1254
    invoke-static {}, Lcom/tencent/bugly/proguard/bc;->a()Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_5

    .line 1256
    new-array p0, v1, [Ljava/lang/Object;

    invoke-static {}, Lcom/tencent/bugly/proguard/bc;->b()Ljava/lang/String;

    move-result-object p1

    aput-object p1, p0, v0

    const-string p1, "Failed to inject Bugly.js."

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v0

    .line 1259
    :cond_5
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "javascript:"

    invoke-virtual {p2, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {p0, p1}, Lcom/tencent/bugly/crashreport/CrashReport$a;->a(Ljava/lang/String;)V

    :cond_6
    return v1
.end method

.method public static setSdkExtraData(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 780
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 781
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not put SDK extra data because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    if-eqz p0, :cond_3

    .line 784
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-static {p2}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 787
    :cond_1
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    if-eqz p1, :cond_3

    if-nez p2, :cond_2

    goto :goto_0

    .line 4648
    :cond_2
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->T:Ljava/lang/Object;

    monitor-enter v0

    .line 4649
    :try_start_0
    iget-object p0, p0, Lcom/tencent/bugly/proguard/aa;->K:Ljava/util/HashMap;

    invoke-virtual {p0, p1, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4650
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_3
    :goto_0
    return-void
.end method

.method public static setServerUrl(Ljava/lang/String;)V
    .locals 1

    .line 1086
    invoke-static {p0}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p0}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 1090
    :cond_0
    invoke-static {p0}, Lcom/tencent/bugly/proguard/ac;->a(Ljava/lang/String;)V

    .line 1091
    sput-object p0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->a:Ljava/lang/String;

    .line 1092
    sput-object p0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->b:Ljava/lang/String;

    return-void

    .line 1087
    :cond_1
    :goto_0
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "URL is invalid."

    invoke-static {p0, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public static setSessionIntervalMills(J)V
    .locals 1

    .line 882
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 883
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not set \'SessionIntervalMills\' because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 886
    :cond_0
    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/s;->a(J)V

    return-void
.end method

.method public static setUserId(Landroid/content/Context;Ljava/lang/String;)V
    .locals 5

    .line 618
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 619
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not set user ID because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    if-nez p0, :cond_1

    .line 623
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Context should not be null when bugly has not been initialed!"

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 626
    :cond_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 627
    new-array p0, v1, [Ljava/lang/Object;

    const-string p1, "userId should not be null"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    .line 630
    :cond_2
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    const/4 v2, 0x1

    const/16 v3, 0x64

    if-le v0, v3, :cond_3

    .line 631
    invoke-virtual {p1, v1, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    const/4 v4, 0x3

    .line 632
    new-array v4, v4, [Ljava/lang/Object;

    aput-object p1, v4, v1

    .line 633
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v4, v2

    const/4 p1, 0x2

    aput-object v0, v4, p1

    const-string p1, "userId %s length is over limit %d substring to %s"

    .line 632
    invoke-static {p1, v4}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    move-object p1, v0

    .line 638
    :cond_3
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/aa;->f()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    return-void

    .line 642
    :cond_4
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    .line 3370
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->V:Ljava/lang/Object;

    monitor-enter v0

    if-nez p1, :cond_5

    :try_start_0
    const-string v3, "10000"

    goto :goto_0

    :cond_5
    move-object v3, p1

    .line 3374
    :goto_0
    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/tencent/bugly/proguard/aa;->l:Ljava/lang/String;

    .line 3375
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 644
    new-array p0, v2, [Ljava/lang/Object;

    aput-object p1, p0, v1

    const-string v0, "[user] set userId : %s"

    invoke-static {v0, p0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 647
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getInstance()Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    move-result-object p0

    if-eqz p0, :cond_6

    .line 649
    invoke-virtual {p0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setNativeUserId(Ljava/lang/String;)Z

    .line 653
    :cond_6
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result p0

    if-eqz p0, :cond_7

    .line 655
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->a()V

    :cond_7
    return-void

    :catchall_0
    move-exception p0

    .line 3375
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p0
.end method

.method public static setUserId(Ljava/lang/String;)V
    .locals 1

    .line 600
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 601
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "Can not set user ID because bugly is disable."

    invoke-static {p0, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 604
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 605
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v0, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 609
    :cond_1
    sget-object v0, Lcom/tencent/bugly/crashreport/CrashReport;->a:Landroid/content/Context;

    invoke-static {v0, p0}, Lcom/tencent/bugly/crashreport/CrashReport;->setUserId(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public static setUserSceneTag(Landroid/content/Context;I)V
    .locals 6

    .line 383
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 384
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not set tag caught because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    if-nez p0, :cond_1

    .line 388
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "setTag args context should not be null"

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    const/4 v0, 0x0

    if-gtz p1, :cond_2

    .line 393
    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "setTag args tagId should > 0"

    invoke-static {v2, v1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 396
    :cond_2
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    .line 2959
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->U:Ljava/lang/Object;

    monitor-enter v1

    .line 2960
    :try_start_0
    iget v2, p0, Lcom/tencent/bugly/proguard/aa;->w:I

    const/4 v3, 0x1

    if-eq v2, p1, :cond_3

    .line 2962
    iput p1, p0, Lcom/tencent/bugly/proguard/aa;->w:I

    const-string v4, "user scene tag %d changed to tag %d"

    const/4 v5, 0x2

    .line 2963
    new-array v5, v5, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v5, v0

    iget p0, p0, Lcom/tencent/bugly/proguard/aa;->w:I

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v5, v3

    invoke-static {v4, v5}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 2965
    :cond_3
    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 397
    new-array p0, v3, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, p0, v0

    const-string p1, "[param] set user scene tag: %d"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    :catchall_0
    move-exception p0

    .line 2965
    :try_start_1
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p0
.end method

.method public static startCrashReport()V
    .locals 2

    .line 317
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 318
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "Can not start crash report because bugly is disable."

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 321
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 322
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 326
    :cond_1
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/at;->b()V

    return-void
.end method

.method public static testANRCrash()V
    .locals 2

    .line 188
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 189
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "Can not test ANR crash because bugly is disable."

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 192
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 193
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    const/4 v0, 0x0

    .line 197
    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "start to create a anr crash for test!"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 198
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/at;->h()V

    return-void
.end method

.method public static testJavaCrash()V
    .locals 4

    .line 138
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 139
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "Can not test Java crash because bugly is disable."

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 142
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 143
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 147
    :cond_1
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 1983
    iget v1, v0, Lcom/tencent/bugly/proguard/aa;->x:I

    const/16 v2, 0x5e20

    if-eq v1, v2, :cond_2

    .line 1985
    iput v2, v0, Lcom/tencent/bugly/proguard/aa;->x:I

    const/4 v2, 0x2

    .line 1986
    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v2, v3

    const/4 v1, 0x1

    iget v0, v0, Lcom/tencent/bugly/proguard/aa;->x:I

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, v2, v1

    const-string v0, "server scene tag %d changed to tag %d"

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 151
    :cond_2
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "This Crash create for Test! You can go to Bugly see more detail!"

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public static testNativeCrash()V
    .locals 2

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 159
    invoke-static {v0, v0, v1}, Lcom/tencent/bugly/crashreport/CrashReport;->testNativeCrash(ZZZ)V

    return-void
.end method

.method public static testNativeCrash(ZZZ)V
    .locals 2

    .line 171
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 172
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "Can not test native crash because bugly is disable."

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 175
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/CrashModule;->getInstance()Lcom/tencent/bugly/CrashModule;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/bugly/CrashModule;->hasInitialized()Z

    move-result v0

    if-nez v0, :cond_1

    .line 176
    sget-object p0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string p1, "CrashReport has not been initialed! pls to call method \'initCrashReport\' first!"

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    const/4 v0, 0x0

    .line 180
    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "start to create a native crash for test!"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 181
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2}, Lcom/tencent/bugly/proguard/at;->a(ZZZ)V

    return-void
.end method

.method public static uploadUserInfo()V
    .locals 2

    .line 1099
    sget-boolean v0, Lcom/tencent/bugly/proguard/p;->a:Z

    if-nez v0, :cond_0

    .line 1100
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "Can not upload user info because bugly is disable."

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 1103
    :cond_0
    sget-object v0, Lcom/tencent/bugly/proguard/s;->b:Lcom/tencent/bugly/proguard/r;

    if-nez v0, :cond_1

    .line 1104
    sget-object v0, Lcom/tencent/bugly/proguard/al;->b:Ljava/lang/String;

    const-string v1, "Can not upload user info because bugly is not init."

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 1107
    :cond_1
    sget-object v0, Lcom/tencent/bugly/proguard/s;->b:Lcom/tencent/bugly/proguard/r;

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/r;->b()V

    return-void
.end method
