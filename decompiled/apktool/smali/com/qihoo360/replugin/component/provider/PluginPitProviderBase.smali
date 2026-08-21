.class public abstract Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;
.super Landroid/content/ContentProvider;
.source "PluginPitProviderBase.java"


# static fields
.field public static final AUTHORITY_PREFIX:Ljava/lang/String;


# instance fields
.field mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 37
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".Plugin.NP."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->AUTHORITY_PREFIX:Ljava/lang/String;

    return-void
.end method

.method protected constructor <init>(Ljava/lang/String;)V
    .locals 1

    .line 39
    invoke-direct {p0}, Landroid/content/ContentProvider;-><init>()V

    .line 40
    new-instance v0, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-direct {v0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    return-void
.end method


# virtual methods
.method public bulkInsert(Landroid/net/Uri;[Landroid/content/ContentValues;)I
    .locals 2

    .line 106
    iget-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->toPluginUri(Landroid/net/Uri;)Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;

    move-result-object p1

    const/4 v0, -0x1

    if-nez p1, :cond_0

    return v0

    .line 110
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->getProvider(Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;)Landroid/content/ContentProvider;

    move-result-object v1

    if-nez v1, :cond_1

    return v0

    .line 114
    :cond_1
    iget-object p1, p1, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->transferredUri:Landroid/net/Uri;

    invoke-virtual {v1, p1, p2}, Landroid/content/ContentProvider;->bulkInsert(Landroid/net/Uri;[Landroid/content/ContentValues;)I

    move-result p1

    return p1
.end method

.method public delete(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 2

    .line 119
    iget-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->toPluginUri(Landroid/net/Uri;)Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;

    move-result-object p1

    const/4 v0, -0x1

    if-nez p1, :cond_0

    return v0

    .line 123
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->getProvider(Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;)Landroid/content/ContentProvider;

    move-result-object v1

    if-nez v1, :cond_1

    return v0

    .line 127
    :cond_1
    iget-object p1, p1, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->transferredUri:Landroid/net/Uri;

    invoke-virtual {v1, p1, p2, p3}, Landroid/content/ContentProvider;->delete(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public getType(Landroid/net/Uri;)Ljava/lang/String;
    .locals 2

    .line 80
    iget-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->toPluginUri(Landroid/net/Uri;)Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;

    move-result-object p1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 84
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->getProvider(Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;)Landroid/content/ContentProvider;

    move-result-object v1

    if-nez v1, :cond_1

    return-object v0

    .line 88
    :cond_1
    iget-object p1, p1, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->transferredUri:Landroid/net/Uri;

    invoke-virtual {v1, p1}, Landroid/content/ContentProvider;->getType(Landroid/net/Uri;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public insert(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;
    .locals 2

    .line 93
    iget-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->toPluginUri(Landroid/net/Uri;)Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;

    move-result-object p1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 97
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->getProvider(Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;)Landroid/content/ContentProvider;

    move-result-object v1

    if-nez v1, :cond_1

    return-object v0

    .line 101
    :cond_1
    iget-object p1, p1, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->transferredUri:Landroid/net/Uri;

    invoke-virtual {v1, p1, p2}, Landroid/content/ContentProvider;->insert(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;

    move-result-object p1

    return-object p1
.end method

.method public onCreate()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public onLowMemory()V
    .locals 2

    .line 145
    iget-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    iget-object v0, v0, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->mProviderAuthorityMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/ContentProvider;

    .line 146
    invoke-virtual {v1}, Landroid/content/ContentProvider;->onLowMemory()V

    goto :goto_0

    .line 148
    :cond_0
    invoke-super {p0}, Landroid/content/ContentProvider;->onLowMemory()V

    return-void
.end method

.method public onTrimMemory(I)V
    .locals 2

    .line 154
    iget-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    iget-object v0, v0, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->mProviderAuthorityMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/ContentProvider;

    .line 155
    invoke-virtual {v1, p1}, Landroid/content/ContentProvider;->onTrimMemory(I)V

    goto :goto_0

    .line 157
    :cond_0
    invoke-super {p0, p1}, Landroid/content/ContentProvider;->onTrimMemory(I)V

    return-void
.end method

.method public query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;
    .locals 8

    .line 51
    iget-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->toPluginUri(Landroid/net/Uri;)Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;

    move-result-object p1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 55
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->getProvider(Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;)Landroid/content/ContentProvider;

    move-result-object v2

    if-nez v2, :cond_1

    return-object v0

    .line 59
    :cond_1
    iget-object v3, p1, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->transferredUri:Landroid/net/Uri;

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    move-object v7, p5

    invoke-virtual/range {v2 .. v7}, Landroid/content/ContentProvider;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    return-object p1
.end method

.method public query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;
    .locals 9

    .line 67
    iget-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->toPluginUri(Landroid/net/Uri;)Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;

    move-result-object p1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 71
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->getProvider(Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;)Landroid/content/ContentProvider;

    move-result-object v2

    if-nez v2, :cond_1

    return-object v0

    .line 75
    :cond_1
    iget-object v3, p1, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->transferredUri:Landroid/net/Uri;

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    move-object v7, p5

    move-object v8, p6

    invoke-virtual/range {v2 .. v8}, Landroid/content/ContentProvider;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;

    move-result-object p1

    return-object p1
.end method

.method public update(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 2

    .line 132
    iget-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->toPluginUri(Landroid/net/Uri;)Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;

    move-result-object p1

    const/4 v0, -0x1

    if-nez p1, :cond_0

    return v0

    .line 136
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->mHelper:Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;

    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->getProvider(Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;)Landroid/content/ContentProvider;

    move-result-object v1

    if-nez v1, :cond_1

    return v0

    .line 140
    :cond_1
    iget-object p1, p1, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->transferredUri:Landroid/net/Uri;

    invoke-virtual {v1, p1, p2, p3, p4}, Landroid/content/ContentProvider;->update(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1

    return p1
.end method
