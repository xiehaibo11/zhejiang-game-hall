.class public Lnet/grandcentrix/tray/provider/ContentProviderStorage;
.super Lnet/grandcentrix/tray/core/TrayStorage;
.source "ContentProviderStorage.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;
    }
.end annotation


# static fields
.field public static final VERSION:Ljava/lang/String; = "version"


# instance fields
.field private final mContext:Landroid/content/Context;

.field mListeners:Ljava/util/WeakHashMap;
    .annotation build Landroid/support/annotation/VisibleForTesting;
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/WeakHashMap<",
            "Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;",
            "Landroid/os/Handler;",
            ">;"
        }
    .end annotation
.end field

.field mObserver:Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;
    .annotation build Landroid/support/annotation/VisibleForTesting;
    .end annotation
.end field

.field mObserverThread:Landroid/os/HandlerThread;
    .annotation build Landroid/support/annotation/VisibleForTesting;
    .end annotation
.end field

.field private final mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

.field private volatile mRegisteredContentObserver:Z

.field private final mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Lnet/grandcentrix/tray/core/TrayStorage$a;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "module"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p3, "type"    # Lnet/grandcentrix/tray/core/TrayStorage$a;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param

    .line 144
    invoke-direct {p0, p2, p3}, Lnet/grandcentrix/tray/core/TrayStorage;-><init>(Ljava/lang/String;Lnet/grandcentrix/tray/core/TrayStorage$a;)V

    .line 119
    new-instance v0, Ljava/util/WeakHashMap;

    invoke-direct {v0}, Ljava/util/WeakHashMap;-><init>()V

    iput-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mListeners:Ljava/util/WeakHashMap;

    .line 138
    const/4 v0, 0x0

    iput-boolean v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mRegisteredContentObserver:Z

    .line 145
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mContext:Landroid/content/Context;

    .line 146
    new-instance v0, Lnet/grandcentrix/tray/provider/TrayUri;

    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    .line 147
    new-instance v0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    .line 148
    return-void
.end method

.method static synthetic access$000(Lnet/grandcentrix/tray/provider/ContentProviderStorage;)Lnet/grandcentrix/tray/provider/TrayUri;
    .locals 1
    .param p0, "x0"    # Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    .line 58
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    return-object v0
.end method

.method static synthetic access$100(Lnet/grandcentrix/tray/provider/ContentProviderStorage;)Lnet/grandcentrix/tray/provider/TrayProviderHelper;
    .locals 1
    .param p0, "x0"    # Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    .line 58
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    return-object v0
.end method

.method static synthetic access$200(Lnet/grandcentrix/tray/provider/ContentProviderStorage;)Landroid/content/Context;
    .locals 1
    .param p0, "x0"    # Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    .line 58
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mContext:Landroid/content/Context;

    return-object v0
.end method

.method static synthetic access$302(Lnet/grandcentrix/tray/provider/ContentProviderStorage;Z)Z
    .locals 0
    .param p0, "x0"    # Lnet/grandcentrix/tray/provider/ContentProviderStorage;
    .param p1, "x1"    # Z

    .line 58
    iput-boolean p1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mRegisteredContentObserver:Z

    return p1
.end method


# virtual methods
.method public annex(Lnet/grandcentrix/tray/core/TrayStorage;)V
    .locals 2
    .param p1, "oldStorage"    # Lnet/grandcentrix/tray/core/TrayStorage;

    .line 152
    invoke-interface {p1}, Lnet/grandcentrix/tray/core/PreferenceStorage;->getAll()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lnet/grandcentrix/tray/core/TrayItem;

    .line 153
    .local v1, "trayItem":Lnet/grandcentrix/tray/core/TrayItem;
    invoke-virtual {p0, v1}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->put(Lnet/grandcentrix/tray/core/TrayItem;)Z

    .line 154
    .end local v1    # "trayItem":Lnet/grandcentrix/tray/core/TrayItem;
    goto :goto_0

    .line 156
    :cond_0
    invoke-interface {p1}, Lnet/grandcentrix/tray/core/PreferenceStorage;->wipe()Z

    .line 157
    return-void
.end method

