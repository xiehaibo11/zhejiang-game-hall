.class public Lcom/ss/android/downloadad/api/rg/df;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadad/api/rg/rg;


# instance fields
.field private ax:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private bj:Ljava/lang/String;

.field private bl:J

.field private bm:Ljava/lang/String;

.field private c:J

.field private cd:Ljava/lang/String;

.field private d:J

.field protected df:Z

.field private dj:I

.field private ev:Z

.field private ey:J

.field private f:I

.field private transient fg:Z

.field private fl:Ljava/lang/String;

.field private fo:I

.field private fw:Ljava/lang/String;

.field private g:Z

.field private gk:J

.field private go:I

.field private h:Z

.field private hq:Ljava/lang/String;

.field private i:J

.field private j:Z

.field private k:Ljava/lang/String;

.field private ka:Z

.field private l:I

.field private lc:J

.field private lu:Z

.field private m:I

.field private mc:I

.field private ms:Z

.field private n:Z

.field private oh:I

.field private oi:Z

.field private om:Z

.field private ou:J

.field private oy:Z

.field private p:I

.field private pp:J

.field public final pt:Ljava/util/concurrent/atomic/AtomicBoolean;

.field public final q:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private qx:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private re:Z

.field protected rg:Z

.field private rz:Ljava/lang/String;

.field private s:Z

.field private su:Z

.field private t:Z

.field private un:I

.field private ux:I

.field private v:I

.field private vd:Z

.field private xv:Z

.field private y:Lorg/json/JSONObject;

.field private yw:Z

.field private z:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 3

    .line 218
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 96
    iput v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ux:I

    .line 120
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->n:Z

    const/4 v1, 0x0

    .line 128
    iput-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->re:Z

    .line 130
    iput v1, p0, Lcom/ss/android/downloadad/api/rg/df;->l:I

    .line 132
    iput v1, p0, Lcom/ss/android/downloadad/api/rg/df;->p:I

    .line 146
    iput-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->lu:Z

    .line 150
    iput-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->g:Z

    .line 152
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->oy:Z

    .line 154
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ev:Z

    .line 165
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->rg:Z

    .line 168
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->df:Z

    .line 178
    new-instance v2, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v2, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 180
    new-instance v2, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v2, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 186
    iput v0, p0, Lcom/ss/android/downloadad/api/rg/df;->mc:I

    .line 195
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->s:Z

    const-wide/16 v0, -0x1

    .line 210
    iput-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ey:J

    return-void
.end method

