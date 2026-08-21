.class public final Lcom/bianfeng/reslibrary/R$style;
.super Ljava/lang/Object;
.source "R.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/reslibrary/R;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "style"
.end annotation


# static fields
.field public static final reslib_activityroomwebtheme:I

.field public static final reslib_dialogactivitytheme:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 65
    sget v0, Lcom/bianfeng/splitscreenlib/R$style;->reslib_activityroomwebtheme:I

    sput v0, Lcom/bianfeng/reslibrary/R$style;->reslib_activityroomwebtheme:I

    .line 66
    sget v0, Lcom/bianfeng/splitscreenlib/R$style;->reslib_dialogactivitytheme:I

    sput v0, Lcom/bianfeng/reslibrary/R$style;->reslib_dialogactivitytheme:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 64
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
