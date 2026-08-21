.class public final Lcom/bianfeng/roomlib/R$drawable;
.super Ljava/lang/Object;
.source "R.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/roomlib/R;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "drawable"
.end annotation


# static fields
.field public static final reslib_bianfeng_logo:I

.field public static final reslib_progressbar:I

.field public static final reslib_view:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 57
    sget v0, Lcom/bianfeng/splitscreenlib/R$drawable;->reslib_bianfeng_logo:I

    sput v0, Lcom/bianfeng/roomlib/R$drawable;->reslib_bianfeng_logo:I

    .line 58
    sget v0, Lcom/bianfeng/splitscreenlib/R$drawable;->reslib_progressbar:I

    sput v0, Lcom/bianfeng/roomlib/R$drawable;->reslib_progressbar:I

    .line 59
    sget v0, Lcom/bianfeng/splitscreenlib/R$drawable;->reslib_view:I

    sput v0, Lcom/bianfeng/roomlib/R$drawable;->reslib_view:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 56
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
