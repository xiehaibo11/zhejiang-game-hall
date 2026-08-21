.class public Lnet/grandcentrix/tray/TrayModulePreferences;
.super Lnet/grandcentrix/tray/TrayPreferences;
.source "TrayModulePreferences.java"


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;I)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "module"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p3, "version"    # I

    .line 18
    invoke-direct {p0, p1, p2, p3}, Lnet/grandcentrix/tray/TrayPreferences;-><init>(Landroid/content/Context;Ljava/lang/String;I)V

    .line 19
    return-void
.end method
