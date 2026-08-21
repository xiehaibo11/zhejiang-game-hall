.class public Lcom/tkay/splashad/api/TYSplashSkipInfo;
.super Ljava/lang/Object;


# static fields
.field public static final TAG:Ljava/lang/String;


# instance fields
.field mCallbackInterval:J

.field mContainer:Landroid/view/ViewGroup;

.field mCountDownDuration:J

.field mSkipView:Landroid/view/View;

.field mTYSplashSkipAdListener:Lcom/tkay/splashad/api/TYSplashSkipAdListener;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 16
    const-class v0, Lcom/tkay/splashad/api/TYSplashSkipInfo;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/view/View;JJLcom/tkay/splashad/api/TYSplashSkipAdListener;)V
    .locals 0

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mSkipView:Landroid/view/View;

    .line 27
    iput-wide p2, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mCountDownDuration:J

    .line 28
    iput-wide p4, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mCallbackInterval:J

    .line 29
    iput-object p6, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mTYSplashSkipAdListener:Lcom/tkay/splashad/api/TYSplashSkipAdListener;

    const-wide/16 p4, 0x7d0

    cmp-long p1, p2, p4

    if-gez p1, :cond_0

    .line 33
    sget-object p1, Lcom/tkay/splashad/api/TYSplashSkipInfo;->TAG:Ljava/lang/String;

    const-string p2, "mCountDownDuration is less than or equal to 2000, reset to 2000"

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 34
    iput-wide p4, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mCountDownDuration:J

    .line 36
    :cond_0
    iget-wide p1, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mCallbackInterval:J

    const-wide/16 p3, 0x0

    cmp-long p3, p1, p3

    if-gtz p3, :cond_1

    .line 37
    sget-object p1, Lcom/tkay/splashad/api/TYSplashSkipInfo;->TAG:Ljava/lang/String;

    const-string p2, "mCallbackInterval is less than or equal to 0, reset to 1000"

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-wide/16 p1, 0x3e8

    .line 38
    iput-wide p1, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mCallbackInterval:J

    return-void

    :cond_1
    const-wide/16 p3, 0x14

    cmp-long p1, p1, p3

    if-gez p1, :cond_2

    .line 40
    sget-object p1, Lcom/tkay/splashad/api/TYSplashSkipInfo;->TAG:Ljava/lang/String;

    const-string p2, "mCallbackInterval is less than 10, reset to 20"

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 41
    iput-wide p3, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mCallbackInterval:J

    :cond_2
    return-void
.end method

.method public constructor <init>(Landroid/view/View;Lcom/tkay/splashad/api/TYSplashSkipAdListener;)V
    .locals 7

    const-wide/16 v2, 0x1388

    const-wide/16 v4, 0x3e8

    move-object v0, p0

    move-object v1, p1

    move-object v6, p2

    .line 47
    invoke-direct/range {v0 .. v6}, Lcom/tkay/splashad/api/TYSplashSkipInfo;-><init>(Landroid/view/View;JJLcom/tkay/splashad/api/TYSplashSkipAdListener;)V

    return-void
.end method


# virtual methods
.method public canUseCustomSkipView()Z
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mSkipView:Landroid/view/View;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public destroy()V
    .locals 2

    .line 76
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mSkipView:Landroid/view/View;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 77
    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 78
    iput-object v1, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mSkipView:Landroid/view/View;

    .line 81
    :cond_0
    iput-object v1, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mTYSplashSkipAdListener:Lcom/tkay/splashad/api/TYSplashSkipAdListener;

    return-void
.end method

.method public getCallbackInterval()J
    .locals 2

    .line 67
    iget-wide v0, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mCallbackInterval:J

    return-wide v0
.end method

.method public getContainer()Landroid/view/ViewGroup;
    .locals 1

    .line 55
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mContainer:Landroid/view/ViewGroup;

    return-object v0
.end method

.method public getCountDownDuration()J
    .locals 2

    .line 63
    iget-wide v0, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mCountDownDuration:J

    return-wide v0
.end method

.method public getSkipView()Landroid/view/View;
    .locals 1

    .line 59
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mSkipView:Landroid/view/View;

    return-object v0
.end method

.method public getTYSplashSkipAdListener()Lcom/tkay/splashad/api/TYSplashSkipAdListener;
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mTYSplashSkipAdListener:Lcom/tkay/splashad/api/TYSplashSkipAdListener;

    return-object v0
.end method

.method public setContainer(Landroid/view/ViewGroup;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashSkipInfo;->mContainer:Landroid/view/ViewGroup;

    return-void
.end method
