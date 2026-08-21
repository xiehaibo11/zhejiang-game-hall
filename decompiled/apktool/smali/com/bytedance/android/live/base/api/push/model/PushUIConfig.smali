.class public Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;
.super Ljava/lang/Object;


# static fields
.field public static final dismissTime:J = 0x1388L


# instance fields
.field private bgColor:Ljava/lang/Integer;

.field private borderRadiusWidth:Ljava/lang/Float;

.field private horizontalMargin:Ljava/lang/Integer;

.field private liveColor:Ljava/lang/Integer;

.field private textColor:Ljava/lang/Integer;

.field private topMargin:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 13
    iput-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->horizontalMargin:Ljava/lang/Integer;

    .line 18
    iput-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->topMargin:Ljava/lang/Integer;

    .line 24
    iput-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->textColor:Ljava/lang/Integer;

    .line 30
    iput-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->liveColor:Ljava/lang/Integer;

    .line 36
    iput-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->borderRadiusWidth:Ljava/lang/Float;

    .line 42
    iput-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->bgColor:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public getBgColor()Ljava/lang/Integer;
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->bgColor:Ljava/lang/Integer;

    return-object v0
.end method

.method public getBorderRadiusWidth()Ljava/lang/Float;
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->borderRadiusWidth:Ljava/lang/Float;

    return-object v0
.end method

.method public getHorizontalMargin()Ljava/lang/Integer;
    .locals 1

    .line 45
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->horizontalMargin:Ljava/lang/Integer;

    return-object v0
.end method

.method public getLiveColor()Ljava/lang/Integer;
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->liveColor:Ljava/lang/Integer;

    return-object v0
.end method

.method public getTextColor()Ljava/lang/Integer;
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->textColor:Ljava/lang/Integer;

    return-object v0
.end method

.method public getTopMargin()Ljava/lang/Integer;
    .locals 1

    .line 53
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->topMargin:Ljava/lang/Integer;

    return-object v0
.end method

.method public setBgColor(Ljava/lang/Integer;)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->bgColor:Ljava/lang/Integer;

    return-void
.end method

.method public setBorderRadiusWidth(Ljava/lang/Float;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->borderRadiusWidth:Ljava/lang/Float;

    return-void
.end method

.method public setHorizontalMargin(Ljava/lang/Integer;)V
    .locals 0

    .line 49
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->horizontalMargin:Ljava/lang/Integer;

    return-void
.end method

.method public setLiveColor(Ljava/lang/Integer;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->liveColor:Ljava/lang/Integer;

    return-void
.end method

.method public setTextColor(Ljava/lang/Integer;)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->textColor:Ljava/lang/Integer;

    return-void
.end method

.method public setTopMargin(Ljava/lang/Integer;)V
    .locals 0

    .line 57
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/push/model/PushUIConfig;->topMargin:Ljava/lang/Integer;

    return-void
.end method
