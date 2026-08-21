.class Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;
.super Landroid/database/ContentObserver;
.source "ContentProviderStorage.java"


# annotations
.annotation build Landroid/support/annotation/VisibleForTesting;
.end annotation

.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lnet/grandcentrix/tray/provider/ContentProviderStorage;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;


# direct methods
.method public constructor <init>(Lnet/grandcentrix/tray/provider/ContentProviderStorage;Landroid/os/Handler;)V
    .locals 0
    .param p1, "this$0"    # Lnet/grandcentrix/tray/provider/ContentProviderStorage;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "handler"    # Landroid/os/Handler;

    .line 71
    iput-object p1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    .line 72
    invoke-direct {p0, p2}, Landroid/database/ContentObserver;-><init>(Landroid/os/Handler;)V

    .line 73
    return-void
.end method


# virtual methods
.method public onChange(Z)V
    .locals 1
    .param p1, "selfChange"    # Z

    .line 77
    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0}, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;->onChange(ZLandroid/net/Uri;)V

    .line 78
    return-void
.end method

.method public onChange(ZLandroid/net/Uri;)V
    .locals 7
    .param p1, "selfChange"    # Z
    .param p2, "uri"    # Landroid/net/Uri;

    .line 82
    if-nez p2, :cond_0

    .line 85
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    invoke-static {v0}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->access$000(Lnet/grandcentrix/tray/provider/ContentProviderStorage;)Lnet/grandcentrix/tray/provider/TrayUri;

    move-result-object v0

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->builder()Lnet/grandcentrix/tray/provider/TrayUri$a;

    move-result-object v0

    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    invoke-virtual {v1}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a()Landroid/net/Uri;

    move-result-object p2

    .line 89
    :cond_0
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    invoke-static {v0}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->access$100(Lnet/grandcentrix/tray/provider/ContentProviderStorage;)Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    move-result-object v0

    invoke-virtual {v0, p2}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->queryProviderSafe(Landroid/net/Uri;)Ljava/util/List;

    move-result-object v0

    .line 92
    .local v0, "trayItems":Ljava/util/List;, "Ljava/util/List<Lnet/grandcentrix/tray/core/TrayItem;>;"
    new-instance v1, Ljava/util/HashSet;

    iget-object v2, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    iget-object v2, v2, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mListeners:Ljava/util/WeakHashMap;

    .line 93
    invoke-virtual {v2}, Ljava/util/WeakHashMap;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/util/HashSet;-><init>(Ljava/util/Collection;)V

    .line 96
    .local v1, "entries":Ljava/util/Set;, "Ljava/util/Set<Ljava/util/Map$Entry<Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;Landroid/os/Handler;>;>;"
    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 97
    .local v3, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;Landroid/os/Handler;>;"
    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;

    .line 98
    .local v4, "listener":Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Landroid/os/Handler;

    .line 99
    .local v5, "handler":Landroid/os/Handler;
    if-eqz v5, :cond_1

    .line 101
    new-instance v6, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b$a;

    invoke-direct {v6, p0, v4, v0}, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b$a;-><init>(Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;Ljava/util/List;)V

    invoke-virtual {v5, v6}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_1

    .line 108
    :cond_1
    invoke-interface {v4, v0}, Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;->onTrayPreferenceChanged(Ljava/util/Collection;)V

    .line 110
    .end local v3    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;Landroid/os/Handler;>;"
    .end local v4    # "listener":Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;
    .end local v5    # "handler":Landroid/os/Handler;
    :goto_1
    goto :goto_0

    .line 111
    :cond_2
    return-void
.end method
