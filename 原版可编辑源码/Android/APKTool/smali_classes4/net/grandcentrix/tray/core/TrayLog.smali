.class public Lnet/grandcentrix/tray/core/TrayLog;
.super Ljava/lang/Object;
.source "TrayLog.java"


# static fields
.field public static DEBUG:Z

.field private static TAG:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 16
    const-string v0, "Tray"

    sput-object v0, Lnet/grandcentrix/tray/core/TrayLog;->TAG:Ljava/lang/String;

    .line 18
    sget-object v0, Lnet/grandcentrix/tray/core/TrayLog;->TAG:Ljava/lang/String;

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Log;->isLoggable(Ljava/lang/String;I)Z

    move-result v0

    sput-boolean v0, Lnet/grandcentrix/tray/core/TrayLog;->DEBUG:Z

    return-void
.end method

.method constructor <init>()V
    .locals 2

    .line 83
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 84
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "no instances"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public static d(Ljava/lang/String;)V
    .locals 1
    .param p0, "s"    # Ljava/lang/String;

    .line 21
    if-nez p0, :cond_0

    .line 22
    const-string p0, ""

    .line 24
    :cond_0
    sget-object v0, Lnet/grandcentrix/tray/core/TrayLog;->TAG:Ljava/lang/String;

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 25
    return-void
.end method

.method public static e(Ljava/lang/String;)V
    .locals 1
    .param p0, "s"    # Ljava/lang/String;

    .line 28
    if-nez p0, :cond_0

    .line 29
    const-string p0, ""

    .line 31
    :cond_0
    sget-object v0, Lnet/grandcentrix/tray/core/TrayLog;->TAG:Ljava/lang/String;

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 32
    return-void
.end method

.method public static e(Ljava/lang/Throwable;Ljava/lang/String;)V
    .locals 1
    .param p0, "tr"    # Ljava/lang/Throwable;
    .param p1, "s"    # Ljava/lang/String;

    .line 35
    sget-object v0, Lnet/grandcentrix/tray/core/TrayLog;->TAG:Ljava/lang/String;

    invoke-static {v0, p1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 36
    return-void
.end method

.method public static setTag(Ljava/lang/String;)V
    .locals 2
    .param p0, "tag"    # Ljava/lang/String;

    .line 49
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Changing log tag to "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->d(Ljava/lang/String;)V

    .line 50
    sput-object p0, Lnet/grandcentrix/tray/core/TrayLog;->TAG:Ljava/lang/String;

    .line 53
    sget-object v0, Lnet/grandcentrix/tray/core/TrayLog;->TAG:Ljava/lang/String;

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Log;->isLoggable(Ljava/lang/String;I)Z

    move-result v0

    sput-boolean v0, Lnet/grandcentrix/tray/core/TrayLog;->DEBUG:Z

    .line 54
    return-void
.end method

.method public static v(Ljava/lang/String;)V
    .locals 1
    .param p0, "s"    # Ljava/lang/String;

    .line 57
    sget-boolean v0, Lnet/grandcentrix/tray/core/TrayLog;->DEBUG:Z

    if-eqz v0, :cond_1

    .line 58
    if-nez p0, :cond_0

    .line 59
    const-string p0, ""

    .line 61
    :cond_0
    sget-object v0, Lnet/grandcentrix/tray/core/TrayLog;->TAG:Ljava/lang/String;

    invoke-static {v0, p0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 63
    :cond_1
    return-void
.end method

.method public static w(Ljava/lang/String;)V
    .locals 1
    .param p0, "s"    # Ljava/lang/String;

    .line 66
    if-nez p0, :cond_0

    .line 67
    const-string p0, ""

    .line 69
    :cond_0
    sget-object v0, Lnet/grandcentrix/tray/core/TrayLog;->TAG:Ljava/lang/String;

    invoke-static {v0, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 70
    return-void
.end method

.method public static wtf(Ljava/lang/String;)V
    .locals 1
    .param p0, "s"    # Ljava/lang/String;

    .line 77
    if-nez p0, :cond_0

    .line 78
    const-string p0, ""

    .line 80
    :cond_0
    sget-object v0, Lnet/grandcentrix/tray/core/TrayLog;->TAG:Ljava/lang/String;

    invoke-static {v0, p0}, Landroid/util/Log;->wtf(Ljava/lang/String;Ljava/lang/String;)I

    .line 81
    return-void
.end method

.method public static wtf(Ljava/lang/Throwable;Ljava/lang/String;)V
    .locals 1
    .param p0, "tr"    # Ljava/lang/Throwable;
    .param p1, "s"    # Ljava/lang/String;

    .line 73
    sget-object v0, Lnet/grandcentrix/tray/core/TrayLog;->TAG:Ljava/lang/String;

    invoke-static {v0, p1, p0}, Landroid/util/Log;->wtf(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 74
    return-void
.end method
