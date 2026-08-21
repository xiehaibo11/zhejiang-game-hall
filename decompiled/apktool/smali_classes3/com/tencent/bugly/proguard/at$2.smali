.class final Lcom/tencent/bugly/proguard/at$2;
.super Ljava/lang/Object;
.source "BUGLY"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tencent/bugly/proguard/at;->g()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tencent/bugly/proguard/at;


# direct methods
.method constructor <init>(Lcom/tencent/bugly/proguard/at;)V
    .locals 0

    .line 272
    iput-object p1, p0, Lcom/tencent/bugly/proguard/at$2;->a:Lcom/tencent/bugly/proguard/at;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 275
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getInstance()Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->unBlockSigquit(Z)V

    return-void
.end method