.method public clear()Z
    .locals 2

    .line 161
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->builder()Lnet/grandcentrix/tray/provider/TrayUri$a;

    move-result-object v0

    .line 162
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 163
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getType()Lnet/grandcentrix/tray/core/TrayStorage$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Lnet/grandcentrix/tray/core/TrayStorage$a;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 164
    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a()Landroid/net/Uri;

    move-result-object v0

    .line 165
    .local v0, "uri":Landroid/net/Uri;
    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-virtual {v1, v0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->remove(Landroid/net/Uri;)Z

    move-result v1

    return v1
.end method

.method public bridge synthetic get(Ljava/lang/String;)Ljava/lang/Object;
    .locals 0
    .param p1    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation build Landroid/support/annotation/Nullable;
    .end annotation

    .line 58
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->get(Ljava/lang/String;)Lnet/grandcentrix/tray/core/TrayItem;

    move-result-object p1

    return-object p1
.end method

.method public get(Ljava/lang/String;)Lnet/grandcentrix/tray/core/TrayItem;
    .locals 7
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation build Landroid/support/annotation/Nullable;
    .end annotation

    .line 171
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->builder()Lnet/grandcentrix/tray/provider/TrayUri$a;

    move-result-object v0

    .line 172
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getType()Lnet/grandcentrix/tray/core/TrayStorage$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Lnet/grandcentrix/tray/core/TrayStorage$a;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 173
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 174
    invoke-virtual {v0, p1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 175
    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a()Landroid/net/Uri;

    move-result-object v0

    .line 176
    .local v0, "uri":Landroid/net/Uri;
    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-virtual {v1, v0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->queryProviderSafe(Landroid/net/Uri;)Ljava/util/List;

    move-result-object v1

    .line 177
    .local v1, "prefs":Ljava/util/List;, "Ljava/util/List<Lnet/grandcentrix/tray/core/TrayItem;>;"
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    .line 178
    .local v2, "size":I
    const/4 v3, 0x1

    if-le v2, v3, :cond_0

    .line 179
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "found more than one item for key \'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\' in module "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 180
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ". This can be caused by using the same name for a device and user specific preference."

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 179
    invoke-static {v3}, Lnet/grandcentrix/tray/core/TrayLog;->w(Ljava/lang/String;)V

    .line 182
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_0

    .line 183
    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lnet/grandcentrix/tray/core/TrayItem;

    .line 184
    .local v4, "pref":Lnet/grandcentrix/tray/core/TrayItem;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "item #"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lnet/grandcentrix/tray/core/TrayLog;->d(Ljava/lang/String;)V

    .line 182
    .end local v4    # "pref":Lnet/grandcentrix/tray/core/TrayItem;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 187
    .end local v3    # "i":I
    :cond_0
    if-lez v2, :cond_1

    const/4 v3, 0x0

    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lnet/grandcentrix/tray/core/TrayItem;

    goto :goto_1

    :cond_1
    const/4 v3, 0x0

    :goto_1
    return-object v3
.end method

.method public getAll()Ljava/util/Collection;
    .locals 2
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Collection<",
            "Lnet/grandcentrix/tray/core/TrayItem;",
            ">;"
        }
    .end annotation

    .line 193
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->builder()Lnet/grandcentrix/tray/provider/TrayUri$a;

    move-result-object v0

    .line 194
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getType()Lnet/grandcentrix/tray/core/TrayStorage$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Lnet/grandcentrix/tray/core/TrayStorage$a;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 195
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 196
    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a()Landroid/net/Uri;

    move-result-object v0

    .line 197
    .local v0, "uri":Landroid/net/Uri;
    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-virtual {v1, v0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->queryProviderSafe(Landroid/net/Uri;)Ljava/util/List;

    move-result-object v1

    return-object v1
.end method

.method public getContext()Landroid/content/Context;
    .locals 1

    .line 205
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mContext:Landroid/content/Context;

    return-object v0
.end method

.method public getVersion()I
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lnet/grandcentrix/tray/core/TrayException;
        }
    .end annotation

    .line 210
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->builder()Lnet/grandcentrix/tray/provider/TrayUri$a;

    move-result-object v0

    .line 211
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Z)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 212
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getType()Lnet/grandcentrix/tray/core/TrayStorage$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Lnet/grandcentrix/tray/core/TrayStorage$a;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 213
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 214
    const-string v1, "version"

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 215
    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a()Landroid/net/Uri;

    move-result-object v0

    .line 216
    .local v0, "internalUri":Landroid/net/Uri;
    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-virtual {v1, v0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->queryProvider(Landroid/net/Uri;)Ljava/util/List;

    move-result-object v1

    .line 217
    .local v1, "trayItems":Ljava/util/List;, "Ljava/util/List<Lnet/grandcentrix/tray/core/TrayItem;>;"
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    const/4 v3, 0x0

    if-nez v2, :cond_0

    .line 219
    return v3

    .line 221
    :cond_0
    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lnet/grandcentrix/tray/core/TrayItem;

    invoke-virtual {v2}, Lnet/grandcentrix/tray/core/TrayItem;->value()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    return v2
.end method

.method public bridge synthetic put(Ljava/lang/Object;)Z
    .locals 0

    .line 58
    check-cast p1, Lnet/grandcentrix/tray/core/TrayItem;

    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->put(Lnet/grandcentrix/tray/core/TrayItem;)Z

    move-result p1

    return p1
.end method

.method public put(Ljava/lang/String;Ljava/lang/Object;)Z
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "data"    # Ljava/lang/Object;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param

    .line 231
    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0, p2}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->put(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public put(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Z
    .locals 3
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "migrationKey"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param
    .param p3, "data"    # Ljava/lang/Object;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param

    .line 248
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getType()Lnet/grandcentrix/tray/core/TrayStorage$a;

    move-result-object v0

    sget-object v1, Lnet/grandcentrix/tray/core/TrayStorage$a;->a:Lnet/grandcentrix/tray/core/TrayStorage$a;

    if-eq v0, v1, :cond_1

    .line 253
    if-nez p3, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    invoke-static {p3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 255
    .local v0, "value":Ljava/lang/String;
    :goto_0
    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v1}, Lnet/grandcentrix/tray/provider/TrayUri;->builder()Lnet/grandcentrix/tray/provider/TrayUri$a;

    move-result-object v1

    .line 256
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getType()Lnet/grandcentrix/tray/core/TrayStorage$a;

    move-result-object v2

    invoke-virtual {v1, v2}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Lnet/grandcentrix/tray/core/TrayStorage$a;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 257
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lnet/grandcentrix/tray/provider/TrayUri$a;->b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 258
    invoke-virtual {v1, p1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 259
    invoke-virtual {v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a()Landroid/net/Uri;

    move-result-object v1

    .line 260
    .local v1, "uri":Landroid/net/Uri;
    iget-object v2, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-virtual {v2, v1, v0, p2}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->persist(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    return v2

    .line 249
    .end local v0    # "value":Ljava/lang/String;
    .end local v1    # "uri":Landroid/net/Uri;
    :cond_1
    new-instance v0, Lnet/grandcentrix/tray/core/TrayRuntimeException;

    const-string v1, "writing data into a storage with type UNDEFINED is forbidden. Only Read and delete is allowed."

    invoke-direct {v0, v1}, Lnet/grandcentrix/tray/core/TrayRuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public put(Lnet/grandcentrix/tray/core/TrayItem;)Z
    .locals 3
    .param p1, "item"    # Lnet/grandcentrix/tray/core/TrayItem;

    .line 226
    invoke-virtual {p1}, Lnet/grandcentrix/tray/core/TrayItem;->key()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lnet/grandcentrix/tray/core/TrayItem;->migratedKey()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lnet/grandcentrix/tray/core/TrayItem;->value()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v1, v2}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->put(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public declared-synchronized registerOnTrayPreferenceChangeListener(Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;)V
    .locals 5
    .param p1, "listener"    # Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation build Landroid/annotation/TargetApi;
        value = 0x10
    .end annotation

    monitor-enter p0

    .line 275
    if-nez p1, :cond_0

    .line 276
    monitor-exit p0

    return-void

    .line 281
    :cond_0
    const/4 v0, 0x0

    .line 282
    .local v0, "handler":Landroid/os/Handler;
    :try_start_0
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    .line 283
    .local v1, "looper":Landroid/os/Looper;
    if-eqz v1, :cond_1

    .line 284
    new-instance v2, Landroid/os/Handler;

    invoke-direct {v2, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    move-object v0, v2

    .line 287
    .end local p0    # "this":Lnet/grandcentrix/tray/provider/ContentProviderStorage;
    :cond_1
    iget-object v2, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mListeners:Ljava/util/WeakHashMap;

    invoke-virtual {v2, p1, v0}, Ljava/util/WeakHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 289
    iget-object v2, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mListeners:Ljava/util/WeakHashMap;

    invoke-virtual {v2}, Ljava/util/WeakHashMap;->keySet()Ljava/util/Set;

    move-result-object v2

    .line 291
    .local v2, "listeners":Ljava/util/Collection;, "Ljava/util/Collection<Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;>;"
    invoke-interface {v2}, Ljava/util/Collection;->size()I

    move-result v3

    const/4 v4, 0x1

    if-ne v3, v4, :cond_3

    .line 294
    new-instance v3, Lnet/grandcentrix/tray/provider/ContentProviderStorage$a;

    const-string v4, "observer"

    invoke-direct {v3, p0, v4}, Lnet/grandcentrix/tray/provider/ContentProviderStorage$a;-><init>(Lnet/grandcentrix/tray/provider/ContentProviderStorage;Ljava/lang/String;)V

    iput-object v3, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mObserverThread:Landroid/os/HandlerThread;

    .line 310
    iget-object v3, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mObserverThread:Landroid/os/HandlerThread;

    invoke-virtual {v3}, Landroid/os/HandlerThread;->start()V

    .line 315
    :cond_2
    iget-boolean v3, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mRegisteredContentObserver:Z

    if-eqz v3, :cond_2

    .line 316
    const/4 v3, 0x0

    iput-boolean v3, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mRegisteredContentObserver:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 321
    :cond_3
    monitor-exit p0

    return-void

    .line 274
    .end local v0    # "handler":Landroid/os/Handler;
    .end local v1    # "looper":Landroid/os/Looper;
    .end local v2    # "listeners":Ljava/util/Collection;, "Ljava/util/Collection<Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;>;"
    .end local p1    # "listener":Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;
    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public remove(Ljava/lang/String;)Z
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param

    .line 326
    if-eqz p1, :cond_1

    .line 330
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->builder()Lnet/grandcentrix/tray/provider/TrayUri$a;

    move-result-object v0

    .line 331
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getType()Lnet/grandcentrix/tray/core/TrayStorage$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Lnet/grandcentrix/tray/core/TrayStorage$a;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 332
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 333
    invoke-virtual {v0, p1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 334
    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a()Landroid/net/Uri;

    move-result-object v0

    .line 335
    .local v0, "uri":Landroid/net/Uri;
    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-virtual {v1, v0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->removeAndCount(Landroid/net/Uri;)I

    move-result v1

    if-lez v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1

    .line 327
    .end local v0    # "uri":Landroid/net/Uri;
    :cond_1
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "null is not valid. use clear or wipe to delete all preferences"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public setVersion(I)Z
    .locals 3
    .param p1, "version"    # I

    .line 340
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getType()Lnet/grandcentrix/tray/core/TrayStorage$a;

    move-result-object v0

    sget-object v1, Lnet/grandcentrix/tray/core/TrayStorage$a;->a:Lnet/grandcentrix/tray/core/TrayStorage$a;

    if-eq v0, v1, :cond_0

    .line 344
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->builder()Lnet/grandcentrix/tray/provider/TrayUri$a;

    move-result-object v0

    const/4 v1, 0x1

    .line 345
    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Z)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 346
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getType()Lnet/grandcentrix/tray/core/TrayStorage$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Lnet/grandcentrix/tray/core/TrayStorage$a;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 347
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 348
    const-string v1, "version"

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 349
    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a()Landroid/net/Uri;

    move-result-object v0

    .line 350
    .local v0, "uri":Landroid/net/Uri;
    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->persist(Landroid/net/Uri;Ljava/lang/String;)Z

    move-result v1

    return v1

    .line 341
    .end local v0    # "uri":Landroid/net/Uri;
    :cond_0
    new-instance v0, Lnet/grandcentrix/tray/core/TrayRuntimeException;

    const-string v1, "writing data into a storage with type UNDEFINED is forbidden. Only Read and delete is allowed."

    invoke-direct {v0, v1}, Lnet/grandcentrix/tray/core/TrayRuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public unregisterOnTrayPreferenceChangeListener(Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;)V
    .locals 2
    .param p1, "listener"    # Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param

    .line 356
    if-nez p1, :cond_0

    .line 357
    return-void

    .line 359
    :cond_0
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mListeners:Ljava/util/WeakHashMap;

    invoke-virtual {v0, p1}, Ljava/util/WeakHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 361
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mListeners:Ljava/util/WeakHashMap;

    invoke-virtual {v0}, Ljava/util/WeakHashMap;->size()I

    move-result v0

    if-nez v0, :cond_1

    .line 362
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mObserver:Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;

    invoke-virtual {v0, v1}, Landroid/content/ContentResolver;->unregisterContentObserver(Landroid/database/ContentObserver;)V

    .line 364
    const/4 v0, 0x0

    iput-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mObserver:Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;

    .line 365
    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mObserverThread:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->quit()Z

    .line 366
    iput-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mObserverThread:Landroid/os/HandlerThread;

    .line 368
    :cond_1
    return-void
.end method

.method public wipe()Z
    .locals 3

    .line 378
    invoke-virtual {p0}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->clear()Z

    move-result v0

    .line 380
    .local v0, "cleared":Z
    if-nez v0, :cond_0

    .line 382
    const/4 v1, 0x0

    return v1

    .line 385
    :cond_0
    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v1}, Lnet/grandcentrix/tray/provider/TrayUri;->builder()Lnet/grandcentrix/tray/provider/TrayUri$a;

    move-result-object v1

    const/4 v2, 0x1

    .line 386
    invoke-virtual {v1, v2}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Z)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 387
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getType()Lnet/grandcentrix/tray/core/TrayStorage$a;

    move-result-object v2

    invoke-virtual {v1, v2}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Lnet/grandcentrix/tray/core/TrayStorage$a;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 388
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lnet/grandcentrix/tray/provider/TrayUri$a;->b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 389
    invoke-virtual {v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a()Landroid/net/Uri;

    move-result-object v1

    .line 390
    .local v1, "uri":Landroid/net/Uri;
    iget-object v2, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-virtual {v2, v1}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->remove(Landroid/net/Uri;)Z

    move-result v2

    return v2
.end method
