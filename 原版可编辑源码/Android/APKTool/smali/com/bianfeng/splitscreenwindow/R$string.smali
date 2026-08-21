.class public final Lcom/bianfeng/splitscreenwindow/R$string;
.super Ljava/lang/Object;
.source "R.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/splitscreenwindow/R;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "string"
.end annotation


# static fields
.field public static final app_baseLib_name:I

.field public static final app_customwidgetlib_name:I

.field public static final app_reslibrary_name:I

.field public static final app_splitscreenWindow_name:I

.field public static final app_thridLibrary_name:I

.field public static final app_utilsLib_name:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 85
    sget v0, Lcom/bianfeng/splitscreenlib/R$string;->app_baseLib_name:I

    sput v0, Lcom/bianfeng/splitscreenwindow/R$string;->app_baseLib_name:I

    .line 86
    sget v0, Lcom/bianfeng/splitscreenlib/R$string;->app_customwidgetlib_name:I

    sput v0, Lcom/bianfeng/splitscreenwindow/R$string;->app_customwidgetlib_name:I

    .line 87
    sget v0, Lcom/bianfeng/splitscreenlib/R$string;->app_reslibrary_name:I

    sput v0, Lcom/bianfeng/splitscreenwindow/R$string;->app_reslibrary_name:I

    .line 88
    sget v0, Lcom/bianfeng/splitscreenlib/R$string;->app_splitscreenWindow_name:I

    sput v0, Lcom/bianfeng/splitscreenwindow/R$string;->app_splitscreenWindow_name:I

    .line 89
    sget v0, Lcom/bianfeng/splitscreenlib/R$string;->app_thridLibrary_name:I

    sput v0, Lcom/bianfeng/splitscreenwindow/R$string;->app_thridLibrary_name:I

    .line 90
    sget v0, Lcom/bianfeng/splitscreenlib/R$string;->app_utilsLib_name:I

    sput v0, Lcom/bianfeng/splitscreenwindow/R$string;->app_utilsLib_name:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 84
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
