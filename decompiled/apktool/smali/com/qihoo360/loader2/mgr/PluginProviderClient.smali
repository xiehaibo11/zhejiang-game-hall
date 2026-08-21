.class public Lcom/qihoo360/loader2/mgr/PluginProviderClient;
.super Ljava/lang/Object;
.source "PluginProviderClient.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static acquireContentProviderClient(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ContentProviderClient;
    .locals 0

    .line 46
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->acquireContentProviderClient(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ContentProviderClient;

    move-result-object p0

    return-object p0
.end method

.method public static bulkInsert(Landroid/content/Context;Landroid/net/Uri;[Landroid/content/ContentValues;)I
    .locals 0

    .line 82
    invoke-static {p0, p1, p2}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->bulkInsert(Landroid/content/Context;Landroid/net/Uri;[Landroid/content/ContentValues;)I

    move-result p0

    return p0
.end method

.method public static delete(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 0

    .line 89
    invoke-static {p0, p1, p2, p3}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->delete(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getType(Landroid/content/Context;Landroid/net/Uri;)Ljava/lang/String;
    .locals 0

    .line 68
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->getType(Landroid/content/Context;Landroid/net/Uri;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static insert(Landroid/content/Context;Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;
    .locals 0

    .line 75
    invoke-static {p0, p1, p2}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->insert(Landroid/content/Context;Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;

    move-result-object p0

    return-object p0
.end method

.method public static notifyChange(Landroid/content/Context;Landroid/net/Uri;Landroid/database/ContentObserver;)V
    .locals 0

    .line 146
    invoke-static {p0, p1, p2}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->notifyChange(Landroid/content/Context;Landroid/net/Uri;Landroid/database/ContentObserver;)V

    return-void
.end method

.method public static notifyChange(Landroid/content/Context;Landroid/net/Uri;Landroid/database/ContentObserver;Z)V
    .locals 0

    .line 153
    invoke-static {p0, p1, p2, p3}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->notifyChange(Landroid/content/Context;Landroid/net/Uri;Landroid/database/ContentObserver;Z)V

    return-void
.end method

.method public static openFileDescriptor(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;
    .locals 0

    .line 124
    invoke-static {p0, p1, p2}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->openFileDescriptor(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;

    move-result-object p0

    return-object p0
.end method

.method public static openFileDescriptor(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;
    .locals 0

    .line 132
    invoke-static {p0, p1, p2, p3}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->openFileDescriptor(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;

    move-result-object p0

    return-object p0
.end method

.method public static openInputStream(Landroid/content/Context;Landroid/net/Uri;)Ljava/io/InputStream;
    .locals 0

    .line 103
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->openInputStream(Landroid/content/Context;Landroid/net/Uri;)Ljava/io/InputStream;

    move-result-object p0

    return-object p0
.end method

.method public static openOutputStream(Landroid/content/Context;Landroid/net/Uri;)Ljava/io/OutputStream;
    .locals 0

    .line 110
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->openOutputStream(Landroid/content/Context;Landroid/net/Uri;)Ljava/io/OutputStream;

    move-result-object p0

    return-object p0
.end method

.method public static openOutputStream(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;)Ljava/io/OutputStream;
    .locals 0

    .line 117
    invoke-static {p0, p1, p2}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->openOutputStream(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;)Ljava/io/OutputStream;

    move-result-object p0

    return-object p0
.end method

.method public static query(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;
    .locals 0

    .line 53
    invoke-static/range {p0 .. p5}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->query(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p0

    return-object p0
.end method

.method public static query(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;
    .locals 0

    .line 61
    invoke-static/range {p0 .. p6}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->query(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;

    move-result-object p0

    return-object p0
.end method

.method public static registerContentObserver(Landroid/content/Context;Landroid/net/Uri;ZLandroid/database/ContentObserver;)V
    .locals 0

    .line 139
    invoke-static {p0, p1, p2, p3}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->registerContentObserver(Landroid/content/Context;Landroid/net/Uri;ZLandroid/database/ContentObserver;)V

    return-void
.end method

.method public static toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;
    .locals 0

    .line 160
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p0

    return-object p0
.end method

.method public static toCalledUri(Landroid/content/Context;Ljava/lang/String;Landroid/net/Uri;I)Landroid/net/Uri;
    .locals 0

    .line 167
    invoke-static {p0, p1, p2, p3}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Ljava/lang/String;Landroid/net/Uri;I)Landroid/net/Uri;

    move-result-object p0

    return-object p0
.end method

.method public static update(Landroid/content/Context;Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 0

    .line 96
    invoke-static {p0, p1, p2, p3, p4}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->update(Landroid/content/Context;Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p0

    return p0
.end method
