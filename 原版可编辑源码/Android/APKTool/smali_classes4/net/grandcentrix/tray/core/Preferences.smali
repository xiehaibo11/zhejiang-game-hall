.class public abstract Lnet/grandcentrix/tray/core/Preferences;
.super Ljava/lang/Object;
.source "Preferences.java"

# interfaces
.implements Lnet/grandcentrix/tray/core/PreferenceAccessor;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        "S::",
        "Lnet/grandcentrix/tray/core/PreferenceStorage<",
        "TT;>;>",
        "Ljava/lang/Object;",
        "Lnet/grandcentrix/tray/core/PreferenceAccessor<",
        "TT;>;"
    }
.end annotation


# instance fields
.field private mChangeVersionSucceeded:Z

.field private mStorage:Lnet/grandcentrix/tray/core/PreferenceStorage;
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TS;"
        }
    .end annotation
.end field

.field private mVersion:I


# direct methods
.method public constructor <init>(Lnet/grandcentrix/tray/core/PreferenceStorage;I)V
    .locals 1
    .param p1    # Lnet/grandcentrix/tray/core/PreferenceStorage;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "version"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TS;I)V"
        }
    .end annotation

    .line 53
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    .local p1, "storage":Lnet/grandcentrix/tray/core/PreferenceStorage;, "TS;"
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 54
    iput-object p1, p0, Lnet/grandcentrix/tray/core/Preferences;->mStorage:Lnet/grandcentrix/tray/core/PreferenceStorage;

    .line 55
    iput p2, p0, Lnet/grandcentrix/tray/core/Preferences;->mVersion:I

    .line 56
    const/4 v0, 0x0

    iput-boolean v0, p0, Lnet/grandcentrix/tray/core/Preferences;->mChangeVersionSucceeded:Z

    .line 58
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->isVersionChangeChecked()Z

    .line 59
    return-void
.end method

.method static isDataTypeSupported(Ljava/lang/Object;)Z
    .locals 1
    .param p0, "data"    # Ljava/lang/Object;

    .line 298
    instance-of v0, p0, Ljava/lang/Integer;

    if-nez v0, :cond_1

    instance-of v0, p0, Ljava/lang/String;

    if-nez v0, :cond_1

    instance-of v0, p0, Ljava/lang/Long;

    if-nez v0, :cond_1

    instance-of v0, p0, Ljava/lang/Float;

    if-nez v0, :cond_1

    instance-of v0, p0, Ljava/lang/Boolean;

    if-nez v0, :cond_1

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method private putData(Ljava/lang/String;Ljava/lang/Object;)Z
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/Object;

    .line 307
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 310
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lnet/grandcentrix/tray/core/PreferenceStorage;->put(Ljava/lang/String;Ljava/lang/Object;)Z

    move-result v0

    return v0

    .line 308
    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "Preference key value cannot be empty."

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method


