.class public final Lcom/bianfeng/loginlib/R$layout;
.super Ljava/lang/Object;
.source "R.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/loginlib/R;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "layout"
.end annotation


# static fields
.field public static final activity_screen:I

.field public static final activity_ymnh5_sdk_webview:I

.field public static final dialog_icon:I

.field public static final dialog_splitscreen:I

.field public static final dialog_splitscreen_exit:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 78
    sget v0, Lcom/bianfeng/splitscreenlib/R$layout;->activity_screen:I

    sput v0, Lcom/bianfeng/loginlib/R$layout;->activity_screen:I

    .line 79
    sget v0, Lcom/bianfeng/splitscreenlib/R$layout;->activity_ymnh5_sdk_webview:I

    sput v0, Lcom/bianfeng/loginlib/R$layout;->activity_ymnh5_sdk_webview:I

    .line 80
    sget v0, Lcom/bianfeng/splitscreenlib/R$layout;->dialog_icon:I

    sput v0, Lcom/bianfeng/loginlib/R$layout;->dialog_icon:I

    .line 81
    sget v0, Lcom/bianfeng/splitscreenlib/R$layout;->dialog_splitscreen:I

    sput v0, Lcom/bianfeng/loginlib/R$layout;->dialog_splitscreen:I

    .line 82
    sget v0, Lcom/bianfeng/splitscreenlib/R$layout;->dialog_splitscreen_exit:I

    sput v0, Lcom/bianfeng/loginlib/R$layout;->dialog_splitscreen_exit:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 77
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
