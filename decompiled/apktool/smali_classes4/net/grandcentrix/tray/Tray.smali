.class public Lnet/grandcentrix/tray/Tray;
.super Ljava/lang/Object;
.source "Tray.java"


# instance fields
.field private final mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 64
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 65
    new-instance v0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-direct {v0, p1}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lnet/grandcentrix/tray/Tray;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    .line 66
    return-void
.end method

.method public static varargs clear([Lnet/grandcentrix/tray/TrayPreferences;)V
    .locals 3
    .param p0, "modules"    # [Lnet/grandcentrix/tray/TrayPreferences;

    .line 56
    array-length v0, p0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    aget-object v2, p0, v1

    .line 57
    .local v2, "module":Lnet/grandcentrix/tray/core/Preferences;
    if-nez v2, :cond_0

    .line 58
    goto :goto_1

    .line 60
    :cond_0
    invoke-virtual {v2}, Lnet/grandcentrix/tray/core/Preferences;->clear()Z

    .line 56
    .end local v2    # "module":Lnet/grandcentrix/tray/core/Preferences;
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 62
    :cond_1
    return-void
.end method


# virtual methods
.method public clear()Z
    .locals 1

    .line 74
    iget-object v0, p0, Lnet/grandcentrix/tray/Tray;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->clear()Z

    move-result v0

    return v0
.end method

.method public varargs clearBut([Lnet/grandcentrix/tray/core/AbstractTrayPreference;)Z
    .locals 1
    .param p1, "modules"    # [Lnet/grandcentrix/tray/core/AbstractTrayPreference;

    .line 84
    iget-object v0, p0, Lnet/grandcentrix/tray/Tray;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-virtual {v0, p1}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->clearBut([Lnet/grandcentrix/tray/core/AbstractTrayPreference;)Z

    move-result v0

    return v0
.end method

.method public getAll()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lnet/grandcentrix/tray/core/TrayItem;",
            ">;"
        }
    .end annotation

    .line 93
    iget-object v0, p0, Lnet/grandcentrix/tray/Tray;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->getAll()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public wipe()Z
    .locals 1

    .line 102
    iget-object v0, p0, Lnet/grandcentrix/tray/Tray;->mProviderHelper:Lnet/grandcentrix/tray/provider/TrayProviderHelper;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->wipe()Z

    move-result v0

    return v0
.end method
