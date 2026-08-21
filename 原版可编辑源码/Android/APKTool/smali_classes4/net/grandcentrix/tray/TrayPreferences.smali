.class public Lnet/grandcentrix/tray/TrayPreferences;
.super Lnet/grandcentrix/tray/core/AbstractTrayPreference;
.source "TrayPreferences.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lnet/grandcentrix/tray/core/AbstractTrayPreference<",
        "Lnet/grandcentrix/tray/provider/ContentProviderStorage;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;I)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "module"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p3, "version"    # I

    .line 48
    sget-object v0, Lnet/grandcentrix/tray/core/TrayStorage$a;->b:Lnet/grandcentrix/tray/core/TrayStorage$a;

    invoke-direct {p0, p1, p2, p3, v0}, Lnet/grandcentrix/tray/TrayPreferences;-><init>(Landroid/content/Context;Ljava/lang/String;ILnet/grandcentrix/tray/core/TrayStorage$a;)V

    .line 49
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;ILnet/grandcentrix/tray/core/TrayStorage$a;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "module"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p3, "version"    # I
    .param p4, "type"    # Lnet/grandcentrix/tray/core/TrayStorage$a;

    .line 43
    new-instance v0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    invoke-direct {v0, p1, p2, p4}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;-><init>(Landroid/content/Context;Ljava/lang/String;Lnet/grandcentrix/tray/core/TrayStorage$a;)V

    invoke-direct {p0, v0, p3}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;-><init>(Lnet/grandcentrix/tray/core/TrayStorage;I)V

    .line 44
    return-void
.end method


# virtual methods
.method public annexModule(Ljava/lang/String;)V
    .locals 1
    .param p1, "oldStorageName"    # Ljava/lang/String;

    .line 56
    sget-object v0, Lnet/grandcentrix/tray/core/TrayStorage$a;->a:Lnet/grandcentrix/tray/core/TrayStorage$a;

    invoke-virtual {p0, p1, v0}, Lnet/grandcentrix/tray/TrayPreferences;->annexModule(Ljava/lang/String;Lnet/grandcentrix/tray/core/TrayStorage$a;)V

    .line 57
    return-void
.end method

.method public annexModule(Ljava/lang/String;Lnet/grandcentrix/tray/core/TrayStorage$a;)V
    .locals 2
    .param p1, "oldStorageName"    # Ljava/lang/String;
    .param p2, "type"    # Lnet/grandcentrix/tray/core/TrayStorage$a;

    .line 52
    new-instance v0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    invoke-virtual {p0}, Lnet/grandcentrix/tray/TrayPreferences;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1, p1, p2}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;-><init>(Landroid/content/Context;Ljava/lang/String;Lnet/grandcentrix/tray/core/TrayStorage$a;)V

    invoke-super {p0, v0}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->annex(Lnet/grandcentrix/tray/core/TrayStorage;)V

    .line 53
    return-void
.end method

.method protected getContext()Landroid/content/Context;
    .locals 1

    .line 60
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;

    move-result-object v0

    check-cast v0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->getContext()Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method