# virtual methods
.method declared-synchronized changeVersion(I)V
    .locals 4
    .param p1, "newVersion"    # I

    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    monitor-enter p0

    .line 251
    const/4 v0, 0x1

    if-lt p1, v0, :cond_3

    .line 258
    :try_start_0
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;

    move-result-object v1

    invoke-interface {v1}, Lnet/grandcentrix/tray/core/PreferenceStorage;->getVersion()I

    move-result v1

    .line 259
    .local v1, "version":I
    if-eq v1, p1, :cond_2

    .line 260
    if-nez v1, :cond_0

    .line 261
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "create "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, " with initial version 0"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 262
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/Preferences;->onCreate(I)V

    goto :goto_0

    .line 264
    .end local p0    # "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    :cond_0
    if-le v1, p1, :cond_1

    .line 265
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "downgrading "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, "from "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " to "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 266
    invoke-virtual {p0, v1, p1}, Lnet/grandcentrix/tray/core/Preferences;->onDowngrade(II)V

    goto :goto_0

    .line 268
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "upgrading "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, " from "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " to "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 269
    invoke-virtual {p0, v1, p1}, Lnet/grandcentrix/tray/core/Preferences;->onUpgrade(II)V

    .line 272
    :goto_0
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;

    move-result-object v2

    invoke-interface {v2, p1}, Lnet/grandcentrix/tray/core/PreferenceStorage;->setVersion(I)Z

    .line 275
    :cond_2
    iput-boolean v0, p0, Lnet/grandcentrix/tray/core/Preferences;->mChangeVersionSucceeded:Z
    :try_end_0
    .catch Lnet/grandcentrix/tray/core/TrayException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 279
    .end local v1    # "version":I
    goto :goto_1

    .line 250
    .end local p1    # "newVersion":I
    :catchall_0
    move-exception p1

    goto :goto_2

    .line 276
    .restart local p1    # "newVersion":I
    :catch_0
    move-exception v0

    .line 277
    .local v0, "e":Lnet/grandcentrix/tray/core/TrayException;
    :try_start_1
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 278
    const-string v1, "could not change the version, retrying with the next interaction"

    invoke-static {v1}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 280
    .end local v0    # "e":Lnet/grandcentrix/tray/core/TrayException;
    :goto_1
    monitor-exit p0

    return-void

    .line 254
    :cond_3
    :try_start_2
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Version must be >= 1, was "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 250
    .end local p1    # "newVersion":I
    :goto_2
    monitor-exit p0

    throw p1
.end method

.method public clear()Z
    .locals 3

    .line 63
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    iget-object v0, p0, Lnet/grandcentrix/tray/core/Preferences;->mStorage:Lnet/grandcentrix/tray/core/PreferenceStorage;

    invoke-interface {v0}, Lnet/grandcentrix/tray/core/PreferenceStorage;->clear()Z

    move-result v0

    .line 64
    .local v0, "cleared":Z
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "cleared "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v0, :cond_0

    const-string v2, "successful"

    goto :goto_0

    :cond_0
    const-string v2, "failed"

    :goto_0
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 65
    return v0
.end method

.method public contains(Ljava/lang/String;)Z
    .locals 1
    .param p1, "key"    # Ljava/lang/String;

    .line 70
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/Preferences;->getPref(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public getAll()Ljava/util/Collection;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Collection<",
            "TT;>;"
        }
    .end annotation

    .line 75
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    iget-object v0, p0, Lnet/grandcentrix/tray/core/Preferences;->mStorage:Lnet/grandcentrix/tray/core/PreferenceStorage;

    invoke-interface {v0}, Lnet/grandcentrix/tray/core/PreferenceStorage;->getAll()Ljava/util/Collection;

    move-result-object v0

    return-object v0
.end method

.method public getPref(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation build Landroid/support/annotation/Nullable;
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")TT;"
        }
    .end annotation

    .line 81
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    iget-object v0, p0, Lnet/grandcentrix/tray/core/Preferences;->mStorage:Lnet/grandcentrix/tray/core/PreferenceStorage;

    invoke-interface {v0, p1}, Lnet/grandcentrix/tray/core/PreferenceStorage;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method protected getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;
    .locals 1
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TS;"
        }
    .end annotation

    .line 191
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    iget-object v0, p0, Lnet/grandcentrix/tray/core/Preferences;->mStorage:Lnet/grandcentrix/tray/core/PreferenceStorage;

    return-object v0
.end method

.method public getVersion()I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lnet/grandcentrix/tray/core/TrayException;
        }
    .end annotation

    .line 89
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    iget-object v0, p0, Lnet/grandcentrix/tray/core/Preferences;->mStorage:Lnet/grandcentrix/tray/core/PreferenceStorage;

    invoke-interface {v0}, Lnet/grandcentrix/tray/core/PreferenceStorage;->getVersion()I

    move-result v0

    return v0
.end method

