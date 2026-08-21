.class public Lcom/qihoo360/replugin/component/provider/PluginProviderClient2;
.super Ljava/lang/Object;
.source "PluginProviderClient2.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "PluginProviderClient2"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static query(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;
    .locals 7

    const-string v0, ""

    .line 48
    invoke-static {p0, v0}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->acquireContentProviderClient(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ContentProviderClient;

    move-result-object v1

    const-string v0, "PluginProviderClient2"

    if-eqz v1, :cond_0

    .line 51
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object v2

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object v6, p5

    .line 52
    invoke-virtual/range {v1 .. v6}, Landroid/content/ContentProviderClient;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 54
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_0

    .line 55
    invoke-virtual {p0}, Landroid/os/RemoteException;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 59
    :cond_0
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    new-array p0, p0, [Ljava/lang/Object;

    const/4 p2, 0x0

    .line 60
    invoke-virtual {p1}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object p1

    aput-object p1, p0, p2

    const-string p1, "call query1 %s fail"

    invoke-static {p1, p0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static query(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;
    .locals 8

    const-string v0, ""

    .line 72
    invoke-static {p0, v0}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->acquireContentProviderClient(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ContentProviderClient;

    move-result-object v1

    const-string v0, "PluginProviderClient2"

    if-eqz v1, :cond_0

    .line 75
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object v2

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object v6, p5

    move-object v7, p6

    .line 76
    invoke-virtual/range {v1 .. v7}, Landroid/content/ContentProviderClient;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;

    move-result-object p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 78
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_0

    .line 79
    invoke-virtual {p0}, Landroid/os/RemoteException;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 84
    :cond_0
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    new-array p0, p0, [Ljava/lang/Object;

    const/4 p2, 0x0

    .line 85
    invoke-virtual {p1}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object p1

    aput-object p1, p0, p2

    const-string p1, "call query2 %s fail"

    invoke-static {p1, p0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static update(Landroid/content/Context;Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 2

    const-string v0, ""

    .line 97
    invoke-static {p0, v0}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->acquireContentProviderClient(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ContentProviderClient;

    move-result-object v0

    const-string v1, "PluginProviderClient2"

    if-eqz v0, :cond_0

    .line 100
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p0

    .line 101
    invoke-virtual {v0, p0, p2, p3, p4}, Landroid/content/ContentProviderClient;->update(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 103
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_0

    .line 104
    invoke-virtual {p0}, Landroid/os/RemoteException;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 108
    :cond_0
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    new-array p0, p0, [Ljava/lang/Object;

    const/4 p2, 0x0

    .line 109
    invoke-virtual {p1}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object p1

    aput-object p1, p0, p2

    const-string p1, "call update %s"

    invoke-static {p1, p0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 p0, -0x1

    return p0
.end method
