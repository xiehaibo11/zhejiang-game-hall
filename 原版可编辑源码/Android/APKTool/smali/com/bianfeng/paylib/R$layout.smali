.class public final Lcom/bianfeng/paylib/R$layout;
.super Ljava/lang/Object;
.source "R.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/paylib/R;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "layout"
.end annotation


# static fields
.field public static final activity_payment_web:I

.field public static final activity_webpaysdk_ali:I

.field public static final activity_webpaysdk_payment:I

.field public static final activity_webpaysdk_wx:I

.field public static final include_webpaysdk_payment_view:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 92
    sget v0, Lcom/bianfeng/splitscreenlib/R$layout;->activity_payment_web:I

    sput v0, Lcom/bianfeng/paylib/R$layout;->activity_payment_web:I

    .line 93
    sget v0, Lcom/bianfeng/splitscreenlib/R$layout;->activity_webpaysdk_ali:I

    sput v0, Lcom/bianfeng/paylib/R$layout;->activity_webpaysdk_ali:I

    .line 94
    sget v0, Lcom/bianfeng/splitscreenlib/R$layout;->activity_webpaysdk_payment:I

    sput v0, Lcom/bianfeng/paylib/R$layout;->activity_webpaysdk_payment:I

    .line 95
    sget v0, Lcom/bianfeng/splitscreenlib/R$layout;->activity_webpaysdk_wx:I

    sput v0, Lcom/bianfeng/paylib/R$layout;->activity_webpaysdk_wx:I

    .line 96
    sget v0, Lcom/bianfeng/splitscreenlib/R$layout;->include_webpaysdk_payment_view:I

    sput v0, Lcom/bianfeng/paylib/R$layout;->include_webpaysdk_payment_view:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 91
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
