.class public Lnet/grandcentrix/tray/core/WrongTypeException;
.super Lnet/grandcentrix/tray/core/TrayRuntimeException;
.source "WrongTypeException.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Lnet/grandcentrix/tray/core/TrayRuntimeException;-><init>()V

    .line 11
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 0
    .param p1, "detailMessage"    # Ljava/lang/String;

    .line 14
    invoke-direct {p0, p1}, Lnet/grandcentrix/tray/core/TrayRuntimeException;-><init>(Ljava/lang/String;)V

    .line 15
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 0
    .param p1, "detailMessage"    # Ljava/lang/String;
    .param p2, "throwable"    # Ljava/lang/Throwable;

    .line 22
    invoke-direct {p0, p1, p2}, Lnet/grandcentrix/tray/core/TrayRuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 23
    return-void
.end method

.method public varargs constructor <init>(Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 0
    .param p1, "detailMessage"    # Ljava/lang/String;
    .param p2, "args"    # [Ljava/lang/Object;

    .line 18
    invoke-direct {p0, p1, p2}, Lnet/grandcentrix/tray/core/TrayRuntimeException;-><init>(Ljava/lang/String;[Ljava/lang/Object;)V

    .line 19
    return-void
.end method

.method public constructor <init>(Ljava/lang/Throwable;)V
    .locals 0
    .param p1, "throwable"    # Ljava/lang/Throwable;

    .line 26
    invoke-direct {p0, p1}, Lnet/grandcentrix/tray/core/TrayRuntimeException;-><init>(Ljava/lang/Throwable;)V

    .line 27
    return-void
.end method
