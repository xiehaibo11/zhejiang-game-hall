.class public Lnet/grandcentrix/tray/core/SharedPreferencesImport;
.super Ljava/lang/Object;
.source "SharedPreferencesImport.java"

# interfaces
.implements Lnet/grandcentrix/tray/core/TrayMigration;


# instance fields
.field private final mPreferences:Landroid/content/SharedPreferences;

.field private final mSharedPrefsKey:Ljava/lang/String;

.field private final mSharedPrefsName:Ljava/lang/String;

.field private final mTrayKey:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "sharedPrefsName"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p3, "sharedPrefsKey"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p4, "trayKey"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param

    .line 49
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 50
    iput-object p3, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsKey:Ljava/lang/String;

    .line 51
    iput-object p2, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsName:Ljava/lang/String;

    .line 52
    iput-object p4, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mTrayKey:Ljava/lang/String;

    .line 53
    const/4 v0, 0x4

    invoke-virtual {p1, p2, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mPreferences:Landroid/content/SharedPreferences;

    .line 54
    return-void
.end method

.method static equals(Ljava/lang/Object;Ljava/lang/Object;)Z
    .locals 1
    .param p0, "a"    # Ljava/lang/Object;
    .param p1, "b"    # Ljava/lang/Object;

    .line 112
    if-nez p0, :cond_1

    if-nez p1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0

    :cond_1
    invoke-virtual {p0, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    :goto_0
    return v0
.end method


# virtual methods
.method public getData()Ljava/lang/Object;
    .locals 2

    .line 58
    iget-object v0, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mPreferences:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsKey:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public getPreviousKey()Ljava/lang/String;
    .locals 1
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .line 64
    iget-object v0, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsKey:Ljava/lang/String;

    return-object v0
.end method

.method public getTrayKey()Ljava/lang/String;
    .locals 1
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .line 70
    iget-object v0, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mTrayKey:Ljava/lang/String;

    return-object v0
.end method

.method public bridge synthetic onPostMigrate(Ljava/lang/Object;)V
    .locals 0

    .line 38
    check-cast p1, Lnet/grandcentrix/tray/core/TrayItem;

    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->onPostMigrate(Lnet/grandcentrix/tray/core/TrayItem;)V

    return-void
.end method

.method public onPostMigrate(Lnet/grandcentrix/tray/core/TrayItem;)V
    .locals 2
    .param p1, "trayItem"    # Lnet/grandcentrix/tray/core/TrayItem;

    .line 75
    if-nez p1, :cond_0

    .line 76
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "migration "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " failed, saved data in tray is null"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->wtf(Ljava/lang/String;)V

    .line 77
    return-void

    .line 79
    :cond_0
    invoke-virtual {p1}, Lnet/grandcentrix/tray/core/TrayItem;->value()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->getData()Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 80
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "removing key \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsKey:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\' from SharedPreferences \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 82
    iget-object v0, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mPreferences:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    iget-object v1, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsKey:Ljava/lang/String;

    invoke-interface {v0, v1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 84
    :cond_1
    return-void
.end method

.method public shouldMigrate()Z
    .locals 2

    .line 88
    iget-object v0, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mPreferences:Landroid/content/SharedPreferences;

    iget-object v1, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsKey:Ljava/lang/String;

    invoke-interface {v0, v1}, Landroid/content/SharedPreferences;->contains(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 89
    const/4 v0, 0x1

    return v0

    .line 92
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "key \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsKey:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\' in SharedPreferences \'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\' not found. skipped import"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 94
    const/4 v0, 0x0

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 99
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SharedPreferencesImport(@"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "){sharedPrefsName=\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", sharedPrefsKey=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mSharedPrefsKey:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", trayKey=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lnet/grandcentrix/tray/core/SharedPreferencesImport;->mTrayKey:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