.method public constructor <init>(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V
    .locals 1

    const/4 v0, 0x0

    .line 222
    invoke-direct {p0, p1, p2, p3, v0}, Lcom/ss/android/downloadad/api/rg/df;-><init>(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;I)V

    return-void
.end method

.method public constructor <init>(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;I)V
    .locals 3

    .line 225
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 96
    iput v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ux:I

    .line 120
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->n:Z

    const/4 v1, 0x0

    .line 128
    iput-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->re:Z

    .line 130
    iput v1, p0, Lcom/ss/android/downloadad/api/rg/df;->l:I

    .line 132
    iput v1, p0, Lcom/ss/android/downloadad/api/rg/df;->p:I

    .line 146
    iput-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->lu:Z

    .line 150
    iput-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->g:Z

    .line 152
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->oy:Z

    .line 154
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ev:Z

    .line 165
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->rg:Z

    .line 168
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->df:Z

    .line 178
    new-instance v2, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v2, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 180
    new-instance v2, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v2, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 186
    iput v0, p0, Lcom/ss/android/downloadad/api/rg/df;->mc:I

    .line 195
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->s:Z

    const-wide/16 v0, -0x1

    .line 210
    iput-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ey:J

    .line 226
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getId()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->pp:J

    .line 227
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getExtraValue()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->c:J

    .line 228
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getLogExtra()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->fw:Ljava/lang/String;

    .line 229
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->rz:Ljava/lang/String;

    .line 230
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getExtra()Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->y:Lorg/json/JSONObject;

    .line 231
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->isAd()Z

    move-result v0

    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->n:Z

    .line 232
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getVersionCode()I

    move-result v0

    iput v0, p0, Lcom/ss/android/downloadad/api/rg/df;->un:I

    .line 233
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getVersionName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->z:Ljava/lang/String;

    .line 234
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->bm:Ljava/lang/String;

    .line 235
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getDeepLink()Lcom/ss/android/download/api/model/DeepLink;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 236
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getDeepLink()Lcom/ss/android/download/api/model/DeepLink;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/download/api/model/DeepLink;->getOpenUrl()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->b:Ljava/lang/String;

    .line 237
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getDeepLink()Lcom/ss/android/download/api/model/DeepLink;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/download/api/model/DeepLink;->getWebUrl()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->hq:Ljava/lang/String;

    .line 239
    :cond_0
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getModelType()I

    move-result v0

    iput v0, p0, Lcom/ss/android/downloadad/api/rg/df;->oh:I

    .line 240
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->r:Ljava/lang/String;

    .line 241
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getAppIcon()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->qx:Ljava/lang/String;

    .line 242
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getMimeType()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->bj:Ljava/lang/String;

    .line 244
    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadEventConfig;->getClickButtonTag()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->cd:Ljava/lang/String;

    .line 245
    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadEventConfig;->getRefer()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ax:Ljava/lang/String;

    .line 246
    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadEventConfig;->isEnableV3Event()Z

    move-result p2

    iput-boolean p2, p0, Lcom/ss/android/downloadad/api/rg/df;->ms:Z

    .line 248
    invoke-interface {p3}, Lcom/ss/android/download/api/download/DownloadController;->isEnableBackDialog()Z

    move-result p2

    iput-boolean p2, p0, Lcom/ss/android/downloadad/api/rg/df;->re:Z

    .line 249
    invoke-interface {p3}, Lcom/ss/android/download/api/download/DownloadController;->getLinkMode()I

    move-result p2

    iput p2, p0, Lcom/ss/android/downloadad/api/rg/df;->f:I

    .line 250
    invoke-interface {p3}, Lcom/ss/android/download/api/download/DownloadController;->getDownloadMode()I

    move-result p2

    iput p2, p0, Lcom/ss/android/downloadad/api/rg/df;->v:I

    .line 251
    invoke-interface {p3}, Lcom/ss/android/download/api/download/DownloadController;->enableShowComplianceDialog()Z

    move-result p2

    iput-boolean p2, p0, Lcom/ss/android/downloadad/api/rg/df;->s:Z

    .line 252
    invoke-interface {p3}, Lcom/ss/android/download/api/download/DownloadController;->isAutoDownloadOnCardShow()Z

    move-result p2

    iput-boolean p2, p0, Lcom/ss/android/downloadad/api/rg/df;->su:Z

    .line 253
    invoke-interface {p3}, Lcom/ss/android/download/api/download/DownloadController;->enableNewActivity()Z

    move-result p2

    iput-boolean p2, p0, Lcom/ss/android/downloadad/api/rg/df;->oy:Z

    .line 254
    invoke-interface {p3}, Lcom/ss/android/download/api/download/DownloadController;->enableAH()Z

    move-result p2

    iput-boolean p2, p0, Lcom/ss/android/downloadad/api/rg/df;->rg:Z

    .line 255
    invoke-interface {p3}, Lcom/ss/android/download/api/download/DownloadController;->enableAM()Z

    move-result p2

    iput-boolean p2, p0, Lcom/ss/android/downloadad/api/rg/df;->df:Z

    .line 257
    iput p4, p0, Lcom/ss/android/downloadad/api/rg/df;->fo:I

    .line 258
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p2

    iput-wide p2, p0, Lcom/ss/android/downloadad/api/rg/df;->ou:J

    .line 259
    iput-wide p2, p0, Lcom/ss/android/downloadad/api/rg/df;->i:J

    .line 261
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->shouldDownloadWithPatchApply()Z

    move-result p1

    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->g:Z

    return-void
.end method

.method public static df(Lorg/json/JSONObject;)Lcom/ss/android/downloadad/api/rg/df;
    .locals 6

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 809
    :cond_0
    new-instance v0, Lcom/ss/android/downloadad/api/rg/df;

    invoke-direct {v0}, Lcom/ss/android/downloadad/api/rg/df;-><init>()V

    :try_start_0
    const-string v1, "mId"

    .line 811
    invoke-static {p0, v1}, Lcom/ss/android/download/api/q/df;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadad/api/rg/df;->pt(J)V

    const-string v1, "mExtValue"

    .line 812
    invoke-static {p0, v1}, Lcom/ss/android/download/api/q/df;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadad/api/rg/df;->pp(J)V

    const-string v1, "mLogExtra"

    .line 813
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->q(Ljava/lang/String;)V

    const-string v1, "mDownloadStatus"

    .line 814
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->pp(I)V

    const-string v1, "mPackageName"

    .line 815
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->df(Ljava/lang/String;)V

    const-string v1, "mIsAd"

    const/4 v2, 0x1

    .line 816
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->rg(Z)V

    const-string v1, "mTimeStamp"

    .line 817
    invoke-static {p0, v1}, Lcom/ss/android/download/api/q/df;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v3

    invoke-virtual {v0, v3, v4}, Lcom/ss/android/downloadad/api/rg/df;->c(J)V

    const-string v1, "mVersionCode"

    .line 818
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->c(I)V

    const-string v1, "mVersionName"

    .line 819
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->pt(Ljava/lang/String;)V

    const-string v1, "mDownloadId"

    .line 820
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->fw(I)V

    const-string v1, "mIsV3Event"

    .line 821
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->df(Z)V

    const-string v1, "mScene"

    .line 822
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->ux(I)V

    const-string v1, "mEventTag"

    .line 823
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->c(Ljava/lang/String;)V

    const-string v1, "mEventRefer"

    .line 824
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->fw(Ljava/lang/String;)V

    const-string v1, "mDownloadUrl"

    .line 825
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->ux(Ljava/lang/String;)V

    const-string v1, "mEnableBackDialog"

    .line 826
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->q(Z)V

    .line 827
    iget-object v1, v0, Lcom/ss/android/downloadad/api/rg/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    const-string v3, "hasSendInstallFinish"

    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 828
    iget-object v1, v0, Lcom/ss/android/downloadad/api/rg/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    const-string v3, "hasSendDownloadFailedFinally"

    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    const-string v1, "mLastFailedErrCode"

    .line 829
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->pt(I)V

    const-string v1, "mLastFailedErrMsg"

    .line 830
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->rg(Ljava/lang/String;)V

    const-string v1, "mOpenUrl"

    .line 831
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->rz(Ljava/lang/String;)V

    const-string v1, "mLinkMode"

    .line 832
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->bm(I)V

    const-string v1, "mDownloadMode"

    .line 833
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->b(I)V

    const-string v1, "mModelType"

    .line 834
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->hq(I)V

    const-string v1, "mAppName"

    .line 835
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->bm(Ljava/lang/String;)V

    const-string v1, "mAppIcon"

    .line 836
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->b(Ljava/lang/String;)V

    const-string v1, "mDownloadFailedTimes"

    const/4 v3, 0x0

    .line 837
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->rg(I)V

    const-string v1, "mRecentDownloadResumeTime"

    .line 838
    invoke-static {p0, v1}, Lcom/ss/android/download/api/q/df;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v4

    invoke-virtual {v0, v4, v5}, Lcom/ss/android/downloadad/api/rg/df;->rg(J)V

    const-string v1, "mClickPauseTimes"

    .line 839
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->df(I)V

    const-string v1, "mJumpInstallTime"

    .line 840
    invoke-static {p0, v1}, Lcom/ss/android/download/api/q/df;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v4

    invoke-virtual {v0, v4, v5}, Lcom/ss/android/downloadad/api/rg/df;->df(J)V

    const-string v1, "mCancelInstallTime"

    .line 841
    invoke-static {p0, v1}, Lcom/ss/android/download/api/q/df;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v4

    invoke-virtual {v0, v4, v5}, Lcom/ss/android/downloadad/api/rg/df;->q(J)V

    const-string v1, "mLastFailedResumeCount"

    .line 842
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->q(I)V

    const-string v1, "downloadFinishReason"

    .line 843
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->hq(Ljava/lang/String;)V

    const-string v1, "clickDownloadSize"

    .line 844
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v4

    invoke-virtual {v0, v4, v5}, Lcom/ss/android/downloadad/api/rg/df;->rz(J)V

    const-string v1, "clickDownloadTime"

    .line 845
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v4

    invoke-virtual {v0, v4, v5}, Lcom/ss/android/downloadad/api/rg/df;->ux(J)V

    const-string v1, "mIsUpdateDownload"

    .line 846
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->ux(Z)V

    const-string v1, "mOriginMimeType"

    .line 847
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->oh(Ljava/lang/String;)V

    const-string v1, "mIsPatchApplyHandled"

    .line 848
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->rz(Z)V

    const-string v1, "installAfterCleanSpace"

    .line 849
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->c(Z)V

    const-string v1, "funnelType"

    .line 850
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->rz(I)V

    const-string v1, "webUrl"

    .line 851
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->pp(Ljava/lang/String;)V

    const-string v1, "enableShowComplianceDialog"

    .line 852
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->un(Z)V

    const-string v1, "isAutoDownloadOnCardShow"

    .line 853
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->z(Z)V

    const-string v1, "enable_new_activity"

    .line 854
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v2, :cond_1

    move v1, v2

    goto :goto_0

    :cond_1
    move v1, v3

    :goto_0
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->r(Z)V

    const-string v1, "enable_pause"

    .line 855
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v2, :cond_2

    move v1, v2

    goto :goto_1

    :cond_2
    move v1, v3

    :goto_1
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->qx(Z)V

    const-string v1, "enable_ah"

    .line 856
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v2, :cond_3

    move v1, v2

    goto :goto_2

    :cond_3
    move v1, v3

    :goto_2
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->n(Z)V

    const-string v1, "enable_am"

    .line 857
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v2, :cond_4

    goto :goto_3

    :cond_4
    move v2, v3

    :goto_3
    invoke-virtual {v0, v2}, Lcom/ss/android/downloadad/api/rg/df;->ou(Z)V

    const-string v1, "mExtras"

    .line 858
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/ss/android/downloadad/api/rg/df;->rg(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    :catch_0
    move-exception p0

    .line 860
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->qx()Lcom/ss/android/download/api/df/rg;

    move-result-object v1

    const-string v2, "NativeDownloadModel fromJson"

    invoke-interface {v1, p0, v2}, Lcom/ss/android/download/api/df/rg;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    :goto_4
    return-object v0
.end method


# virtual methods
.method public ax()J
    .locals 2

    .line 535
    iget-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ey:J

    return-wide v0
.end method

.method public b()Lorg/json/JSONObject;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public b(I)V
    .locals 0

    .line 563
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->v:I

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    .line 547
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->qx:Ljava/lang/String;

    return-void
.end method

.method public b(Z)V
    .locals 0

    .line 676
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->xv:Z

    return-void
.end method

.method public bj()J
    .locals 2

    .line 374
    iget-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ou:J

    return-wide v0
.end method

.method public bl()Z
    .locals 1

    .line 608
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->om:Z

    return v0
.end method

.method public bm()Ljava/lang/String;
    .locals 1

    .line 502
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->cd:Ljava/lang/String;

    return-object v0
.end method

.method public bm(I)V
    .locals 0

    .line 555
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->f:I

    return-void
.end method

.method public bm(Ljava/lang/String;)V
    .locals 0

    .line 539
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->r:Ljava/lang/String;

    return-void
.end method

.method public bm(Z)V
    .locals 0

    .line 668
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->fg:Z

    return-void
.end method

.method public c()Ljava/lang/String;
    .locals 1

    .line 527
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->b:Ljava/lang/String;

    return-object v0
.end method

.method public c(I)V
    .locals 0

    .line 411
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->un:I

    return-void
.end method

.method public c(J)V
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-lez v0, :cond_0

    .line 379
    iput-wide p1, p0, Lcom/ss/android/downloadad/api/rg/df;->ou:J

    :cond_0
    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    .line 498
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->cd:Ljava/lang/String;

    return-void
.end method

.method public c(Z)V
    .locals 0

    .line 612
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->om:Z

    return-void
.end method

.method public cd()Z
    .locals 1

    .line 494
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->re:Z

    return v0
.end method

.method public d()J
    .locals 2

    .line 300
    iget-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->lc:J

    return-wide v0
.end method

.method public df()J
    .locals 2

    .line 341
    iget-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->pp:J

    return-wide v0
.end method

.method public df(I)V
    .locals 0

    .line 281
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->p:I

    return-void
.end method

.method public df(J)V
    .locals 0

    .line 304
    iput-wide p1, p0, Lcom/ss/android/downloadad/api/rg/df;->lc:J

    return-void
.end method

.method public df(Ljava/lang/String;)V
    .locals 0

    .line 370
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->rz:Ljava/lang/String;

    return-void
.end method

.method public df(Z)V
    .locals 0

    .line 436
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->ms:Z

    return-void
.end method

.method public dj()I
    .locals 1

    .line 316
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->dj:I

    return v0
.end method

.method public ev()I
    .locals 1

    .line 473
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->m:I

    return v0
.end method

.method public ey()Z
    .locals 1

    .line 672
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->xv:Z

    return v0
.end method

.method public f()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method public f(Z)V
    .locals 0

    .line 700
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->yw:Z

    return-void
.end method

.method public fg()Z
    .locals 1

    .line 680
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->vd:Z

    return v0
.end method

.method public fl()Z
    .locals 1

    .line 640
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->lu:Z

    return v0
.end method

.method public fo()Lcom/ss/android/download/api/download/DownloadController;
    .locals 1

    .line 884
    invoke-virtual {p0}, Lcom/ss/android/downloadad/api/rg/df;->ls()Lcom/ss/android/downloadad/api/download/AdDownloadController;

    move-result-object v0

    return-object v0
.end method

.method public fw()Lorg/json/JSONObject;
    .locals 1

    .line 403
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->y:Lorg/json/JSONObject;

    return-object v0
.end method

.method public fw(I)V
    .locals 0

    .line 427
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->fo:I

    return-void
.end method

.method public fw(J)V
    .locals 0

    .line 531
    iput-wide p1, p0, Lcom/ss/android/downloadad/api/rg/df;->ey:J

    return-void
.end method

.method public fw(Ljava/lang/String;)V
    .locals 0

    .line 506
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->ax:Ljava/lang/String;

    return-void
.end method

.method public fw(Z)V
    .locals 0

    .line 620
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->ka:Z

    return-void
.end method

.method public g()I
    .locals 1

    .line 419
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->un:I

    return v0
.end method

.method public gk()Z
    .locals 1

    .line 616
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ka:Z

    return v0
.end method

.method public go()I
    .locals 1

    .line 324
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->go:I

    return v0
.end method

.method public h()Ljava/lang/String;
    .locals 1

    .line 648
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->bj:Ljava/lang/String;

    return-object v0
.end method

.method public hq()J
    .locals 2

    .line 349
    iget-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->c:J

    return-wide v0
.end method

.method public hq(I)V
    .locals 0

    .line 571
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->oh:I

    return-void
.end method

.method public hq(Ljava/lang/String;)V
    .locals 0

    .line 596
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->fl:Ljava/lang/String;

    return-void
.end method

.method public hq(Z)V
    .locals 0

    .line 684
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->vd:Z

    return-void
.end method

.method public declared-synchronized i()V
    .locals 1

    monitor-enter p0

    .line 285
    :try_start_0
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->p:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/downloadad/api/rg/df;->p:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 286
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public j()Z
    .locals 1

    .line 656
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->g:Z

    return v0
.end method

.method public k()Ljava/lang/String;
    .locals 1

    .line 332
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->k:Ljava/lang/String;

    return-object v0
.end method

.method public ka()Z
    .locals 1

    .line 664
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->fg:Z

    return v0
.end method

.method public declared-synchronized l()V
    .locals 1

    monitor-enter p0

    .line 273
    :try_start_0
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->l:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/downloadad/api/rg/df;->l:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 274
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public lc()J
    .locals 4

    .line 289
    iget-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->i:J

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-nez v2, :cond_0

    .line 290
    iget-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ou:J

    :cond_0
    return-wide v0
.end method

.method public ls()Lcom/ss/android/downloadad/api/download/AdDownloadController;
    .locals 2

    .line 915
    new-instance v0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    invoke-direct {v0}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;-><init>()V

    iget-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->re:Z

    .line 916
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setIsEnableBackDialog(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    move-result-object v0

    iget v1, p0, Lcom/ss/android/downloadad/api/rg/df;->f:I

    .line 917
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setLinkMode(I)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    move-result-object v0

    iget v1, p0, Lcom/ss/android/downloadad/api/rg/df;->v:I

    .line 918
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setDownloadMode(I)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    move-result-object v0

    iget-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->s:Z

    .line 919
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setEnableShowComplianceDialog(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    move-result-object v0

    iget-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->rg:Z

    .line 920
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setEnableAH(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    move-result-object v0

    iget-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->df:Z

    .line 921
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setEnableAM(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    move-result-object v0

    .line 922
    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->build()Lcom/ss/android/downloadad/api/download/AdDownloadController;

    move-result-object v0

    return-object v0
.end method

.method public lu()I
    .locals 1

    .line 357
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ux:I

    return v0
.end method

.method public m()Ljava/lang/String;
    .locals 1

    .line 592
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->fl:Ljava/lang/String;

    return-object v0
.end method

.method public mc()Z
    .locals 1

    .line 600
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->j:Z

    return v0
.end method

.method public ms()Ljava/lang/String;
    .locals 1

    .line 543
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->r:Ljava/lang/String;

    return-object v0
.end method

.method public n()I
    .locals 1

    const/4 v0, -0x1

    return v0
.end method

.method public n(Z)V
    .locals 0

    .line 741
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->rg:Z

    return-void
.end method

.method public oh(Ljava/lang/String;)V
    .locals 0

    .line 652
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->bj:Ljava/lang/String;

    return-void
.end method

.method public oh(Z)V
    .locals 0

    .line 692
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->t:Z

    return-void
.end method

.method public oh()Z
    .locals 1

    .line 440
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ms:Z

    return v0
.end method

.method public oi()Lcom/ss/android/downloadad/api/download/AdDownloadModel;
    .locals 5

    .line 888
    new-instance v0, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    invoke-direct {v0}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;-><init>()V

    iget-wide v1, p0, Lcom/ss/android/downloadad/api/rg/df;->pp:J

    .line 889
    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setAdId(J)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget-wide v1, p0, Lcom/ss/android/downloadad/api/rg/df;->c:J

    .line 890
    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setExtraValue(J)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadad/api/rg/df;->fw:Ljava/lang/String;

    .line 891
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setLogExtra(Ljava/lang/String;)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadad/api/rg/df;->rz:Ljava/lang/String;

    .line 892
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setPackageName(Ljava/lang/String;)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadad/api/rg/df;->y:Lorg/json/JSONObject;

    .line 893
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setExtra(Lorg/json/JSONObject;)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->n:Z

    .line 894
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setIsAd(Z)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget v1, p0, Lcom/ss/android/downloadad/api/rg/df;->un:I

    .line 895
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setVersionCode(I)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadad/api/rg/df;->z:Ljava/lang/String;

    .line 896
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setVersionName(Ljava/lang/String;)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadad/api/rg/df;->bm:Ljava/lang/String;

    .line 897
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setDownloadUrl(Ljava/lang/String;)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget v1, p0, Lcom/ss/android/downloadad/api/rg/df;->oh:I

    .line 898
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setModelType(I)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadad/api/rg/df;->bj:Ljava/lang/String;

    .line 899
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setMimeType(Ljava/lang/String;)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadad/api/rg/df;->r:Ljava/lang/String;

    .line 900
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setAppName(Ljava/lang/String;)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadad/api/rg/df;->qx:Ljava/lang/String;

    .line 901
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setAppIcon(Ljava/lang/String;)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    new-instance v1, Lcom/ss/android/download/api/model/DeepLink;

    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/ss/android/downloadad/api/rg/df;->hq:Ljava/lang/String;

    const/4 v4, 0x0

    invoke-direct {v1, v2, v3, v4}, Lcom/ss/android/download/api/model/DeepLink;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 902
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->setDeepLink(Lcom/ss/android/download/api/model/DeepLink;)Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;

    move-result-object v0

    .line 903
    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/download/AdDownloadModel$Builder;->build()Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    move-result-object v0

    return-object v0
.end method

.method public om()I
    .locals 1

    .line 559
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->f:I

    return v0
.end method

.method public ou()Lcom/ss/android/download/api/download/DownloadModel;
    .locals 1

    .line 874
    invoke-virtual {p0}, Lcom/ss/android/downloadad/api/rg/df;->oi()Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    move-result-object v0

    return-object v0
.end method

.method public ou(Z)V
    .locals 0

    .line 745
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->df:Z

    return-void
.end method

.method public ox()Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig;
    .locals 2

    .line 907
    new-instance v0, Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig$Builder;

    invoke-direct {v0}, Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig$Builder;-><init>()V

    iget-object v1, p0, Lcom/ss/android/downloadad/api/rg/df;->cd:Ljava/lang/String;

    .line 908
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig$Builder;->setClickButtonTag(Ljava/lang/String;)Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadad/api/rg/df;->ax:Ljava/lang/String;

    .line 909
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig$Builder;->setRefer(Ljava/lang/String;)Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig$Builder;

    move-result-object v0

    iget-boolean v1, p0, Lcom/ss/android/downloadad/api/rg/df;->ms:Z

    .line 910
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig$Builder;->setIsEnableV3Event(Z)Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig$Builder;

    move-result-object v0

    .line 911
    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig$Builder;->build()Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig;

    move-result-object v0

    return-object v0
.end method

.method public oy()Ljava/lang/String;
    .locals 1

    .line 423
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->z:Ljava/lang/String;

    return-object v0
.end method

.method public p()I
    .locals 1

    .line 277
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->p:I

    return v0
.end method

.method public pp()Ljava/lang/String;
    .locals 1

    .line 366
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->rz:Ljava/lang/String;

    return-object v0
.end method

.method public pp(I)V
    .locals 0

    .line 361
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->ux:I

    return-void
.end method

.method public pp(J)V
    .locals 0

    .line 353
    iput-wide p1, p0, Lcom/ss/android/downloadad/api/rg/df;->c:J

    return-void
.end method

.method public pp(Ljava/lang/String;)V
    .locals 0

    .line 481
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->hq:Ljava/lang/String;

    return-void
.end method

.method public pp(Z)V
    .locals 0

    .line 604
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->j:Z

    return-void
.end method

.method public pt()Ljava/lang/String;
    .locals 1

    .line 385
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->fw:Ljava/lang/String;

    return-object v0
.end method

.method public pt(I)V
    .locals 0

    .line 328
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->go:I

    return-void
.end method

.method public pt(J)V
    .locals 0

    .line 345
    iput-wide p1, p0, Lcom/ss/android/downloadad/api/rg/df;->pp:J

    return-void
.end method

.method public pt(Ljava/lang/String;)V
    .locals 0

    .line 415
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->z:Ljava/lang/String;

    return-void
.end method

.method public pt(Z)V
    .locals 0

    .line 588
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->h:Z

    return-void
.end method

.method public q(I)V
    .locals 0

    .line 320
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->dj:I

    return-void
.end method

.method public q(J)V
    .locals 0

    .line 312
    iput-wide p1, p0, Lcom/ss/android/downloadad/api/rg/df;->d:J

    return-void
.end method

.method public q(Ljava/lang/String;)V
    .locals 0

    .line 389
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->fw:Ljava/lang/String;

    return-void
.end method

.method public q(Z)V
    .locals 0

    .line 490
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->re:Z

    return-void
.end method

.method public q()Z
    .locals 1

    .line 394
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->n:Z

    return v0
.end method

.method public qx()I
    .locals 1

    .line 432
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->fo:I

    return v0
.end method

.method public qx(Z)V
    .locals 0

    .line 737
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->ev:Z

    return-void
.end method

.method public r()Lorg/json/JSONObject;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public r(Z)V
    .locals 0

    .line 733
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->oy:Z

    return-void
.end method

.method public re()I
    .locals 1

    .line 265
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->l:I

    return v0
.end method

.method public rg()Ljava/lang/String;
    .locals 1

    .line 518
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->bm:Ljava/lang/String;

    return-object v0
.end method

.method public rg(I)V
    .locals 0

    .line 269
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->l:I

    return-void
.end method

.method public rg(J)V
    .locals 0

    .line 296
    iput-wide p1, p0, Lcom/ss/android/downloadad/api/rg/df;->i:J

    return-void
.end method

.method public rg(Ljava/lang/String;)V
    .locals 0

    .line 336
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->k:Ljava/lang/String;

    return-void
.end method

.method public rg(Lorg/json/JSONObject;)V
    .locals 0

    .line 407
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->y:Lorg/json/JSONObject;

    return-void
.end method

.method public rg(Z)V
    .locals 0

    .line 398
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->n:Z

    return-void
.end method

.method public rz()Ljava/lang/String;
    .locals 1

    .line 510
    iget-object v0, p0, Lcom/ss/android/downloadad/api/rg/df;->ax:Ljava/lang/String;

    return-object v0
.end method

.method public rz(I)V
    .locals 0

    .line 477
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->mc:I

    return-void
.end method

.method public rz(J)V
    .locals 0

    .line 636
    iput-wide p1, p0, Lcom/ss/android/downloadad/api/rg/df;->gk:J

    return-void
.end method

.method public rz(Ljava/lang/String;)V
    .locals 0

    .line 522
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->b:Ljava/lang/String;

    return-void
.end method

.method public rz(Z)V
    .locals 0

    .line 660
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->g:Z

    return-void
.end method

.method public s()J
    .locals 2

    .line 624
    iget-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->bl:J

    return-wide v0
.end method

.method public su()J
    .locals 2

    .line 632
    iget-wide v0, p0, Lcom/ss/android/downloadad/api/rg/df;->gk:J

    return-wide v0
.end method

.method public t()Z
    .locals 1

    .line 696
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->yw:Z

    return v0
.end method

.method public un()Lorg/json/JSONObject;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public un(Z)V
    .locals 0

    .line 716
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->s:Z

    return-void
.end method

.method public ux()I
    .locals 1

    .line 486
    iget v0, p0, Lcom/ss/android/downloadad/api/rg/df;->mc:I

    return v0
.end method

.method public ux(I)V
    .locals 0

    .line 469
    iput p1, p0, Lcom/ss/android/downloadad/api/rg/df;->m:I

    return-void
.end method

.method public ux(J)V
    .locals 0

    .line 628
    iput-wide p1, p0, Lcom/ss/android/downloadad/api/rg/df;->bl:J

    return-void
.end method

.method public ux(Ljava/lang/String;)V
    .locals 0

    .line 514
    iput-object p1, p0, Lcom/ss/android/downloadad/api/rg/df;->bm:Ljava/lang/String;

    return-void
.end method

.method public ux(Z)V
    .locals 0

    .line 644
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->lu:Z

    return-void
.end method

.method public v()Ljava/lang/Object;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public v(Z)V
    .locals 0

    .line 708
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->oi:Z

    return-void
.end method

.method public vd()Z
    .locals 1

    .line 704
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->oi:Z

    return v0
.end method

.method public xv()Z
    .locals 1

    .line 688
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->t:Z

    return v0
.end method

.method public y()Lcom/ss/android/download/api/download/DownloadEventConfig;
    .locals 1

    .line 879
    invoke-virtual {p0}, Lcom/ss/android/downloadad/api/rg/df;->ox()Lcom/ss/android/downloadad/api/download/AdDownloadEventConfig;

    move-result-object v0

    return-object v0
.end method

.method public yw()Lorg/json/JSONObject;
    .locals 6

    .line 749
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "mId"

    .line 751
    iget-wide v2, p0, Lcom/ss/android/downloadad/api/rg/df;->pp:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "mExtValue"

    .line 752
    iget-wide v2, p0, Lcom/ss/android/downloadad/api/rg/df;->c:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "mLogExtra"

    .line 753
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->fw:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mDownloadStatus"

    .line 754
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->ux:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mPackageName"

    .line 755
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->rz:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mIsAd"

    .line 756
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->n:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "mTimeStamp"

    .line 757
    iget-wide v2, p0, Lcom/ss/android/downloadad/api/rg/df;->ou:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "mExtras"

    .line 758
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->y:Lorg/json/JSONObject;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mVersionCode"

    .line 759
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->un:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mVersionName"

    .line 760
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->z:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mDownloadId"

    .line 761
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->fo:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mIsV3Event"

    .line 762
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->ms:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "mScene"

    .line 763
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->m:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mEventTag"

    .line 764
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->cd:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mEventRefer"

    .line 765
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->ax:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mDownloadUrl"

    .line 766
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->bm:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mEnableBackDialog"

    .line 767
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->re:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "hasSendInstallFinish"

    .line 768
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "hasSendDownloadFailedFinally"

    .line 769
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "mLastFailedErrCode"

    .line 770
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->go:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mLastFailedErrMsg"

    .line 771
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->k:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mOpenUrl"

    .line 772
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mLinkMode"

    .line 773
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->f:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mDownloadMode"

    .line 774
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->v:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mModelType"

    .line 775
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->oh:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mAppName"

    .line 776
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->r:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mAppIcon"

    .line 777
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->qx:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mDownloadFailedTimes"

    .line 778
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->l:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mRecentDownloadResumeTime"

    .line 779
    iget-wide v2, p0, Lcom/ss/android/downloadad/api/rg/df;->i:J

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-nez v2, :cond_0

    iget-wide v2, p0, Lcom/ss/android/downloadad/api/rg/df;->ou:J

    goto :goto_0

    :cond_0
    iget-wide v2, p0, Lcom/ss/android/downloadad/api/rg/df;->i:J

    :goto_0
    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "mClickPauseTimes"

    .line 780
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->p:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mJumpInstallTime"

    .line 781
    iget-wide v2, p0, Lcom/ss/android/downloadad/api/rg/df;->lc:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "mCancelInstallTime"

    .line 782
    iget-wide v2, p0, Lcom/ss/android/downloadad/api/rg/df;->d:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "mLastFailedResumeCount"

    .line 783
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->dj:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "mIsUpdateDownload"

    .line 784
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->lu:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "mOriginMimeType"

    .line 785
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->bj:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mIsPatchApplyHandled"

    .line 786
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->g:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "downloadFinishReason"

    .line 787
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->fl:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "clickDownloadTime"

    .line 788
    iget-wide v2, p0, Lcom/ss/android/downloadad/api/rg/df;->bl:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "clickDownloadSize"

    .line 789
    iget-wide v2, p0, Lcom/ss/android/downloadad/api/rg/df;->gk:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "installAfterCleanSpace"

    .line 790
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->om:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "funnelType"

    .line 791
    iget v2, p0, Lcom/ss/android/downloadad/api/rg/df;->mc:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "webUrl"

    .line 792
    iget-object v2, p0, Lcom/ss/android/downloadad/api/rg/df;->hq:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "enableShowComplianceDialog"

    .line 793
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->s:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "isAutoDownloadOnCardShow"

    .line 794
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->su:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "enable_new_activity"

    .line 795
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->oy:Z

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-eqz v2, :cond_1

    move v2, v3

    goto :goto_1

    :cond_1
    move v2, v4

    :goto_1
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "enable_pause"

    .line 796
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->ev:Z

    if-eqz v2, :cond_2

    move v2, v3

    goto :goto_2

    :cond_2
    move v2, v4

    :goto_2
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "enable_ah"

    .line 797
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->rg:Z

    if-eqz v2, :cond_3

    move v2, v3

    goto :goto_3

    :cond_3
    move v2, v4

    :goto_3
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "enable_am"

    .line 798
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/rg/df;->df:Z

    if-eqz v2, :cond_4

    goto :goto_4

    :cond_4
    move v3, v4

    :goto_4
    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_5

    :catch_0
    move-exception v1

    .line 800
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->qx()Lcom/ss/android/download/api/df/rg;

    move-result-object v2

    const-string v3, "NativeDownloadModel toJson"

    invoke-interface {v2, v1, v3}, Lcom/ss/android/download/api/df/rg;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    :goto_5
    return-object v0
.end method

.method public z(Z)V
    .locals 0

    .line 724
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/rg/df;->su:Z

    return-void
.end method

.method public z()Z
    .locals 1

    .line 729
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/rg/df;->oy:Z

    return v0
.end method
