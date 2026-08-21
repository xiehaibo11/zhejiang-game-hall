.class public final Lcom/mbridge/msdk/mbdownload/a;
.super Ljava/lang/Object;
.source "DeltaUpdate.java"


# static fields
.field private static a:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    :try_start_0
    const-string v0, "bspatch"

    .line 52
    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 53
    sput-boolean v0, Lcom/mbridge/msdk/mbdownload/a;->a:Z
    :try_end_0
    .catch Ljava/lang/UnsatisfiedLinkError; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v0, 0x0

    .line 55
    sput-boolean v0, Lcom/mbridge/msdk/mbdownload/a;->a:Z

    :goto_0
    return-void
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 35
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    return-object p0
.end method