.method isVersionChangeChecked()Z
    .locals 1

    .line 291
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    iget-boolean v0, p0, Lnet/grandcentrix/tray/core/Preferences;->mChangeVersionSucceeded:Z

    if-nez v0, :cond_0

    .line 292
    iget v0, p0, Lnet/grandcentrix/tray/core/Preferences;->mVersion:I

    invoke-virtual {p0, v0}, Lnet/grandcentrix/tray/core/Preferences;->changeVersion(I)V

    .line 294
    :cond_0
    iget-boolean v0, p0, Lnet/grandcentrix/tray/core/Preferences;->mChangeVersionSucceeded:Z

    return v0
.end method

.method public final varargs migrate([Lnet/grandcentrix/tray/core/Migration;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Lnet/grandcentrix/tray/core/Migration<",
            "TT;>;)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/SafeVarargs;
    .end annotation

    .line 99
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    .local p1, "migrations":[Lnet/grandcentrix/tray/core/Migration;, "[Lnet/grandcentrix/tray/core/Migration<TT;>;"
    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_2

    aget-object v2, p1, v1

    .line 101
    .local v2, "migration":Lnet/grandcentrix/tray/core/Migration;, "Lnet/grandcentrix/tray/core/Migration<TT;>;"
    invoke-interface {v2}, Lnet/grandcentrix/tray/core/Migration;->shouldMigrate()Z

    move-result v3

    if-nez v3, :cond_0

    .line 102
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "not migrating "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v4, " into "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 103
    goto/16 :goto_1

    .line 106
    :cond_0
    invoke-interface {v2}, Lnet/grandcentrix/tray/core/Migration;->getData()Ljava/lang/Object;

    move-result-object v3

    .line 108
    .local v3, "data":Ljava/lang/Object;
    invoke-static {v3}, Lnet/grandcentrix/tray/core/Preferences;->isDataTypeSupported(Ljava/lang/Object;)Z

    move-result v4

    .line 109
    .local v4, "supportedDataType":Z
    const-string v5, "\' into "

    if-nez v4, :cond_1

    .line 110
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "could not migrate \'"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Lnet/grandcentrix/tray/core/Migration;->getPreviousKey()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v5, " because the data type "

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 111
    invoke-virtual {v3}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " is invalid"

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 110
    invoke-static {v5}, Lnet/grandcentrix/tray/core/TrayLog;->w(Ljava/lang/String;)V

    .line 113
    const/4 v5, 0x0

    invoke-interface {v2, v5}, Lnet/grandcentrix/tray/core/Migration;->onPostMigrate(Ljava/lang/Object;)V

    .line 114
    goto :goto_1

    .line 116
    :cond_1
    invoke-interface {v2}, Lnet/grandcentrix/tray/core/Migration;->getTrayKey()Ljava/lang/String;

    move-result-object v6

    .line 117
    .local v6, "key":Ljava/lang/String;
    invoke-interface {v2}, Lnet/grandcentrix/tray/core/Migration;->getPreviousKey()Ljava/lang/String;

    move-result-object v7

    .line 119
    .local v7, "migrationKey":Ljava/lang/String;
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;

    move-result-object v8

    invoke-interface {v8, v6, v7, v3}, Lnet/grandcentrix/tray/core/PreferenceStorage;->put(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Z

    .line 120
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "migrated \'"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "\'=\'"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v5, " (now: \'"

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v5, "\')"

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 124
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;

    move-result-object v5

    invoke-interface {v5, v6}, Lnet/grandcentrix/tray/core/PreferenceStorage;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v5

    .line 125
    .local v5, "item":Ljava/lang/Object;, "TT;"
    invoke-interface {v2, v5}, Lnet/grandcentrix/tray/core/Migration;->onPostMigrate(Ljava/lang/Object;)V

    .line 99
    .end local v2    # "migration":Lnet/grandcentrix/tray/core/Migration;, "Lnet/grandcentrix/tray/core/Migration<TT;>;"
    .end local v3    # "data":Ljava/lang/Object;
    .end local v4    # "supportedDataType":Z
    .end local v5    # "item":Ljava/lang/Object;, "TT;"
    .end local v6    # "key":Ljava/lang/String;
    .end local v7    # "migrationKey":Ljava/lang/String;
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_0

    .line 127
    :cond_2
    return-void
.end method

.method protected onCreate(I)V
    .locals 0
    .param p1, "initialVersion"    # I

    .line 204
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    return-void
.end method

.method protected onDowngrade(II)V
    .locals 3
    .param p1, "oldVersion"    # I
    .param p2, "newVersion"    # I

    .line 215
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    new-instance v0, Ljava/lang/IllegalStateException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Can\'t downgrade "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, " from version "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " to "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method protected onUpgrade(II)V
    .locals 3
    .param p1, "oldVersion"    # I
    .param p2, "newVersion"    # I

    .line 233
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    new-instance v0, Ljava/lang/IllegalStateException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Can\'t upgrade database from version "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " to "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", not implemented."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public put(Ljava/lang/String;F)Z
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "value"    # F

    .line 149
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->isVersionChangeChecked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 150
    const/4 v0, 0x0

    return v0

    .line 152
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "put \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v1, "\' into "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 153
    invoke-static {p2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lnet/grandcentrix/tray/core/Preferences;->putData(Ljava/lang/String;Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public put(Ljava/lang/String;I)Z
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "value"    # I

    .line 140
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->isVersionChangeChecked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 141
    const/4 v0, 0x0

    return v0

    .line 143
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "put \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "\' into "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 144
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lnet/grandcentrix/tray/core/Preferences;->putData(Ljava/lang/String;Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public put(Ljava/lang/String;J)Z
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "value"    # J

    .line 158
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->isVersionChangeChecked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 159
    const/4 v0, 0x0

    return v0

    .line 161
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "put \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "\' into "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 162
    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lnet/grandcentrix/tray/core/Preferences;->putData(Ljava/lang/String;Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public put(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "value"    # Ljava/lang/String;

    .line 131
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->isVersionChangeChecked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 132
    const/4 v0, 0x0

    return v0

    .line 134
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "put \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "=\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\"\' into "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 135
    invoke-direct {p0, p1, p2}, Lnet/grandcentrix/tray/core/Preferences;->putData(Ljava/lang/String;Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public put(Ljava/lang/String;Z)Z
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "value"    # Z

    .line 167
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->isVersionChangeChecked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 168
    const/4 v0, 0x0

    return v0

    .line 170
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "put \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "\' into "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 171
    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lnet/grandcentrix/tray/core/Preferences;->putData(Ljava/lang/String;Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public remove(Ljava/lang/String;)Z
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param

    .line 175
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->isVersionChangeChecked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 176
    const/4 v0, 0x0

    return v0

    .line 178
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "removed key \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\' from "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 179
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;

    move-result-object v0

    invoke-interface {v0, p1}, Lnet/grandcentrix/tray/core/PreferenceStorage;->remove(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public wipe()Z
    .locals 3

    .line 184
    .local p0, "this":Lnet/grandcentrix/tray/core/Preferences;, "Lnet/grandcentrix/tray/core/Preferences<TT;TS;>;"
    iget-object v0, p0, Lnet/grandcentrix/tray/core/Preferences;->mStorage:Lnet/grandcentrix/tray/core/PreferenceStorage;

    invoke-interface {v0}, Lnet/grandcentrix/tray/core/PreferenceStorage;->wipe()Z

    move-result v0

    .line 185
    .local v0, "wiped":Z
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "wipe "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v0, :cond_0

    const-string v2, "successful"

    goto :goto_0

    :cond_0
    const-string v2, "failed"

    :goto_0
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 186
    return v0
.end method
