.class public Lcom/qihoo360/loader2/PluginStatusController;
.super Ljava/lang/Object;
.source "PluginStatusController.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/PluginStatusController$PluginStatus;
    }
.end annotation


# static fields
.field private static final KEY_STATUS_NAME_PREFIX:Ljava/lang/String; = "ps-"

.field private static final PREF_FILE:Ljava/lang/String; = "plugins"

.field public static final STATUS_DISABLE_BY_CLOUD:I = -0x2

.field public static final STATUS_DISABLE_BY_CRASH:I = -0x1

.field public static final STATUS_OK:I

.field private static sAppContext:Landroid/app/Application;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static addStatusToPref(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const-string v0, "plugins"

    const/4 v1, 0x0

    .line 172
    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 173
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ps-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    return-void
.end method

.method public static clearStatus()V
    .locals 4

    .line 136
    sget-object v0, Lcom/qihoo360/loader2/PluginStatusController;->sAppContext:Landroid/app/Application;

    const-string v1, "plugins"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Application;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 137
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 138
    invoke-interface {v0}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v3, "ps-"

    .line 139
    invoke-virtual {v2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 140
    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 143
    :cond_1
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    return-void
.end method

.method public static getStatus(Ljava/lang/String;)I
    .locals 1

    const/4 v0, -0x1

    .line 96
    invoke-static {p0, v0}, Lcom/qihoo360/loader2/PluginStatusController;->getStatus(Ljava/lang/String;I)I

    move-result p0

    return p0
.end method

.method public static getStatus(Ljava/lang/String;I)I
    .locals 6

    .line 107
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginStatusController;->getStatusImpl(Ljava/lang/String;)Lcom/qihoo360/loader2/PluginStatusController$PluginStatus;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "ws001"

    if-nez v0, :cond_1

    .line 111
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    .line 112
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "PStatusC.getStatus(): ps is null. pn="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v1

    :cond_1
    const/4 v3, -0x1

    const-string v4, "; pn="

    if-eq p1, v3, :cond_3

    .line 118
    invoke-virtual {v0}, Lcom/qihoo360/loader2/PluginStatusController$PluginStatus;->getVersion()I

    move-result v3

    if-eq v3, p1, :cond_3

    .line 119
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_2

    .line 120
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "PStatusC.getStatus(): ver not match. ver="

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "; expect="

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/qihoo360/loader2/PluginStatusController$PluginStatus;->getVersion()I

    move-result p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return v1

    .line 124
    :cond_3
    invoke-virtual {v0}, Lcom/qihoo360/loader2/PluginStatusController$PluginStatus;->getStatus()I

    move-result v0

    .line 125
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_4

    .line 126
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PStatusC.getStatus(): ver match. ver="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "; st="

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return v0
.end method

.method private static getStatusFromPref(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, "plugins"

    const/4 v1, 0x0

    .line 182
    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 183
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ps-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    invoke-interface {p0, p1, v0}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static getStatusImpl(Ljava/lang/String;)Lcom/qihoo360/loader2/PluginStatusController$PluginStatus;
    .locals 4

    .line 152
    sget-object v0, Lcom/qihoo360/loader2/PluginStatusController;->sAppContext:Landroid/app/Application;

    invoke-static {v0, p0}, Lcom/qihoo360/loader2/PluginStatusController;->getStatusFromPref(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 153
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return-object v2

    .line 159
    :cond_0
    :try_start_0
    new-instance v1, Lcom/qihoo360/loader2/PluginStatusController$PluginStatus;

    invoke-direct {v1, v0}, Lcom/qihoo360/loader2/PluginStatusController$PluginStatus;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception v0

    .line 162
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    const-string v1, "ws001"

    const-string v3, "PStatusC.getStatus(): json err."

    .line 163
    invoke-static {v1, v3, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 165
    :cond_1
    sget-object v0, Lcom/qihoo360/loader2/PluginStatusController;->sAppContext:Landroid/app/Application;

    invoke-static {v0, p0}, Lcom/qihoo360/loader2/PluginStatusController;->removeStatusToPref(Landroid/content/Context;Ljava/lang/String;)V

    return-object v2
.end method

.method private static removeStatusToPref(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    const-string v0, "plugins"

    const/4 v1, 0x0

    .line 177
    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 178
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ps-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p0, p1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    return-void
.end method

.method public static setAppContext(Landroid/app/Application;)V
    .locals 0

    .line 148
    sput-object p0, Lcom/qihoo360/loader2/PluginStatusController;->sAppContext:Landroid/app/Application;

    return-void
.end method

.method public static setStatus(Ljava/lang/String;II)V
    .locals 4

    const-string v0, "; ver="

    const-string v1, "ws001"

    if-nez p2, :cond_1

    .line 73
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_0

    .line 74
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PStatusC.setStatus(): Status is OK, Clear. pn="

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 76
    :cond_0
    sget-object p1, Lcom/qihoo360/loader2/PluginStatusController;->sAppContext:Landroid/app/Application;

    invoke-static {p1, p0}, Lcom/qihoo360/loader2/PluginStatusController;->removeStatusToPref(Landroid/content/Context;Ljava/lang/String;)V

    return-void

    .line 79
    :cond_1
    new-instance v2, Lcom/qihoo360/loader2/PluginStatusController$PluginStatus;

    invoke-direct {v2, p0, p1, p2}, Lcom/qihoo360/loader2/PluginStatusController$PluginStatus;-><init>(Ljava/lang/String;II)V

    .line 80
    sget-object v3, Lcom/qihoo360/loader2/PluginStatusController;->sAppContext:Landroid/app/Application;

    invoke-virtual {v2}, Lcom/qihoo360/loader2/PluginStatusController$PluginStatus;->toJsonString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, p0, v2}, Lcom/qihoo360/loader2/PluginStatusController;->addStatusToPref(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 82
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_2

    .line 83
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PStatusC.setStatus(): Set Status, pn="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, "; st="

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method
