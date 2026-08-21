.class public Lcom/bykv/vk/openvk/VfSlot;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTAdSlot;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/VfSlot$Builder;
    }
.end annotation


# instance fields
.field private b:I

.field private bm:Ljava/lang/String;

.field private c:I

.field private df:I

.field private f:I

.field private fo:Ljava/lang/String;

.field private fw:Z

.field private hq:I

.field private l:Lcom/bykv/vk/openvk/TTAdLoadType;

.field private n:Ljava/lang/String;

.field private oh:I

.field private ou:Ljava/lang/String;

.field private pp:F

.field private pt:F

.field private q:I

.field private qx:Ljava/lang/String;

.field private r:I

.field private re:Ljava/lang/String;

.field private rg:Ljava/lang/String;

.field private rz:Ljava/lang/String;

.field private un:[I

.field private ux:Z

.field private v:Z

.field private y:Ljava/lang/String;

.field private z:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 67
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x2

    .line 29
    iput v0, p0, Lcom/bykv/vk/openvk/VfSlot;->b:I

    const/4 v0, 0x1

    .line 34
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/VfSlot;->v:Z

    return-void
.end method

.method synthetic constructor <init>(Lcom/bykv/vk/openvk/VfSlot$1;)V
    .locals 0

    .line 15
    invoke-direct {p0}, Lcom/bykv/vk/openvk/VfSlot;-><init>()V

    return-void
.end method

.method static synthetic bm(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->re:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic c(Lcom/bykv/vk/openvk/VfSlot;I)I
    .locals 0

    .line 15
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->r:I

    return p1
.end method

.method static synthetic c(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->ou:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic df(Lcom/bykv/vk/openvk/VfSlot;F)F
    .locals 0

    .line 15
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->pp:F

    return p1
.end method

.method static synthetic df(Lcom/bykv/vk/openvk/VfSlot;I)I
    .locals 0

    .line 15
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->df:I

    return p1
.end method

.method static synthetic df(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->rz:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic df(Lcom/bykv/vk/openvk/VfSlot;Z)Z
    .locals 0

    .line 15
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/VfSlot;->ux:Z

    return p1
.end method

.method static synthetic fw(Lcom/bykv/vk/openvk/VfSlot;I)I
    .locals 0

    .line 15
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->hq:I

    return p1
.end method

.method static synthetic fw(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->y:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic pp(Lcom/bykv/vk/openvk/VfSlot;I)I
    .locals 0

    .line 15
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->oh:I

    return p1
.end method

.method static synthetic pp(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->z:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic pt(Lcom/bykv/vk/openvk/VfSlot;I)I
    .locals 0

    .line 15
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->b:I

    return p1
.end method

.method static synthetic pt(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->qx:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic q(Lcom/bykv/vk/openvk/VfSlot;I)I
    .locals 0

    .line 15
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->q:I

    return p1
.end method

.method static synthetic q(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->bm:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic q(Lcom/bykv/vk/openvk/VfSlot;Z)Z
    .locals 0

    .line 15
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/VfSlot;->v:Z

    return p1
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/VfSlot;F)F
    .locals 0

    .line 15
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->pt:F

    return p1
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/VfSlot;I)I
    .locals 0

    .line 15
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->c:I

    return p1
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTAdLoadType;)Lcom/bykv/vk/openvk/TTAdLoadType;
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->l:Lcom/bykv/vk/openvk/TTAdLoadType;

    return-object p1
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->rg:Ljava/lang/String;

    return-object p1
.end method

.method private rg(Ljava/lang/String;I)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x1

    if-ge p2, v0, :cond_0

    return-object p1

    .line 476
    :cond_0
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 477
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    goto :goto_0

    .line 479
    :cond_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    :goto_0
    const-string v1, "_tt_group_load_more"

    .line 481
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 482
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p2

    .line 484
    invoke-virtual {p2}, Lorg/json/JSONException;->printStackTrace()V

    :goto_1
    return-object p1
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/VfSlot;Z)Z
    .locals 0

    .line 15
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/VfSlot;->fw:Z

    return p1
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/VfSlot;[I)[I
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->un:[I

    return-object p1
.end method

.method static synthetic rz(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->n:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic ux(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->fo:Ljava/lang/String;

    return-object p1
.end method


# virtual methods
.method public getAdCount()I
    .locals 1

    .line 115
    iget v0, p0, Lcom/bykv/vk/openvk/VfSlot;->c:I

    return v0
.end method

.method public getAdId()Ljava/lang/String;
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->ou:Ljava/lang/String;

    return-object v0
.end method

.method public getAdLoadType()Lcom/bykv/vk/openvk/TTAdLoadType;
    .locals 1

    .line 189
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->l:Lcom/bykv/vk/openvk/TTAdLoadType;

    return-object v0
.end method

.method public getAdType()I
    .locals 1

    .line 167
    iget v0, p0, Lcom/bykv/vk/openvk/VfSlot;->hq:I

    return v0
.end method

.method public getAdloadSeq()I
    .locals 1

    .line 159
    iget v0, p0, Lcom/bykv/vk/openvk/VfSlot;->r:I

    return v0
.end method

.method public getBidAdm()Ljava/lang/String;
    .locals 1

    .line 171
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->n:Ljava/lang/String;

    return-object v0
.end method

.method public getCodeId()Ljava/lang/String;
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->rg:Ljava/lang/String;

    return-object v0
.end method

.method public getCreativeId()Ljava/lang/String;
    .locals 1

    .line 75
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->y:Ljava/lang/String;

    return-object v0
.end method

.method public getDurationSlotType()I
    .locals 1

    .line 147
    iget v0, p0, Lcom/bykv/vk/openvk/VfSlot;->f:I

    return v0
.end method

.method public getExpressViewAcceptedHeight()F
    .locals 1

    .line 103
    iget v0, p0, Lcom/bykv/vk/openvk/VfSlot;->pp:F

    return v0
.end method

.method public getExpressViewAcceptedWidth()F
    .locals 1

    .line 99
    iget v0, p0, Lcom/bykv/vk/openvk/VfSlot;->pt:F

    return v0
.end method

.method public getExt()Ljava/lang/String;
    .locals 1

    .line 79
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->fo:Ljava/lang/String;

    return-object v0
.end method

.method public getExternalABVid()[I
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->un:[I

    return-object v0
.end method

.method public getExtraSmartLookParam()Ljava/lang/String;
    .locals 1

    .line 175
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->z:Ljava/lang/String;

    return-object v0
.end method

.method public getImgAcceptedHeight()I
    .locals 1

    .line 95
    iget v0, p0, Lcom/bykv/vk/openvk/VfSlot;->q:I

    return v0
.end method

.method public getImgAcceptedWidth()I
    .locals 1

    .line 91
    iget v0, p0, Lcom/bykv/vk/openvk/VfSlot;->df:I

    return v0
.end method

.method public getMediaExtra()Ljava/lang/String;
    .locals 1

    .line 123
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->rz:Ljava/lang/String;

    return-object v0
.end method

.method public getNativeAdType()I
    .locals 1

    .line 135
    iget v0, p0, Lcom/bykv/vk/openvk/VfSlot;->oh:I

    return v0
.end method

.method public getOrientation()I
    .locals 1

    .line 131
    iget v0, p0, Lcom/bykv/vk/openvk/VfSlot;->b:I

    return v0
.end method

.method public getPrimeRit()Ljava/lang/String;
    .locals 1

    .line 163
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->qx:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string v0, ""

    :cond_0
    return-object v0
.end method

.method public getUserData()Ljava/lang/String;
    .locals 1

    .line 184
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->re:Ljava/lang/String;

    return-object v0
.end method

.method public getUserID()Ljava/lang/String;
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->bm:Ljava/lang/String;

    return-object v0
.end method

.method public isAutoPlay()Z
    .locals 1

    .line 87
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/VfSlot;->v:Z

    return v0
.end method

.method public isSupportDeepLink()Z
    .locals 1

    .line 107
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/VfSlot;->fw:Z

    return v0
.end method

.method public isSupportRenderConrol()Z
    .locals 1

    .line 111
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/VfSlot;->ux:Z

    return v0
.end method

.method public setAdCount(I)V
    .locals 0

    .line 119
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->c:I

    return-void
.end method

.method public setAdLoadType(Lcom/bykv/vk/openvk/TTAdLoadType;)V
    .locals 0

    .line 193
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->l:Lcom/bykv/vk/openvk/TTAdLoadType;

    return-void
.end method

.method public setDurationSlotType(I)V
    .locals 0

    .line 143
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->f:I

    return-void
.end method

.method public varargs setExternalABVid([I)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->un:[I

    return-void
.end method

.method public setGroupLoadMore(I)V
    .locals 1

    .line 197
    iget-object v0, p0, Lcom/bykv/vk/openvk/VfSlot;->rz:Ljava/lang/String;

    invoke-direct {p0, v0, p1}, Lcom/bykv/vk/openvk/VfSlot;->rg(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->rz:Ljava/lang/String;

    return-void
.end method

.method public setNativeAdType(I)V
    .locals 0

    .line 139
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot;->oh:I

    return-void
.end method

.method public setUserData(Ljava/lang/String;)V
    .locals 0

    .line 180
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot;->re:Ljava/lang/String;

    return-void
.end method

.method public toJsonObj()Lorg/json/JSONObject;
    .locals 4

    .line 227
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "mCodeId"

    .line 229
    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->rg:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mIsAutoPlay"

    .line 230
    iget-boolean v2, p0, Lcom/bykv/vk/openvk/VfSlot;->v:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "mImgAcceptedWidth"

    .line 231
    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->df:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mImgAcceptedHeight"

    .line 232
    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->q:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mExpressViewAcceptedWidth"

    .line 233
    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->pt:F

    float-to-double v2, v2

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "mExpressViewAcceptedHeight"

    .line 234
    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->pp:F

    float-to-double v2, v2

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "mAdCount"

    .line 235
    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->c:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mSupportDeepLink"

    .line 236
    iget-boolean v2, p0, Lcom/bykv/vk/openvk/VfSlot;->fw:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "mSupportRenderControl"

    .line 237
    iget-boolean v2, p0, Lcom/bykv/vk/openvk/VfSlot;->ux:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "mMediaExtra"

    .line 238
    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->rz:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mUserID"

    .line 239
    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->bm:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mOrientation"

    .line 240
    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->b:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mNativeAdType"

    .line 241
    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->oh:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mAdloadSeq"

    .line 242
    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->r:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mPrimeRit"

    .line 243
    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->qx:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mExtraSmartLookParam"

    .line 244
    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->z:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mAdId"

    .line 245
    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->ou:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mCreativeId"

    .line 246
    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->y:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mExt"

    .line 247
    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->fo:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mBidAdm"

    .line 248
    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->n:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mUserData"

    .line 249
    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->re:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mAdLoadType"

    .line 250
    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->l:Lcom/bykv/vk/openvk/TTAdLoadType;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 202
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "AdSlot{mCodeId=\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot;->rg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", mImgAcceptedWidth="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->df:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", mImgAcceptedHeight="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->q:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", mExpressViewAcceptedWidth="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->pt:F

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v2, ", mExpressViewAcceptedHeight="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->pp:F

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v2, ", mAdCount="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/bykv/vk/openvk/VfSlot;->c:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", mSupportDeepLink="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/bykv/vk/openvk/VfSlot;->fw:Z

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, ", mSupportRenderControl="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/bykv/vk/openvk/VfSlot;->ux:Z

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, ", mMediaExtra=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->rz:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", mUserID=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bykv/vk/openvk/VfSlot;->bm:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v1, ", mOrientation="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot;->b:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", mNativeAdType="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot;->oh:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", mIsAutoPlay="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/bykv/vk/openvk/VfSlot;->v:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", mPrimeRit"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot;->qx:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", mAdloadSeq"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot;->r:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", mAdId"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot;->ou:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", mCreativeId"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot;->y:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", mExt"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot;->fo:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", mUserData"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot;->re:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", mAdLoadType"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot;->l:Lcom/bykv/vk/openvk/TTAdLoadType;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
