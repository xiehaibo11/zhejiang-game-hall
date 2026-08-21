.class public final Lcom/mbridge/msdk/widget/custom/b/d;
.super Ljava/lang/Object;
.source "Logger.java"


# static fields
.field public static a:Z = false

.field public static b:Ljava/lang/String; = "com.mbridge.msdk.widget.custom.baseview.MB"


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 2

    .line 55
    sget-boolean v0, Lcom/mbridge/msdk/widget/custom/b/d;->a:Z

    if-eqz v0, :cond_0

    .line 56
    new-instance v0, Ljava/lang/SecurityManager;

    invoke-direct {v0}, Ljava/lang/SecurityManager;-><init>()V

    .line 58
    new-instance v0, Ljava/lang/Throwable;

    invoke-direct {v0}, Ljava/lang/Throwable;-><init>()V

    .line 59
    invoke-virtual {v0}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v0

    const/4 v1, 0x1

    .line 60
    aget-object v0, v0, v1

    invoke-virtual {v0}, Ljava/lang/StackTraceElement;->getFileName()Ljava/lang/String;

    move-result-object v0

    .line 61
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method
