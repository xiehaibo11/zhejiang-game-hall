.class public abstract Lnet/grandcentrix/tray/core/TrayStorage;
.super Ljava/lang/Object;
.source "TrayStorage.java"

# interfaces
.implements Lnet/grandcentrix/tray/core/PreferenceStorage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lnet/grandcentrix/tray/core/TrayStorage$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lnet/grandcentrix/tray/core/PreferenceStorage<",
        "Lnet/grandcentrix/tray/core/TrayItem;",
        ">;"
    }
.end annotation


# instance fields
.field private mModuleName:Ljava/lang/String;

.field private mType:Lnet/grandcentrix/tray/core/TrayStorage$a;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lnet/grandcentrix/tray/core/TrayStorage$a;)V
    .locals 0
    .param p1, "moduleName"    # Ljava/lang/String;
    .param p2, "type"    # Lnet/grandcentrix/tray/core/TrayStorage$a;

    .line 64
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 65
    iput-object p1, p0, Lnet/grandcentrix/tray/core/TrayStorage;->mModuleName:Ljava/lang/String;

    .line 66
    iput-object p2, p0, Lnet/grandcentrix/tray/core/TrayStorage;->mType:Lnet/grandcentrix/tray/core/TrayStorage$a;

    .line 67
    return-void
.end method


# virtual methods
.method public abstract annex(Lnet/grandcentrix/tray/core/TrayStorage;)V
.end method

.method public getModuleName()Ljava/lang/String;
    .locals 1

    .line 79
    iget-object v0, p0, Lnet/grandcentrix/tray/core/TrayStorage;->mModuleName:Ljava/lang/String;

    return-object v0
.end method

.method public getType()Lnet/grandcentrix/tray/core/TrayStorage$a;
    .locals 1

    .line 88
    iget-object v0, p0, Lnet/grandcentrix/tray/core/TrayStorage;->mType:Lnet/grandcentrix/tray/core/TrayStorage$a;

    return-object v0
.end method

.method public abstract registerOnTrayPreferenceChangeListener(Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;)V
    .param p1    # Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
.end method

.method public abstract unregisterOnTrayPreferenceChangeListener(Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;)V
    .param p1    # Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
.end method
