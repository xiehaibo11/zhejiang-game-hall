.class public Lcom/mbridge/msdk/nativex/view/MBMediaView;
.super Landroid/widget/LinearLayout;
.source "MBMediaView.java"

# interfaces
.implements Lcom/mbridge/msdk/playercommon/VideoPlayerStatusListener;
.implements Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/nativex/view/MBMediaView$d;,
        Lcom/mbridge/msdk/nativex/view/MBMediaView$c;,
        Lcom/mbridge/msdk/nativex/view/MBMediaView$b;,
        Lcom/mbridge/msdk/nativex/view/MBMediaView$f;,
        Lcom/mbridge/msdk/nativex/view/MBMediaView$g;,
        Lcom/mbridge/msdk/nativex/view/MBMediaView$e;,
        Lcom/mbridge/msdk/nativex/view/MBMediaView$a;
    }
.end annotation


# static fields
.field public static final OPEN_FULLSCREEN_ON_VIDEO_TYPE_1_LANDING_PAGE:I = 0x1

.field public static final OPEN_FULLSCREEN_ON_VIDEO_TYPE_2_NORMAL_FULLSCREEN:I = 0x2

.field public static final OPEN_FULLSCREEN_ON_VIDEO_TYPE_3_NORMAL_FULLSCREEN_ENDCARD:I = 0x3

.field public static final OPEN_FULLSCREEN_ON_VIDEO_TYPE_4_NORMAL_FULLSCREEN_LP:I = 0x4

.field public static final OPEN_FULLSCREEN_ON_VIDEO_TYPE_6_SMALLVIDEO:I = 0x6

.field public static final TAG:Ljava/lang/String; = "MBMediaView"

.field public static final WHAT_VIEW_FULL_SCREEN:I = 0x2

.field public static final WHAT_VIEW_SMALL_SCREEN:I = 0x1

.field private static o:I = 0x2

.field private static p:I = 0x1


# instance fields
.field private A:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

.field private B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

.field private C:Lcom/mbridge/msdk/videocommon/view/MyImageView;

.field private D:Landroid/widget/ProgressBar;

.field private E:Landroid/view/View;

.field private F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

.field private G:Landroid/widget/RelativeLayout;

.field private H:Landroid/widget/RelativeLayout;

.field private I:Landroid/widget/TextView;

.field private J:Landroid/widget/ProgressBar;

.field private K:Landroid/widget/RelativeLayout;

.field private L:I

.field private M:Landroid/os/Handler;

.field private N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private O:I

.field private P:I

.field private Q:D

.field private R:D

.field private S:I

.field private T:I

.field private U:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

.field private V:Landroid/hardware/SensorManager;

.field private W:Landroid/hardware/Sensor;

.field private a:Z

.field private aa:Lcom/mbridge/msdk/videocommon/download/a;

.field private ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

.field private ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

.field private ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

.field private ae:I

.field private af:Z

.field private ag:Z

.field private ah:Landroid/widget/RelativeLayout;

.field private ai:Landroid/widget/ImageView;

.field private aj:I

.field private ak:Z

.field private al:Landroid/content/Context;

.field private am:Z

.field private an:Ljava/lang/Runnable;

.field private b:Z

.field private c:Z

.field private d:Z

.field private e:Z

.field private f:Z

.field private g:Z

.field private h:Z

.field private volatile i:Z

.field private volatile j:Z

.field private k:Z

.field private l:Z

.field private m:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private n:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private q:Z

.field private r:Z

.field private s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

.field private t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

.field private u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

.field private v:I

.field private w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

.field private x:Landroid/widget/RelativeLayout;

.field private y:Landroid/widget/RelativeLayout;

.field private z:Landroid/widget/RelativeLayout;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 236
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x1

    .line 139
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a:Z

    .line 143
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b:Z

    .line 147
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c:Z

    .line 151
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->d:Z

    .line 152
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e:Z

    const/4 v1, 0x0

    .line 153
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->f:Z

    .line 154
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->g:Z

    .line 156
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    .line 157
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    .line 158
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->j:Z

    .line 161
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->k:Z

    .line 162
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->l:Z

    .line 163
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->m:Ljava/util/ArrayList;

    .line 164
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->n:Ljava/util/ArrayList;

    .line 171
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->q:Z

    .line 172
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->r:Z

    const/4 v0, 0x0

    .line 177
    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    .line 178
    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    .line 179
    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    .line 181
    iput v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->v:I

    .line 218
    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    .line 219
    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    .line 223
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->af:Z

    .line 224
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ag:Z

    .line 229
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ak:Z

    .line 233
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->am:Z

    .line 3116
    new-instance v0, Lcom/mbridge/msdk/nativex/view/MBMediaView$10;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$10;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->an:Ljava/lang/Runnable;

    .line 237
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 241
    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, 0x1

    .line 139
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a:Z

    .line 143
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b:Z

    .line 147
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c:Z

    .line 151
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->d:Z

    .line 152
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e:Z

    const/4 v0, 0x0

    .line 153
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->f:Z

    .line 154
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->g:Z

    .line 156
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    .line 157
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    .line 158
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->j:Z

    .line 161
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->k:Z

    .line 162
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->l:Z

    .line 163
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->m:Ljava/util/ArrayList;

    .line 164
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->n:Ljava/util/ArrayList;

    .line 171
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->q:Z

    .line 172
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->r:Z

    const/4 p2, 0x0

    .line 177
    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    .line 178
    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    .line 179
    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    .line 181
    iput v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->v:I

    .line 218
    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    .line 219
    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    .line 223
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->af:Z

    .line 224
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ag:Z

    .line 229
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ak:Z

    .line 233
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->am:Z

    .line 3116
    new-instance p2, Lcom/mbridge/msdk/nativex/view/MBMediaView$10;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$10;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->an:Ljava/lang/Runnable;

    .line 242
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Landroid/content/Context;)V

    return-void
.end method

.method private A()V
    .locals 8

    const-string v0, "MBMediaView"

    .line 2161
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoResolution()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 2165
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoResolution()Ljava/lang/String;

    move-result-object v1

    .line 2166
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "videoResolution:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "x"

    .line 2168
    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 2169
    array-length v2, v1

    const/4 v3, 0x2

    if-ne v2, v3, :cond_2

    const/4 v2, 0x0

    .line 2170
    aget-object v2, v1, v2

    const/4 v3, 0x1

    .line 2171
    aget-object v1, v1, v3

    .line 2172
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Ljava/lang/String;)D

    move-result-wide v2

    .line 2173
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Ljava/lang/String;)D

    move-result-wide v4

    const-wide/16 v6, 0x0

    cmpl-double v1, v2, v6

    if-lez v1, :cond_2

    cmpl-double v1, v4, v6

    if-lez v1, :cond_2

    .line 2175
    iput-wide v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->Q:D

    .line 2176
    iput-wide v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->R:D

    goto :goto_1

    :cond_1
    :goto_0
    const-string v1, "campaign is null initVideoWH return"

    .line 2162
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    .line 2180
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

.method static synthetic A(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x()V

    return-void
.end method

.method private B()F
    .locals 2

    .line 2186
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->i(Landroid/content/Context;)I

    move-result v0

    int-to-float v0, v0

    .line 2187
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    if-eqz v1, :cond_0

    .line 2188
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->k(Landroid/content/Context;)I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    int-to-float v1, v1

    add-float/2addr v0, v1

    :cond_0
    return v0

    :catchall_0
    move-exception v0

    .line 2193
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    return v0
.end method

.method static synthetic B(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/widget/TextView;
    .locals 0

    .line 116
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->I:Landroid/widget/TextView;

    return-object p0
.end method

.method private C()F
    .locals 2

    .line 2200
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->j(Landroid/content/Context;)I

    move-result v0

    int-to-float v0, v0

    .line 2201
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    if-nez v1, :cond_0

    .line 2202
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->k(Landroid/content/Context;)I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    int-to-float v1, v1

    add-float/2addr v0, v1

    :cond_0
    return v0

    :catchall_0
    move-exception v0

    .line 2207
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    return v0
.end method

.method static synthetic C(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z
    .locals 0

    .line 116
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ak:Z

    return p0
.end method

.method static synthetic D(Lcom/mbridge/msdk/nativex/view/MBMediaView;)F
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B()F

    move-result p0

    return p0
.end method

.method private D()V
    .locals 4

    .line 2313
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->H:Landroid/widget/RelativeLayout;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    if-eqz v0, :cond_3

    .line 2314
    :cond_0
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41f00000    # 30.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xb

    .line 2315
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v1, 0xa

    .line 2316
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 2317
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41000000    # 8.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 2318
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 2319
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->H:Landroid/widget/RelativeLayout;

    if-eqz v1, :cond_1

    .line 2320
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->H:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 2322
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    if-eqz v1, :cond_2

    .line 2323
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    const/4 v0, 0x0

    .line 2325
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->updateViewManger(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 2328
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method private E()V
    .locals 4

    .line 2334
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->H:Landroid/widget/RelativeLayout;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    if-eqz v0, :cond_4

    .line 2335
    :cond_0
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41f00000    # 30.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xb

    .line 2336
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v1, 0xa

    .line 2337
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 2338
    iget v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ae:I

    const/high16 v2, 0x41000000    # 8.0f

    if-nez v1, :cond_1

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2339
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->k(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v3

    add-int/2addr v1, v3

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    goto :goto_0

    .line 2341
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 2343
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 2344
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->H:Landroid/widget/RelativeLayout;

    if-eqz v1, :cond_2

    .line 2345
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->H:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 2347
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    if-eqz v1, :cond_3

    .line 2348
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_3
    const/4 v0, 0x1

    .line 2350
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->updateViewManger(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 2353
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_1
    return-void
.end method

.method static synthetic E(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z
    .locals 0

    .line 116
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->j:Z

    return p0
.end method

.method private F()V
    .locals 7

    .line 2383
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReportClick()Z

    move-result v0

    if-nez v0, :cond_0

    .line 2384
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReportClick(Z)V

    .line 2385
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->h()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2388
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v3

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->h()[Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x0

    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    :cond_0
    return-void
.end method

.method static synthetic F(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E()V

    return-void
.end method

.method private G()V
    .locals 12

    .line 2562
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 2563
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->d()[Ljava/lang/String;

    move-result-object v0

    .line 2565
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    if-eqz v1, :cond_0

    .line 2566
    sget v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->o:I

    goto :goto_0

    .line 2568
    :cond_0
    sget v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p:I

    .line 2570
    :goto_0
    array-length v2, v0

    const/4 v3, 0x0

    :goto_1
    if-ge v3, v2, :cond_2

    aget-object v4, v0, v3

    .line 2571
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    .line 2572
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "&orienation="

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    .line 2573
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v6

    iget-object v7, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v8

    const/4 v10, 0x0

    const/4 v11, 0x0

    invoke-static/range {v6 .. v11}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :catch_0
    move-exception v0

    .line 2578
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method static synthetic G(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h()V

    return-void
.end method

.method private H()Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;
    .locals 3

    const-string v0, "MBMediaView"

    .line 2744
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getEndCardWebview hadStarLoad:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ag:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, "-endCardWebview:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2745
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    if-eqz v1, :cond_0

    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ag:Z

    if-eqz v1, :cond_0

    .line 2746
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    return-object v0

    .line 2748
    :cond_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ag:Z

    if-nez v1, :cond_1

    const/4 v1, 0x1

    .line 2749
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 2752
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method static synthetic H(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->f()V

    return-void
.end method

.method static synthetic I(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->g()V

    return-void
.end method

.method static synthetic J(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/os/Handler;
    .locals 0

    .line 116
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->M:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic K(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->D()V

    return-void
.end method

.method static synthetic L(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 20593
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->m()V

    return-void
.end method

.method static synthetic M(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e()V

    return-void
.end method

.method static synthetic N(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 8

    .line 21394
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 21395
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 21396
    iget-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->b:Z

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/l;->f()[Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 21397
    iput-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->b:Z

    .line 21398
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v4

    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/l;->f()[Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    :cond_0
    return-void
.end method

.method static synthetic O(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 8

    .line 21404
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 21405
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 21406
    iget-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->c:Z

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/l;->g()[Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 21407
    iput-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->c:Z

    .line 21408
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v4

    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/l;->g()[Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    :cond_0
    return-void
.end method

.method static synthetic P(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 8

    .line 21414
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 21415
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 21416
    iget-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->e:Z

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/l;->i()[Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 21417
    iput-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->e:Z

    .line 21418
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v4

    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/l;->i()[Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    :cond_0
    return-void
.end method

.method static synthetic Q(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 8

    .line 21424
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 21425
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 21426
    iget-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->f:Z

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/l;->j()[Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 21427
    iput-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->f:Z

    .line 21428
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v4

    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/l;->j()[Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    :cond_0
    return-void
.end method

.method static synthetic R(Lcom/mbridge/msdk/nativex/view/MBMediaView;)I
    .locals 0

    .line 116
    iget p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aj:I

    return p0
.end method

.method static synthetic S(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 2

    const-string v0, "MBMediaView"

    .line 22341
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 22342
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isPlaying()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "isPlaying pasue======"

    .line 22343
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 23054
    :try_start_1
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v1, :cond_0

    .line 23055
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->pause()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 23058
    :try_start_2
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catchall_1
    move-exception p0

    .line 22348
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic T(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 1

    .line 23319
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-nez v0, :cond_0

    goto :goto_0

    .line 23322
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_0

    .line 23325
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isPlaying()Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    .line 23328
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isComplete()Z

    move-result v0

    if-eqz v0, :cond_3

    goto :goto_0

    .line 23331
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 23332
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->startOrPlayVideo()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 23335
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "MBMediaView"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MBMediaView;I)I
    .locals 0

    .line 116
    iput p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->S:I

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/nativex/view/MBMediaView$a;)Lcom/mbridge/msdk/nativex/view/MBMediaView$a;
    .locals 0

    .line 116
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    return-object p1
.end method

.method private a(Z)Lcom/mbridge/msdk/nativex/view/MBMediaView$a;
    .locals 4

    const-string v0, "MBMediaView"

    const/4 v1, 0x0

    .line 1156
    :try_start_0
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_8

    .line 1157
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "initCurDisplayMode appname:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1159
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 1160
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 1161
    sget-object v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    const-string p1, "\u6ca1\u6709\u89c6\u9891 \u53ea\u6709\u5927\u56fe \u663e\u793a\u5927\u56fe"

    .line 1162
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1165
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGifUrl()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_8

    const-string p1, "\u6ca1\u6709\u89c6\u9891 \u6709gif\u56fe \u663e\u793agif\u56fe"

    .line 1166
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1167
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "\u6ca1\u6709\u89c6\u9891 \u6ca1\u6709\u5927\u56fe \u6709gif\u56fe \u663e\u793agif\u56fe"

    .line 1168
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1169
    sget-object p1, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->c:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    move-object v1, p1

    .line 1171
    :cond_1
    new-instance p1, Lcom/mbridge/msdk/nativex/view/MBMediaView$g;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$g;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 1172
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->A:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    invoke-virtual {v2, p1}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 1173
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->o()V

    goto/16 :goto_1

    .line 1176
    :cond_2
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0xe

    if-lt v2, v3, :cond_6

    iget-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->g:Z

    if-eqz v2, :cond_6

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v2, :cond_6

    .line 1177
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 1178
    sget-object v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    const-string p1, "\u53ea\u6709\u89c6\u9891 \u6ca1\u6709\u5927\u56fe \u663e\u793a\u89c6\u9891"

    .line 1179
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 1180
    :cond_3
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_8

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_8

    const-string v1, "\u6709\u89c6\u9891 \u53c8\u6709\u5927\u56fe \u8fdb\u5165\u5224\u65ad\u903b\u8f91"

    .line 1182
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1183
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t()I

    move-result v1

    .line 1184
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "readyRate:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1185
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-static {v2, v1}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;I)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 1187
    sget-object p1, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    const-string v1, "\u6ee1\u8db3readyrate \u663e\u793a\u89c6\u9891"

    .line 1188
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    move-object v1, p1

    goto :goto_1

    .line 1190
    :cond_4
    sget-object v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    const-string v2, "\u6ca1\u6709\u6ee1\u8db3readyrate \u6682\u65f6\u663e\u793a\u5927\u56fe \u5224\u65ad\u662f\u5426\u76d1\u542c\u4e0b\u8f7d"

    .line 1191
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_8

    .line 1193
    iget-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a:Z

    if-eqz p1, :cond_5

    const-string p1, "\u53ef\u4ee5\u76d1\u542c\u4e0b\u8f7d \u4e0b\u8f7d\u6ee1\u8db3readyrate\u4e4b\u540e \u663e\u793a\u5927\u56fe"

    .line 1194
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1195
    new-instance p1, Lcom/mbridge/msdk/nativex/view/MBMediaView$f;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$f;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 1196
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v2, p1}, Lcom/mbridge/msdk/videocommon/download/a;->b(Lcom/mbridge/msdk/videocommon/listener/a;)V

    goto :goto_1

    :cond_5
    const-string p1, "\u5f00\u53d1\u8005\u7981\u6b62\u76d1\u542c\u4e0b\u8f7d \u4e00\u76f4\u663e\u793a\u5927\u56fe"

    .line 1198
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 1204
    :cond_6
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u7248\u672c\u5c0f\u4e8e4.0\u6216\u8005\u6ca1\u6709\u5f00\u542f\u786c\u4ef6\u52a0\u901f \u663e\u793a\u5927\u56fe isHard:"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->g:Z

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " downloadtask:"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v1, :cond_7

    const/4 v1, 0x1

    goto :goto_0

    :cond_7
    const/4 v1, 0x0

    :goto_0
    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1205
    sget-object v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_8
    :goto_1
    return-object v1

    :catchall_0
    move-exception p1

    .line 1212
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "\u9ed8\u8ba4\u663e\u793a\u5927\u56fe"

    .line 1214
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1215
    sget-object p1, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    return-object p1
.end method

.method private a(I)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 3348
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 3349
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 3350
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 3351
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 3352
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v1, 0x2

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p1

    goto :goto_0

    :catchall_0
    const-string p1, "MBMediaView"

    const-string v1, "code to string is error"

    .line 3356
    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/String;"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 3365
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 3366
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCamplistToJson(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object p1

    .line 3367
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "campaignList"

    .line 3368
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "unit_id"

    .line 3369
    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "sdk_info"

    .line 3370
    invoke-virtual {v1, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 3372
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3375
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MBMediaView"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private a()V
    .locals 2

    .line 267
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 268
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/download/a;->b(Lcom/mbridge/msdk/videocommon/listener/a;)V

    :cond_0
    return-void
.end method

.method private a(II)V
    .locals 13

    .line 2504
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_3

    .line 2505
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 2506
    iget-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->i:Z

    if-nez v1, :cond_3

    if-eqz p2, :cond_3

    .line 2507
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/l;->e()Ljava/util/List;

    move-result-object v1

    const/4 v2, 0x1

    add-int/2addr p1, v2

    mul-int/lit8 p1, p1, 0x64

    .line 2508
    div-int/2addr p1, p2

    if-eqz v1, :cond_3

    const/4 p2, 0x0

    move v3, p2

    .line 2510
    :goto_0
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_2

    .line 2511
    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map;

    if-eqz v4, :cond_1

    .line 2512
    invoke-interface {v4}, Ljava/util/Map;->size()I

    move-result v5

    if-lez v5, :cond_1

    .line 2513
    invoke-interface {v4}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v4

    .line 2514
    :cond_0
    :goto_1
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_1

    .line 2515
    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/Map$Entry;

    .line 2516
    invoke-interface {v5}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    .line 2517
    invoke-interface {v5}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    if-gt v6, p1, :cond_0

    .line 2518
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_0

    new-array v10, v2, [Ljava/lang/String;

    aput-object v5, v10, p2

    const/4 v11, 0x0

    const/4 v12, 0x1

    .line 2522
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v7

    iget-object v8, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v9

    invoke-static/range {v7 .. v12}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    .line 2523
    invoke-interface {v4}, Ljava/util/Iterator;->remove()V

    .line 2524
    invoke-interface {v1, v3}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    add-int/lit8 v3, v3, -0x1

    goto :goto_1

    :cond_1
    add-int/2addr v3, v2

    goto :goto_0

    .line 2530
    :cond_2
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result p1

    if-gtz p1, :cond_3

    .line 2531
    iput-boolean v2, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->i:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    const-string p1, "MBMediaView"

    const-string p2, "reportPlayPercentageData error"

    .line 2537
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_2
    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 1

    .line 247
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c()V

    .line 248
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b()V

    .line 249
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->al:Landroid/content/Context;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 251
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBMediaView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private a(Landroid/view/View;FF)V
    .locals 16

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    move/from16 v2, p2

    move/from16 v3, p3

    const-string v4, "MBMediaView"

    if-nez v0, :cond_0

    :try_start_0
    const-string v0, "setPlayViewParamsByVidoWH view is null"

    .line 2225
    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 2228
    :cond_0
    iget-wide v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->Q:D

    const-wide/16 v7, 0x0

    cmpg-double v5, v5, v7

    if-lez v5, :cond_9

    iget-wide v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->R:D

    cmpg-double v5, v5, v7

    if-gtz v5, :cond_1

    goto/16 :goto_4

    .line 2232
    :cond_1
    iget-wide v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->Q:D

    iget-wide v9, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->R:D

    div-double/2addr v5, v9

    const/4 v9, 0x0

    cmpl-float v10, v2, v9

    if-lez v10, :cond_2

    cmpl-float v9, v3, v9

    if-lez v9, :cond_2

    div-float v7, v2, v3

    float-to-double v7, v7

    .line 2237
    :cond_2
    invoke-static {v5, v6}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v9

    invoke-static {v9}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/Double;)D

    move-result-wide v9

    .line 2238
    invoke-static {v7, v8}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/Double;)D

    move-result-wide v7

    .line 2239
    iget-object v11, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x:Landroid/widget/RelativeLayout;

    invoke-virtual {v11}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v11

    check-cast v11, Landroid/widget/RelativeLayout$LayoutParams;

    .line 2240
    invoke-virtual/range {p1 .. p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v12

    check-cast v12, Landroid/widget/RelativeLayout$LayoutParams;

    .line 2241
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v13

    invoke-direct {v1, v13}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c(Landroid/content/Context;)Z

    move-result v13

    if-eqz v13, :cond_3

    iget-boolean v13, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v13, :cond_3

    const/4 v13, 0x1

    goto :goto_0

    :cond_3
    const/4 v13, 0x0

    :goto_0
    cmpl-double v14, v9, v7

    const-string v15, " * mDevHeight *****"

    const/4 v0, -0x1

    if-lez v14, :cond_5

    float-to-double v2, v2

    .line 2243
    :try_start_1
    iget-wide v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->R:D

    mul-double/2addr v2, v5

    iget-wide v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->Q:D

    div-double/2addr v2, v5

    .line 2244
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, " setPlayView \u5bbd\u94fa\u6ee1 playerViewHeight:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v6, " onMeasure mDevWidth "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2245
    iput v0, v12, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    if-eqz v13, :cond_4

    goto :goto_1

    :cond_4
    double-to-int v0, v2

    .line 2246
    :goto_1
    iput v0, v12, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    const/16 v0, 0xd

    .line 2247
    invoke-virtual {v12, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 2249
    iget v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    iput v5, v11, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    double-to-int v2, v2

    .line 2250
    iput v2, v11, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 2251
    invoke-virtual {v11, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    goto :goto_3

    :cond_5
    cmpg-double v2, v9, v7

    if-gez v2, :cond_7

    float-to-double v2, v3

    mul-double/2addr v2, v5

    if-eqz v13, :cond_6

    move v5, v0

    goto :goto_2

    :cond_6
    double-to-int v5, v2

    .line 2256
    :goto_2
    iput v5, v12, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 2257
    iput v0, v12, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    const/16 v0, 0xd

    .line 2258
    invoke-virtual {v12, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    double-to-int v5, v2

    .line 2260
    iput v5, v11, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 2261
    iget v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    iput v5, v11, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 2262
    invoke-virtual {v11, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 2264
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "setPlayView \u9ad8\u94fa\u6ee1 playerViewWidth:"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v2, " mDevWidth "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 2267
    :cond_7
    iput v0, v12, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 2268
    iput v0, v12, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 2270
    iget v0, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    iput v0, v11, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 2271
    iget v0, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    iput v0, v11, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    const/16 v0, 0xd

    .line 2272
    invoke-virtual {v11, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 2273
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "setPlayView \u94fa\u6ee1\u7236\u5e03\u5c40  videoWHDivide_final\uff1a"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v9, v10}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v2, "  screenWHDivide_final\uff1a"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7, v8}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2275
    :goto_3
    iget-boolean v0, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    if-nez v0, :cond_8

    .line 2276
    iget-object v0, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v11}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_8
    move-object/from16 v0, p1

    .line 2278
    invoke-virtual {v0, v12}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_5

    .line 2229
    :cond_9
    :goto_4
    invoke-direct/range {p0 .. p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Landroid/view/View;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 2280
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_5
    return-void
.end method

.method private a(Lcom/mbridge/msdk/click/b;)V
    .locals 1

    .line 1027
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->j()V

    .line 1028
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 1031
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F()V

    .line 1033
    new-instance v0, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    .line 1096
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :cond_1
    :goto_0
    return-void

    :catch_0
    move-exception p1

    .line 1098
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBMediaView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->r()V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Landroid/content/Context;)V
    .locals 0

    .line 116
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/click/b;)V
    .locals 0

    .line 116
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Lcom/mbridge/msdk/click/b;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    .line 16791
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    if-eqz v0, :cond_0

    .line 16792
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/out/OnMBMediaViewListener;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 16794
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    if-eqz v0, :cond_1

    .line 16795
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    invoke-interface {p0, p1, p2}, Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 16798
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "MBMediaView"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Ljava/lang/String;)V
    .locals 8

    .line 19573
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object v0

    const/4 v1, 0x0

    .line 19575
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 19576
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v4

    .line 19577
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/p;

    const-string v3, "2000021"

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 19578
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v4}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v7

    move-object v2, v1

    move-object v6, p1

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 19580
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 19581
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v4

    .line 19582
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/p;

    const-string v3, "2000021"

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 19583
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v4}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v7

    move-object v2, v1

    move-object v6, p1

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    if-eqz v1, :cond_2

    .line 19587
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 19588
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->e(Ljava/lang/String;)V

    .line 19589
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 19590
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 19591
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 19592
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 19593
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/entity/p;)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 19596
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "MBMediaView"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

.method private a(Landroid/view/View;)Z
    .locals 9

    const/4 v0, 0x0

    if-eqz p1, :cond_5

    .line 1416
    :try_start_0
    invoke-virtual {p1}, Landroid/view/View;->getVisibility()I

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 1419
    :cond_0
    new-instance v1, Landroid/graphics/Rect;

    invoke-direct {v1}, Landroid/graphics/Rect;-><init>()V

    .line 1420
    invoke-virtual {p1, v1}, Landroid/view/View;->getLocalVisibleRect(Landroid/graphics/Rect;)Z

    move-result v2

    if-nez v2, :cond_1

    return v0

    .line 1423
    :cond_1
    invoke-virtual {v1}, Landroid/graphics/Rect;->height()I

    move-result v2

    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v1

    mul-int/2addr v2, v1

    int-to-long v1, v2

    .line 1424
    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result v3

    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result p1

    mul-int/2addr v3, p1

    int-to-long v3, v3

    long-to-float p1, v3

    const/high16 v5, 0x3f000000    # 0.5f

    mul-float/2addr p1, v5

    float-to-long v5, p1

    const-wide/16 v7, 0x0

    cmp-long p1, v3, v7

    if-gtz p1, :cond_2

    return v0

    .line 1429
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->l(Landroid/content/Context;)Z

    move-result p1

    if-nez p1, :cond_3

    return v0

    .line 1432
    :cond_3
    iget-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e:Z

    if-nez p1, :cond_4

    return v0

    :cond_4
    cmp-long p1, v1, v5

    if-ltz p1, :cond_5

    .line 1436
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->isShown()Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_5

    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    .line 1441
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v1, "MBMediaView"

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_0
    return v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Landroid/view/View;)Z
    .locals 0

    .line 116
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Landroid/view/View;)Z

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Z)Z
    .locals 0

    .line 116
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->r:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/nativex/view/MBMediaView;I)I
    .locals 0

    .line 116
    iput p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->T:I

    return p1
.end method

.method private b()V
    .locals 5

    const-string v0, "MBMediaView"

    const-string v1, "initView"

    .line 285
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 286
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "mbridge_nativex_mbmediaview"

    const-string v3, "layout"

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/4 v2, -0x1

    if-ne v1, v2, :cond_0

    const-string v1, "can not find mediaview resource"

    .line 288
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 291
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    .line 292
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "id"

    const-string v4, "mbridge_rl_mediaview_root"

    invoke-static {v1, v4, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->y:Landroid/widget/RelativeLayout;

    .line 293
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "mbridge_ll_playerview_container"

    invoke-static {v1, v4, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x:Landroid/widget/RelativeLayout;

    .line 294
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "mbridge_my_big_img"

    invoke-static {v1, v4, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/videocommon/view/MyImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    .line 295
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "mbridge_native_pb"

    invoke-static {v1, v4, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ProgressBar;

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->D:Landroid/widget/ProgressBar;

    .line 296
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "mbridge_nativex_webview_layout"

    invoke-static {v1, v4, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z:Landroid/widget/RelativeLayout;

    .line 297
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "mbridge_nativex_webview_layout_webview"

    invoke-static {v1, v4, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->A:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    .line 298
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->y:Landroid/widget/RelativeLayout;

    const/4 v3, 0x1

    invoke-virtual {v1, v3}, Landroid/widget/RelativeLayout;->setClickable(Z)V

    .line 299
    invoke-virtual {p0, v0, v2, v2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->addView(Landroid/view/View;II)V

    return-void
.end method

.method private b(Landroid/content/Context;)V
    .locals 8

    .line 991
    new-instance v0, Lcom/mbridge/msdk/click/b;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 993
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 994
    new-instance v7, Lcom/mbridge/msdk/nativex/view/MBMediaView$15;

    invoke-direct {v7, p0, v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$15;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/click/b;)V

    .line 1009
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v1}, Lcom/mbridge/msdk/click/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1010
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 1011
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v2

    const-string v3, ""

    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p()Ljava/lang/String;

    move-result-object v6

    move-object v5, p1

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    goto :goto_0

    .line 1013
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F()V

    .line 1014
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->j()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_0
    return-void

    :catchall_0
    move-exception p1

    .line 1020
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v1, "MBMediaView"

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1022
    :cond_1
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Lcom/mbridge/msdk/click/b;)V

    return-void
.end method

.method private b(Landroid/view/View;)V
    .locals 4

    const-string v0, "MBMediaView"

    if-nez p1, :cond_0

    :try_start_0
    const-string p1, "setPlayViewParamsDefault view is null"

    .line 2287
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 2290
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x1

    .line 2291
    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 2292
    iget-boolean v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    if-eqz v3, :cond_1

    .line 2293
    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    goto :goto_0

    .line 2295
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B()F

    move-result v2

    float-to-int v2, v2

    mul-int/lit8 v2, v2, 0x9

    .line 2296
    div-int/lit8 v2, v2, 0x10

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    const/16 v2, 0xd

    .line 2297
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 2299
    :goto_0
    invoke-virtual {p1, v1}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 2301
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 8

    .line 10446
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 10447
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/a;->a(Landroid/content/Context;)V

    .line 10448
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbnative/d/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbnative/c/a;)V

    .line 10450
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    .line 10451
    iget-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->a:Z

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v1, v2, :cond_2

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    const/4 v1, 0x1

    .line 10452
    iput-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->a:Z

    .line 10453
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v0

    const-string v1, "is_video=1"

    .line 10454
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 10455
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v2, "?"

    .line 10456
    invoke-virtual {v0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "&is_video=1"

    .line 10457
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    const-string v0, "?is_video=1"

    .line 10459
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 10461
    :goto_0
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :cond_1
    move-object v4, v0

    .line 10463
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "change impressionurl:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v5, 0x0

    const/4 v6, 0x1

    .line 10466
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v3

    sget v7, Lcom/mbridge/msdk/click/a/a;->g:I

    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V

    :cond_2
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    .line 17817
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    if-eqz v0, :cond_0

    .line 17818
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/out/OnMBMediaViewListener;->onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 17820
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    if-eqz v0, :cond_1

    .line 17821
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    invoke-interface {p0, p1, p2}, Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;->onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 17824
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "MBMediaView"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private b(Z)V
    .locals 9

    const-string p1, "MBMediaView"

    .line 2759
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNvT2()I

    move-result v0

    .line 2760
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    if-nez v1, :cond_0

    .line 2761
    new-instance v1, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    .line 2762
    invoke-virtual {v1, p0}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->setObject(Ljava/lang/Object;)V

    .line 2763
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    new-instance v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$7;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$7;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->setBackListener(Lcom/mbridge/msdk/nativex/listener/b;)V

    .line 2769
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    new-instance v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$8;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$8;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    :cond_0
    const/4 v1, 0x3

    const/4 v2, 0x1

    if-ne v0, v1, :cond_2

    .line 2785
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v4

    .line 2786
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 2787
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    const-string v0, ".zip"

    .line 2788
    invoke-virtual {v4, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "md5filename"

    invoke-virtual {v4, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 2789
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v0

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2790
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 2791
    iput-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ag:Z

    .line 2792
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->loadUrl(Ljava/lang/String;)V

    goto :goto_0

    .line 2795
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;

    move-result-object v0

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getHtmlContentFromUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 2796
    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    const-string v0, "load html..."

    .line 2797
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2798
    iput-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ag:Z

    .line 2799
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    const-string v6, "text/html"

    const-string v7, "UTF-8"

    const/4 v8, 0x0

    invoke-virtual/range {v3 .. v8}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    const/4 v1, 0x4

    if-ne v0, v1, :cond_3

    .line 2806
    iput-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ag:Z

    .line 2807
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_3

    .line 2808
    new-instance v0, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 2809
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;->setTitle(Ljava/lang/String;)V

    .line 2810
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 2811
    new-instance v0, Lcom/mbridge/msdk/nativex/view/MBMediaView$d;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView$d;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView$1;)V

    .line 2812
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->setFilter(Lcom/mbridge/msdk/mbjscommon/base/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2818
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/nativex/view/MBMediaView;Z)Z
    .locals 0

    .line 116
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    return p1
.end method

.method private c()V
    .locals 1

    .line 303
    new-instance v0, Lcom/mbridge/msdk/nativex/view/MBMediaView$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$1;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->M:Landroid/os/Handler;

    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    .line 18804
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    if-eqz v0, :cond_0

    .line 18805
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/out/OnMBMediaViewListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 18807
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    if-eqz v0, :cond_1

    .line 18808
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    invoke-interface {p0, p1, p2}, Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 18811
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "MBMediaView"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private c(Landroid/content/Context;)Z
    .locals 1

    .line 2217
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p1

    iget p1, p1, Landroid/content/res/Configuration;->screenLayout:I

    and-int/lit8 p1, p1, 0xf

    const/4 v0, 0x3

    if-lt p1, v0, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z
    .locals 0

    .line 116
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    return p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/nativex/view/MBMediaView;Z)Z
    .locals 0

    .line 116
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->j:Z

    return p1
.end method

.method private d()V
    .locals 5

    const-string v0, "omsdk"

    const-string v1, "MBMediaView"

    const/4 v2, 0x1

    .line 555
    :try_start_0
    invoke-direct {p0, v2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Z)Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    move-result-object v3

    iput-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    .line 556
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "setDisplay mCurDisplayMode:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 558
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->changeNoticeURL()V

    .line 559
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v4, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v3, v4, :cond_2

    .line 560
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v3, :cond_1

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v3, :cond_1

    .line 562
    :try_start_1
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    invoke-virtual {v3, v4}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->registerAdView(Landroid/view/View;)V

    .line 563
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-static {v3}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->createAdEvents(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    move-result-object v3

    iput-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    .line 564
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-virtual {v3}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->start()V

    .line 565
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    if-eqz v3, :cond_0

    .line 566
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    invoke-virtual {v3}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->impressionOccurred()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v3

    .line 569
    :try_start_2
    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    const-string v3, "native adSession start, impressionOccurred"

    .line 571
    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 573
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->k()V

    .line 574
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->n()V

    goto :goto_1

    .line 575
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v3, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v0, v3, :cond_3

    .line 576
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e()V

    goto :goto_1

    .line 577
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v3, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->c:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v0, v3, :cond_4

    .line 578
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->o()V

    .line 6593
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->m()V

    .line 581
    :cond_4
    :goto_1
    iput-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->q:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    .line 583
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_2
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 8

    .line 11434
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 11435
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 11436
    iget-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->g:Z

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/l;->o()[Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 11437
    iput-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->g:Z

    const/4 v6, 0x0

    const/4 v7, 0x0

    .line 11440
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v4

    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/l;->o()[Ljava/lang/String;

    move-result-object v5

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    :cond_0
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/nativex/view/MBMediaView;Z)Z
    .locals 0

    .line 116
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->af:Z

    return p1
.end method

.method static synthetic e(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;
    .locals 0

    .line 116
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    return-object p0
.end method

.method private e()V
    .locals 0

    .line 588
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->A()V

    .line 589
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->l()V

    return-void
.end method

.method private f()V
    .locals 4

    const-string v0, "MBMediaView"

    .line 669
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v1, v2, :cond_0

    .line 670
    iget v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    if-eqz v1, :cond_0

    iget v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->T:I

    if-eqz v1, :cond_0

    iget v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->S:I

    if-eqz v1, :cond_0

    .line 671
    iget v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    iget v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->T:I

    mul-int/2addr v1, v2

    iget v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->S:I

    div-int/2addr v1, v2

    .line 672
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    if-eqz v2, :cond_0

    if-eqz v1, :cond_0

    .line 673
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    .line 674
    iget v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    iput v3, v2, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 675
    iput v1, v2, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 676
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 677
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "initBitImageViewWHByDevWh onMeasure mdevWidth:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " mDevHeight:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " finalHeigt:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 683
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z
    .locals 0

    .line 116
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->d:Z

    return p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/view/View;
    .locals 0

    .line 116
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    return-object p0
.end method

.method private g()V
    .locals 7

    const-string v0, "MBMediaView"

    .line 689
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->c:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v1, v2, :cond_1

    .line 690
    iget v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v2, " mDevHeight:"

    const-string v3, "initGifImageViewWHByDevWh onMeasure mdevWidth:"

    const/16 v4, 0xd

    if-eqz v1, :cond_0

    :try_start_1
    iget v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->T:I

    if-eqz v1, :cond_0

    iget v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->S:I

    if-eqz v1, :cond_0

    .line 691
    iget v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    iget v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->T:I

    mul-int/2addr v1, v5

    iget v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->S:I

    div-int/2addr v1, v5

    .line 692
    iget-object v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z:Landroid/widget/RelativeLayout;

    if-eqz v5, :cond_1

    if-eqz v1, :cond_1

    .line 693
    iget-object v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z:Landroid/widget/RelativeLayout;

    invoke-virtual {v5}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v5

    check-cast v5, Landroid/widget/RelativeLayout$LayoutParams;

    .line 694
    iget v6, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    iput v6, v5, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 695
    iput v1, v5, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 696
    invoke-virtual {v5, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 697
    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z:Landroid/widget/RelativeLayout;

    invoke-virtual {v4, v5}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 698
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " finalHeigt:"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 699
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 698
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 701
    :cond_0
    iget v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    if-eqz v1, :cond_1

    .line 702
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z:Landroid/widget/RelativeLayout;

    if-eqz v1, :cond_1

    .line 703
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z:Landroid/widget/RelativeLayout;

    invoke-virtual {v1}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 704
    iget v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 706
    iget v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    mul-int/lit16 v5, v5, 0x273

    div-int/lit16 v5, v5, 0x4b0

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 707
    invoke-virtual {v1, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 708
    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z:Landroid/widget/RelativeLayout;

    invoke-virtual {v4, v1}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 709
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 710
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 709
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 715
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private h()V
    .locals 5

    .line 721
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v0, v1, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_2

    .line 722
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B()F

    move-result v0

    float-to-int v0, v0

    .line 723
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->j(Landroid/content/Context;)I

    move-result v1

    .line 724
    iget-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    const/16 v3, 0xd

    if-nez v2, :cond_0

    .line 725
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x:Landroid/widget/RelativeLayout;

    invoke-virtual {v2}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    .line 726
    iget v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    iput v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 727
    iget v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    iput v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 728
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 729
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x:Landroid/widget/RelativeLayout;

    invoke-virtual {v3, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 731
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->G:Landroid/widget/RelativeLayout;

    invoke-virtual {v2}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    .line 732
    iput v0, v2, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 733
    iput v1, v2, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 734
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 735
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->G:Landroid/widget/RelativeLayout;

    invoke-virtual {v3, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 738
    :goto_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->r()V

    .line 740
    iget-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    if-nez v2, :cond_1

    .line 741
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    iget v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    int-to-float v1, v1

    iget v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    int-to-float v2, v2

    invoke-direct {p0, v0, v1, v2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Landroid/view/View;FF)V

    goto :goto_1

    .line 743
    :cond_1
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    int-to-float v0, v0

    int-to-float v1, v1

    invoke-direct {p0, v2, v0, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Landroid/view/View;FF)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 747
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

.method static synthetic h(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 11

    const-string v0, "MBMediaView"

    .line 11685
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_11

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v1

    instance-of v1, v1, Landroid/view/ViewGroup;

    if-nez v1, :cond_0

    goto/16 :goto_9

    .line 11689
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->handleViewStyleResult(Landroid/content/Context;)Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;

    move-result-object v1

    if-nez v1, :cond_1

    goto/16 :goto_a

    .line 11693
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {p0, v2, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getFullScreenViewByStyle(Landroid/content/Context;Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;)Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    if-nez v1, :cond_2

    const-string p0, "mFullScreenViewUI is null"

    .line 11695
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_a

    .line 11699
    :cond_2
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->y()Z

    move-result v1

    if-nez v1, :cond_3

    const-string p0, "fullViewFailed return"

    .line 11701
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_a

    .line 11704
    :cond_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/mbfullview/a;->a(Landroid/content/Context;)Lcom/mbridge/msdk/nativex/view/mbfullview/a;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    iget-object v2, v2, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;->style:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    invoke-virtual {v1, v2, v3, v4}, Lcom/mbridge/msdk/nativex/view/mbfullview/a;->a(Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;)V

    const/4 v1, 0x1

    .line 11705
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    const/4 v2, 0x0

    .line 11706
    iput-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->r:Z

    .line 11707
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v3, :cond_4

    .line 11708
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->setEnterFullScreen()V

    .line 11709
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->setIsActivePause(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    .line 12753
    :cond_4
    :try_start_1
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    if-eqz v3, :cond_5

    .line 12754
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    invoke-interface {v3}, Lcom/mbridge/msdk/out/OnMBMediaViewListener;->onEnterFullscreen()V

    .line 12756
    :cond_5
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    if-eqz v3, :cond_6

    .line 12757
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    invoke-interface {v3}, Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;->onEnterFullscreen()V

    .line 12759
    :cond_6
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v3, :cond_7

    .line 12760
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    sget-object v4, Lcom/iab/omid/library/mmadbridge/adsession/media/PlayerState;->FULLSCREEN:Lcom/iab/omid/library/mmadbridge/adsession/media/PlayerState;

    invoke-virtual {v3, v4}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->playerStateChange(Lcom/iab/omid/library/mmadbridge/adsession/media/PlayerState;)V

    const-string v3, "omsdk"

    const-string v4, "NV playerStateChange, FULLSCREEN"

    .line 12761
    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v3

    .line 12764
    :try_start_2
    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 11712
    :cond_7
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v3

    const v4, 0x1020002

    invoke-virtual {v3, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/FrameLayout;

    .line 11713
    new-instance v4, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 11714
    iput-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    .line 11715
    invoke-virtual {v4, v1}, Landroid/view/View;->setClickable(Z)V

    .line 11716
    iget-object v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v5}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getParent()Landroid/view/ViewParent;

    move-result-object v5

    check-cast v5, Landroid/view/ViewGroup;

    .line 11718
    invoke-virtual {v5}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v6

    move v7, v2

    :goto_1
    if-ge v7, v6, :cond_9

    .line 11720
    invoke-virtual {v5, v7}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v8

    iget-object v9, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-ne v8, v9, :cond_8

    goto :goto_2

    :cond_8
    add-int/lit8 v7, v7, 0x1

    goto :goto_1

    .line 11723
    :cond_9
    :goto_2
    iput v7, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->L:I

    .line 11724
    new-instance v6, Landroid/widget/FrameLayout;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v6, v8}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    const/16 v8, 0x64

    .line 11725
    invoke-virtual {v6, v8}, Landroid/widget/FrameLayout;->setId(I)V

    .line 11726
    new-instance v8, Landroid/view/ViewGroup$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getWidth()I

    move-result v9

    .line 11727
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getHeight()I

    move-result v10

    invoke-direct {v8, v9, v10}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 11728
    invoke-virtual {v5, v6, v7, v8}, Landroid/view/ViewGroup;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 11729
    iget-object v6, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v5, v6}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 11730
    new-instance v5, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v6, -0x1

    invoke-direct {v5, v6, v6}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/16 v7, 0x65

    .line 11733
    invoke-virtual {v4, v7}, Landroid/widget/RelativeLayout;->setId(I)V

    .line 11734
    new-instance v7, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v7, v6, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 11737
    new-instance v7, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v7, v6, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 11738
    iget-object v8, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->K:Landroid/widget/RelativeLayout;

    iget-object v9, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v8, v9, v7}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 11739
    invoke-virtual {v3, v4, v5}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    const/high16 v5, -0x1000000

    .line 11741
    sget-object v7, Lcom/mbridge/msdk/nativex/view/MBMediaView$11;->a:[I

    iget-object v8, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    iget-object v8, v8, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;->style:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;

    invoke-virtual {v8}, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;->ordinal()I

    move-result v8

    aget v7, v7, v8

    const/4 v8, 0x2

    if-eq v7, v8, :cond_a

    goto :goto_3

    :cond_a
    move v5, v6

    .line 11750
    :goto_3
    iget v7, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->v:I

    if-eqz v7, :cond_b

    .line 11751
    iget v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->v:I

    invoke-virtual {v4, v5}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    goto :goto_4

    .line 11753
    :cond_b
    invoke-virtual {v4, v5}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    .line 11755
    :goto_4
    iget-object v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    const/16 v7, 0x67

    invoke-virtual {v5, v7}, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;->setId(I)V

    .line 11756
    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v5, v6, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    new-array v6, v8, [I

    .line 11758
    invoke-virtual {v3, v6}, Landroid/widget/FrameLayout;->getLocationInWindow([I)V

    .line 11759
    aget v3, v6, v1

    iput v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ae:I

    .line 11760
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "mFullViewStartY:"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ae:I

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 11761
    iget v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ae:I

    if-nez v3, :cond_d

    const-string v3, "addfullview \u589e\u52a0\u72b6\u6001\u680f\u9ad8\u5ea6 \u6c89\u6d78\u5f0f\u65f6contentview\u7684\u9ad8\u5ea6\u548c\u5c4f\u5e55\u9ad8\u5ea6\u4e00\u6837"

    .line 11762
    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 11764
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v6, 0x17

    if-lt v3, v6, :cond_c

    .line 11765
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootWindowInsets()Landroid/view/WindowInsets;

    move-result-object v3

    if-eqz v3, :cond_d

    .line 11767
    invoke-virtual {v3}, Landroid/view/WindowInsets;->getStableInsetTop()I

    move-result v3

    invoke-virtual {v5, v2, v3, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_5

    .line 11770
    :cond_c
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/ae;->e(Landroid/content/Context;)I

    move-result v3

    invoke-virtual {v5, v2, v3, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 11774
    :cond_d
    :goto_5
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    invoke-virtual {v4, v3, v5}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    .line 13137
    :try_start_3
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z()V

    .line 13138
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->G:Landroid/widget/RelativeLayout;

    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B()F

    move-result v4

    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C()F

    move-result v5

    invoke-direct {p0, v3, v4, v5}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Landroid/view/View;FF)V

    .line 13139
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/nativex/view/mbfullview/a;->a(Landroid/content/Context;)Lcom/mbridge/msdk/nativex/view/mbfullview/a;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    iget-boolean v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    invoke-virtual {v3, v4, v5}, Lcom/mbridge/msdk/nativex/view/mbfullview/a;->a(Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;Z)V

    .line 13140
    iget-boolean v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    if-eqz v3, :cond_e

    .line 13141
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E()V

    goto :goto_6

    .line 13143
    :cond_e
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->D()V

    .line 13145
    :goto_6
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->M:Landroid/os/Handler;

    new-instance v4, Lcom/mbridge/msdk/nativex/view/MBMediaView$6;

    invoke-direct {v4, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$6;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    const-wide/16 v5, 0xbb8

    invoke-virtual {v3, v4, v5, v6}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_7

    :catchall_0
    move-exception v3

    .line 13154
    :try_start_4
    invoke-virtual {v3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    .line 14064
    :goto_7
    :try_start_5
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    invoke-virtual {v3, v1}, Landroid/view/View;->setFocusableInTouchMode(Z)V

    .line 14065
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->requestFocus()Z

    .line 14066
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    new-instance v4, Lcom/mbridge/msdk/nativex/view/MBMediaView$2;

    invoke-direct {v4, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$2;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {v3, v4}, Landroid/view/View;->setOnKeyListener(Landroid/view/View$OnKeyListener;)V

    .line 14080
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    new-instance v4, Lcom/mbridge/msdk/nativex/view/MBMediaView$3;

    invoke-direct {v4, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$3;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {v3, v4}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 14086
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->H:Landroid/widget/RelativeLayout;

    new-instance v4, Lcom/mbridge/msdk/nativex/view/MBMediaView$4;

    invoke-direct {v4, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$4;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {v3, v4}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 14092
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->I:Landroid/widget/TextView;

    new-instance v4, Lcom/mbridge/msdk/nativex/view/MBMediaView$5;

    invoke-direct {v4, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$5;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    goto :goto_8

    :catch_1
    move-exception v3

    .line 14108
    :try_start_6
    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 11777
    :goto_8
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v3, :cond_f

    .line 11778
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->openSound()V

    .line 11780
    :cond_f
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    new-instance v4, Lcom/mbridge/msdk/nativex/view/MBMediaView$18;

    iget-object v5, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-direct {v4, p0, v5}, Lcom/mbridge/msdk/nativex/view/MBMediaView$18;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->setMediaViewPlayListener(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$a;)V

    .line 11819
    invoke-direct {p0, v2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Z)V

    .line 14552
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_10

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v2

    if-eqz v2, :cond_10

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v2

    iget-boolean v2, v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->k:Z

    if-nez v2, :cond_10

    .line 14553
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_10

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v2

    if-eqz v2, :cond_10

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/l;->d()[Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_10

    .line 14554
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v2

    iput-boolean v1, v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->k:Z

    .line 14555
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->G()V

    :cond_10
    const-string p0, "mediaview add to full screen"

    .line 11821
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_a

    :cond_11
    :goto_9
    const-string p0, "rootView is null"

    .line 11686
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_a

    :catch_2
    move-exception p0

    .line 11823
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_a
    return-void
.end method

.method private i()V
    .locals 2

    .line 771
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->l:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->showSoundIndicator(Z)V

    .line 772
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->k:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->showProgressView(Z)V

    .line 774
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    if-eqz v0, :cond_0

    .line 775
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    invoke-interface {v0}, Lcom/mbridge/msdk/out/OnMBMediaViewListener;->onExitFullscreen()V

    .line 777
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    if-eqz v0, :cond_1

    .line 778
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    invoke-interface {v0}, Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;->onExitFullscreen()V

    .line 780
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v0, :cond_2

    .line 781
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    sget-object v1, Lcom/iab/omid/library/mmadbridge/adsession/media/PlayerState;->NORMAL:Lcom/iab/omid/library/mmadbridge/adsession/media/PlayerState;

    invoke-virtual {v0, v1}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->playerStateChange(Lcom/iab/omid/library/mmadbridge/adsession/media/PlayerState;)V

    const-string v0, "omsdk"

    const-string v1, "NV playerStateChange, NORMAL"

    .line 782
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 785
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic i(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 2

    const-string v0, "MBMediaView"

    .line 15114
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-nez v1, :cond_0

    const-string p0, "playerview is null return"

    .line 15115
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 15118
    :cond_0
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->onClickPlayerView()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 15120
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic j(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/content/Context;
    .locals 0

    .line 116
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->al:Landroid/content/Context;

    return-object p0
.end method

.method private j()V
    .locals 2

    .line 830
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    if-eqz v0, :cond_0

    .line 831
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/out/OnMBMediaViewListener;->onVideoAdClicked(Lcom/mbridge/msdk/out/Campaign;)V

    .line 833
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    if-eqz v0, :cond_1

    .line 834
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;->onVideoAdClicked(Lcom/mbridge/msdk/out/Campaign;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 837
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic k(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;
    .locals 0

    .line 116
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    return-object p0
.end method

.method private k()V
    .locals 2

    .line 872
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/widget/ImageView;)V

    .line 873
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setVisibility(I)V

    .line 874
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x:Landroid/widget/RelativeLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 875
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 877
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic l(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/MBMediaView$a;
    .locals 0

    .line 116
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    return-object p0
.end method

.method private l()V
    .locals 2

    .line 883
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x:Landroid/widget/RelativeLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 884
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setVisibility(I)V

    .line 885
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 887
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic m(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/videocommon/view/MyImageView;
    .locals 0

    .line 116
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    return-object p0
.end method

.method private m()V
    .locals 2

    .line 893
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x:Landroid/widget/RelativeLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 894
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->C:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setVisibility(I)V

    .line 895
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z:Landroid/widget/RelativeLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 896
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->A:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 898
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private n()V
    .locals 4

    const-string v0, "MBMediaView"

    .line 907
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v1, :cond_0

    return-void

    .line 910
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v1

    .line 911
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    return-void

    .line 914
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    if-nez v2, :cond_2

    return-void

    :cond_2
    const-string v2, "fillBigimage startOrPlayVideo"

    .line 917
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 918
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v2

    new-instance v3, Lcom/mbridge/msdk/nativex/view/MBMediaView$13;

    invoke-direct {v3, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$13;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {v2, v1, v3}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 951
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic n(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 1

    .line 16104
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->D:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_0

    .line 16105
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->D:Landroid/widget/ProgressBar;

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Landroid/widget/ProgressBar;->setVisibility(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 16108
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "MBMediaView"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private o()V
    .locals 10

    const-string v0, "MBMediaView"

    .line 957
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v1, :cond_0

    return-void

    .line 960
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGifUrl()Ljava/lang/String;

    move-result-object v1

    .line 961
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    return-void

    .line 964
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    if-nez v2, :cond_2

    return-void

    :cond_2
    const-string v2, "fillGifimage"

    .line 967
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "<!DOCTYPE html><html lang=\"en\"><head>  <meta charset=\"UTF-8\">  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"><meta http-equiv=\"X-UA-Compatible\" content=\"ie=edge\">  <title>Document</title>  <style>  *{    margin: 0;    padding: 0;  }  html, body{    width: 100%;    height: 100%;  }  body{    background-image: url(\'gifUrl\');    background-position: center;    background-size: contain;    background-repeat: no-repeat;  }  </style></head><body></body></html>"

    const-string v3, "gifUrl"

    .line 970
    invoke-virtual {v2, v3, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v6

    .line 971
    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->A:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    const/4 v5, 0x0

    const-string v7, "text/html"

    const-string v8, "utf-8"

    const/4 v9, 0x0

    invoke-virtual/range {v4 .. v9}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 972
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->A:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->setInterceptTouch(Z)V

    .line 973
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z:Landroid/widget/RelativeLayout;

    new-instance v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$14;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$14;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 986
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic o(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 1

    .line 16124
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->J:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_0

    .line 16125
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->J:Landroid/widget/ProgressBar;

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Landroid/widget/ProgressBar;->setVisibility(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 16128
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "MBMediaView"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private p()Ljava/lang/String;
    .locals 2

    .line 1144
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1145
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 1148
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method static synthetic p(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 1

    .line 17114
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->D:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_0

    .line 17115
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->D:Landroid/widget/ProgressBar;

    const/16 v0, 0x8

    invoke-virtual {p0, v0}, Landroid/widget/ProgressBar;->setVisibility(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 17118
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "MBMediaView"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private q()V
    .locals 11

    const-string v0, "omsdk"

    const-string v1, "MBMediaView"

    .line 1230
    :try_start_0
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v2, :cond_0

    const-string v2, "campaign is null addPlayerView return"

    .line 1231
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const-string v2, "specSize addPlayerView"

    .line 1233
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1234
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1235
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    .line 1236
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v2, v3}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 1238
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->l()V

    .line 1239
    new-instance v2, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    .line 1241
    iget-boolean v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->k:Z

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->showProgressView(Z)V

    .line 1242
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    iget-boolean v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->l:Z

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->showSoundIndicator(Z)V

    .line 1243
    iget-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->f:Z

    if-eqz v2, :cond_2

    .line 1244
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->openSound()V

    goto :goto_0

    .line 1246
    :cond_2
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->closeSound()V

    .line 1249
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    iget-boolean v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b:Z

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->setAllowLoopPlay(Z)V

    .line 1250
    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s()Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->v()Z

    move-result v7

    iget-object v9, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p()Ljava/lang/String;

    move-result-object v10

    move-object v8, p0

    invoke-virtual/range {v4 .. v10}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->initPlayerViewData(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLcom/mbridge/msdk/playercommon/VideoPlayerStatusListener;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;)Z

    .line 1251
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    new-instance v3, Lcom/mbridge/msdk/nativex/view/MBMediaView$c;

    invoke-direct {v3, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$c;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->setOnMediaViewPlayerViewListener(Lcom/mbridge/msdk/nativex/listener/a;)V

    .line 1252
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x:Landroid/widget/RelativeLayout;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    const/4 v4, -0x1

    invoke-virtual {v2, v3, v4, v4}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;II)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 6598
    :try_start_1
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-nez v2, :cond_3

    const-string v2, "setPlayerViewListener playerview is null return"

    .line 6599
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 6602
    :cond_3
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    new-instance v3, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;

    invoke-direct {v3, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$12;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v2

    .line 6641
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1254
    :goto_1
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    if-eqz v2, :cond_6

    .line 1255
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v2, :cond_4

    .line 1256
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->registerView(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)V

    .line 1258
    :cond_4
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-static {v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->createAdEvents(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    .line 1259
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-static {v2}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->createMediaEvents(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    .line 1260
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-virtual {v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->start()V

    const/4 v2, 0x1

    .line 1261
    sget-object v3, Lcom/iab/omid/library/mmadbridge/adsession/media/Position;->STANDALONE:Lcom/iab/omid/library/mmadbridge/adsession/media/Position;

    invoke-static {v2, v3}, Lcom/iab/omid/library/mmadbridge/adsession/media/VastProperties;->createVastPropertiesForNonSkippableMedia(ZLcom/iab/omid/library/mmadbridge/adsession/media/Position;)Lcom/iab/omid/library/mmadbridge/adsession/media/VastProperties;

    move-result-object v2

    .line 1262
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    invoke-virtual {v3, v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->loaded(Lcom/iab/omid/library/mmadbridge/adsession/media/VastProperties;)V

    .line 1263
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->setVideoEvents(Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 1265
    :try_start_3
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    if-eqz v2, :cond_5

    .line 1266
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    invoke-virtual {v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->impressionOccurred()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_2

    :catch_0
    move-exception v2

    .line 1269
    :try_start_4
    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_2
    const-string v2, "NV adSession start, impressionOccurred"

    .line 1271
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    goto :goto_3

    :catchall_1
    move-exception v0

    .line 1274
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    :goto_3
    return-void
.end method

.method static synthetic q(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 1

    .line 17134
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->J:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_0

    .line 17135
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->J:Landroid/widget/ProgressBar;

    const/16 v0, 0x8

    invoke-virtual {p0, v0}, Landroid/widget/ProgressBar;->setVisibility(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 17138
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "MBMediaView"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private r()V
    .locals 6

    const-string v0, "MBMediaView"

    .line 1280
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getVisibility()I

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1283
    :cond_0
    invoke-direct {p0, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Landroid/view/View;)Z

    move-result v1

    if-eqz v1, :cond_2

    const/4 v1, 0x0

    .line 1286
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u()Lcom/mbridge/msdk/c/d;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1288
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/d;->d()I

    move-result v1

    .line 1290
    :cond_1
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->M:Landroid/os/Handler;

    invoke-virtual {v2}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v2

    const/4 v3, 0x3

    .line 1291
    iput v3, v2, Landroid/os/Message;->what:I

    .line 1292
    iput-object p0, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 1293
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->M:Landroid/os/Handler;

    mul-int/lit16 v1, v1, 0x3e8

    add-int/lit16 v1, v1, 0x12c

    int-to-long v4, v1

    invoke-virtual {v3, v2, v4, v5}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 1295
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v1, v2, :cond_5

    .line 1296
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-nez v1, :cond_3

    const-string v1, "setPlayerByVisibilityChange : player is null and addPlayerView"

    .line 1297
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1298
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->q()V

    goto :goto_0

    .line 1300
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getCampaign()Lcom/mbridge/msdk/out/Campaign;

    move-result-object v2

    if-eq v1, v2, :cond_5

    .line 1301
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->release()V

    .line 1302
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->q()V

    .line 1303
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 1304
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->invalidate()V

    .line 1306
    :cond_4
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->requestLayout()V

    const-string v1, "setPlayerByVisibilityChange : addplayerview andr requestLayout"

    .line 1307
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 1313
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_0
    return-void
.end method

.method static synthetic r(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 8

    .line 19542
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    iget-boolean v0, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->d:Z

    if-nez v0, :cond_0

    .line 19543
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->k()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 19544
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->d:Z

    .line 19545
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v4

    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/l;->k()[Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    :cond_0
    return-void
.end method

.method static synthetic s(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 116
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method private s()Ljava/lang/String;
    .locals 8

    const-string v0, "MBMediaView"

    const/4 v1, 0x0

    .line 1354
    :try_start_0
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v2, :cond_0

    return-object v1

    .line 1357
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getPlayUrl curDisplay:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1358
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v2, :cond_1

    .line 1359
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v2

    .line 1360
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "downloadState:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x5

    if-ne v2, v3, :cond_1

    .line 1362
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/download/a;->d()Ljava/lang/String;

    move-result-object v3

    .line 1363
    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v4

    if-eqz v4, :cond_1

    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/download/a;->e()J

    move-result-wide v4

    new-instance v6, Ljava/io/File;

    invoke-direct {v6, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/io/File;)J

    move-result-wide v6

    cmp-long v4, v4, v6

    if-nez v4, :cond_1

    .line 1364
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u672c\u5730\u5df2\u4e0b\u8f7d\u5b8c \u62ff\u672c\u5730\u64ad\u653e\u5730\u5740\uff1a"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " state\uff1a"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v3

    .line 1369
    :cond_1
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    .line 1370
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 1371
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u672c\u5730\u5c1a\u672a\u4e0b\u8f7d\u5b8c \u62ff\u7f51\u7edc\u5730\u5740\uff1a"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v2

    :catch_0
    move-exception v2

    .line 1375
    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-object v1
.end method

.method private t()I
    .locals 1

    .line 1448
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u()Lcom/mbridge/msdk/c/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1449
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u()Lcom/mbridge/msdk/c/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->f()I

    move-result v0

    goto :goto_0

    :cond_0
    const/16 v0, 0x64

    :goto_0
    return v0
.end method

.method static synthetic t(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->H()Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    move-result-object p0

    return-object p0
.end method

.method static synthetic u(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/view/View;
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w()Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method private u()Lcom/mbridge/msdk/c/d;
    .locals 4

    const/4 v0, 0x0

    .line 1464
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    .line 1467
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v1

    .line 1468
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    .line 1469
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_3

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    goto :goto_0

    .line 1472
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v3

    invoke-virtual {v3, v2, v1}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v2

    if-eqz v2, :cond_2

    return-object v2

    .line 1476
    :cond_2
    invoke-static {v1}, Lcom/mbridge/msdk/c/d;->d(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    return-object v0

    .line 1470
    :cond_3
    :goto_0
    invoke-static {v1}, Lcom/mbridge/msdk/c/d;->d(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_4
    :goto_1
    return-object v0

    :catch_0
    move-exception v1

    .line 1480
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MBMediaView"

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method private v()Z
    .locals 5

    const-string v0, "MBMediaView"

    const/4 v1, 0x0

    .line 1487
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u()Lcom/mbridge/msdk/c/d;

    move-result-object v2

    if-nez v2, :cond_0

    return v1

    .line 1491
    :cond_0
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/d;->j()I

    move-result v2

    .line 1492
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "========autoPlayType\uff1a"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x1

    if-ne v2, v3, :cond_2

    .line 1494
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v2, "========wifi\u4e0b\u81ea\u52a8\u64ad\u653e"

    .line 1495
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v3

    :cond_1
    const-string v2, "========wifi\u4e0b\u81ea\u52a8\u64ad\u653e \u4f46\u76ee\u524d\u4e0d\u662fwifi\u73af\u5883 \u73b0\u5728\u4e3a\u70b9\u51fb\u64ad\u653e"

    .line 1498
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    :cond_2
    const/4 v4, 0x2

    if-ne v2, v4, :cond_3

    const-string v2, "========\u70b9\u51fb\u64ad\u653e"

    .line 1502
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    :cond_3
    const/4 v4, 0x3

    if-ne v2, v4, :cond_4

    const-string v2, "========\u6709\u7f51\u81ea\u52a8\u64ad\u653e"

    .line 1505
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1506
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_6

    return v3

    .line 1510
    :cond_4
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_5

    const-string v2, "========else wifi\u4e0b\u81ea\u52a8\u64ad\u653e"

    .line 1511
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v3

    :cond_5
    const-string v2, "========else wifi\u4e0b\u81ea\u52a8\u64ad\u653e \u4f46\u76ee\u524d\u4e0d\u662fwifi\u73af\u5883 \u73b0\u5728\u4e3a\u70b9\u51fb\u64ad\u653e"

    .line 1514
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v1

    :catchall_0
    move-exception v2

    .line 1519
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    return v1
.end method

.method static synthetic v(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z
    .locals 0

    .line 116
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->af:Z

    return p0
.end method

.method private w()Landroid/view/View;
    .locals 5

    .line 1834
    :try_start_0
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ah:Landroid/widget/RelativeLayout;

    .line 1835
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1836
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ah:Landroid/widget/RelativeLayout;

    invoke-virtual {v2, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1838
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    .line 1839
    sget-object v2, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 1840
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41f00000    # 30.0f

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v0, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xb

    .line 1841
    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v2, 0xa

    .line 1842
    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1843
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41000000    # 8.0f

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 1844
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1845
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    invoke-virtual {v2, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1846
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "mbridge_nativex_close"

    const-string v4, "drawable"

    invoke-static {v2, v3, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setBackgroundResource(I)V

    .line 1847
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    new-instance v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$19;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$19;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1853
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1854
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1856
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ah:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 1857
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ah:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 1858
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ah:Landroid/widget/RelativeLayout;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 1860
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    return-object v0
.end method

.method static synthetic w(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;
    .locals 0

    .line 116
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    return-object p0
.end method

.method static synthetic x(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Ljava/lang/String;
    .locals 0

    .line 116
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private x()V
    .locals 12

    const-string v0, "mbridge_full_player_parent"

    const-string v1, "mbridge_full_rl_playcontainer"

    const-string v2, "id"

    .line 1902
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v3

    const v4, 0x1020002

    invoke-virtual {v3, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/FrameLayout;

    .line 1903
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v4

    const/16 v5, 0x64

    invoke-virtual {v4, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/FrameLayout;

    .line 1904
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v5

    const/16 v6, 0x65

    invoke-virtual {v5, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/RelativeLayout;

    .line 1905
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v6

    const/16 v7, 0x67

    invoke-virtual {v6, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/RelativeLayout;

    if-nez v6, :cond_0

    if-eqz v5, :cond_0

    .line 1908
    invoke-virtual {v5, v7}, Landroid/widget/RelativeLayout;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/RelativeLayout;

    .line 1911
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v7

    .line 1912
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-static {v8, v1, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v8

    .line 1911
    invoke-virtual {v7, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/RelativeLayout;

    if-nez v7, :cond_1

    if-eqz v6, :cond_1

    .line 1915
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7, v1, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v6, v1}, Landroid/widget/RelativeLayout;->findViewById(I)Landroid/view/View;

    move-result-object v1

    move-object v7, v1

    check-cast v7, Landroid/widget/RelativeLayout;

    .line 1918
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v1

    .line 1919
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-static {v8, v0, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v8

    .line 1918
    invoke-virtual {v1, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    if-nez v1, :cond_2

    if-eqz v7, :cond_2

    .line 1922
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v0, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v7, v0}, Landroid/widget/RelativeLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Landroid/widget/RelativeLayout;

    .line 1925
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v8

    const-string v9, "mbridge_full_pb_loading"

    invoke-static {v8, v9, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v8

    invoke-virtual {v0, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ProgressBar;

    .line 1926
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v8

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v9

    const-string v10, "mbridge_full_rl_install"

    invoke-static {v9, v10, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v8, v9}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/RelativeLayout;

    .line 1927
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getRootView()Landroid/view/View;

    move-result-object v9

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v10

    const-string v11, "mbridge_full_ll_pro_dur"

    invoke-static {v10, v11, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v9, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/LinearLayout;

    const/4 v9, 0x0

    if-eqz v4, :cond_3

    .line 1930
    invoke-virtual {v4}, Landroid/widget/FrameLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v10

    check-cast v10, Landroid/view/ViewGroup;

    goto :goto_0

    :cond_3
    move-object v10, v9

    :goto_0
    if-eqz v6, :cond_4

    .line 1933
    invoke-virtual {v6, v2}, Landroid/widget/RelativeLayout;->removeView(Landroid/view/View;)V

    goto :goto_1

    :cond_4
    if-eqz v2, :cond_5

    .line 1935
    invoke-virtual {v2}, Landroid/widget/LinearLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v11

    if-eqz v11, :cond_5

    .line 1936
    invoke-virtual {v2}, Landroid/widget/LinearLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v11

    check-cast v11, Landroid/view/ViewGroup;

    invoke-virtual {v11, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 1940
    :cond_5
    :goto_1
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ah:Landroid/widget/RelativeLayout;

    if-eqz v2, :cond_8

    if-eqz v6, :cond_6

    .line 1942
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ah:Landroid/widget/RelativeLayout;

    invoke-virtual {v6, v2}, Landroid/widget/RelativeLayout;->removeView(Landroid/view/View;)V

    goto :goto_2

    .line 1944
    :cond_6
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ah:Landroid/widget/RelativeLayout;

    invoke-virtual {v2}, Landroid/widget/RelativeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_7

    .line 1945
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ah:Landroid/widget/RelativeLayout;

    invoke-virtual {v2}, Landroid/widget/RelativeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    iget-object v11, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ah:Landroid/widget/RelativeLayout;

    invoke-virtual {v2, v11}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 1948
    :cond_7
    :goto_2
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    invoke-virtual {v2, v9}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->setBackListener(Lcom/mbridge/msdk/nativex/listener/b;)V

    .line 1949
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    invoke-virtual {v2, v9}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->setObject(Ljava/lang/Object;)V

    .line 1950
    iput-object v9, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    .line 1951
    iput-object v9, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ah:Landroid/widget/RelativeLayout;

    :cond_8
    if-eqz v6, :cond_9

    .line 1954
    invoke-virtual {v6, v8}, Landroid/widget/RelativeLayout;->removeView(Landroid/view/View;)V

    goto :goto_3

    :cond_9
    if-eqz v8, :cond_a

    .line 1956
    invoke-virtual {v8}, Landroid/widget/RelativeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_a

    .line 1957
    invoke-virtual {v8}, Landroid/widget/RelativeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    invoke-virtual {v2, v8}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_a
    :goto_3
    if-eqz v6, :cond_b

    .line 1961
    invoke-virtual {v6, v0}, Landroid/widget/RelativeLayout;->removeView(Landroid/view/View;)V

    goto :goto_4

    :cond_b
    if-eqz v0, :cond_c

    .line 1963
    invoke-virtual {v0}, Landroid/widget/ProgressBar;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_c

    .line 1964
    invoke-virtual {v0}, Landroid/widget/ProgressBar;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    invoke-virtual {v2, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_c
    :goto_4
    if-eqz v1, :cond_d

    .line 1968
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->removeView(Landroid/view/View;)V

    :cond_d
    if-eqz v7, :cond_e

    .line 1971
    invoke-virtual {v7, v1}, Landroid/widget/RelativeLayout;->removeView(Landroid/view/View;)V

    goto :goto_5

    :cond_e
    if-eqz v1, :cond_f

    .line 1973
    invoke-virtual {v1}, Landroid/widget/RelativeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_f

    .line 1974
    invoke-virtual {v1}, Landroid/widget/RelativeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_f
    :goto_5
    if-eqz v6, :cond_10

    .line 1978
    invoke-virtual {v6, v7}, Landroid/widget/RelativeLayout;->removeView(Landroid/view/View;)V

    goto :goto_6

    :cond_10
    if-eqz v7, :cond_11

    .line 1980
    invoke-virtual {v7}, Landroid/widget/RelativeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_11

    .line 1981
    invoke-virtual {v7}, Landroid/widget/RelativeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, v7}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    goto :goto_6

    .line 1983
    :cond_11
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    if-eqz v0, :cond_12

    .line 1984
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->G:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;->removeView(Landroid/view/View;)V

    :cond_12
    :goto_6
    if-eqz v5, :cond_13

    .line 1989
    invoke-virtual {v5, v6}, Landroid/widget/RelativeLayout;->removeView(Landroid/view/View;)V

    goto :goto_7

    :cond_13
    if-eqz v6, :cond_14

    .line 1991
    invoke-virtual {v6}, Landroid/widget/RelativeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_14

    .line 1992
    invoke-virtual {v6}, Landroid/widget/RelativeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, v6}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    goto :goto_7

    .line 1994
    :cond_14
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    if-eqz v0, :cond_15

    .line 1995
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 1996
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_15
    :goto_7
    if-eqz v3, :cond_17

    if-eqz v5, :cond_16

    .line 2002
    invoke-virtual {v3, v5}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    goto :goto_8

    .line 2004
    :cond_16
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    invoke-virtual {v3, v0}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    .line 2005
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_17

    .line 2006
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 2007
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->E:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_17
    :goto_8
    const/4 v0, 0x0

    .line 2012
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->setVisibility(I)V

    .line 2013
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->requestLayout()V

    if-eqz v10, :cond_19

    .line 2015
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-eqz v1, :cond_18

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-eq v1, v10, :cond_18

    .line 2016
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 2018
    :cond_18
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    iget v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->L:I

    invoke-virtual {v10, v1, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;I)V

    .line 2019
    invoke-virtual {v10, v4}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 2020
    invoke-virtual {v10}, Landroid/view/ViewGroup;->invalidate()V

    .line 2022
    :cond_19
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i()V

    .line 2023
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    .line 2024
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v0, :cond_1b

    .line 2025
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->setExitFullScreen()V

    .line 2026
    iget-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->f:Z

    if-eqz v0, :cond_1a

    .line 2027
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->openSound()V

    goto :goto_9

    .line 2029
    :cond_1a
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->closeSound()V

    .line 2031
    :goto_9
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->gonePauseView()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_a

    :catch_0
    move-exception v0

    .line 2034
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1b
    :goto_a
    return-void
.end method

.method static synthetic y(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;
    .locals 0

    .line 116
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B:Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    return-object p0
.end method

.method private y()Z
    .locals 2

    .line 2040
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;->getMBridgeFullPlayContainer()Landroid/widget/RelativeLayout;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->G:Landroid/widget/RelativeLayout;

    .line 2041
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;->getMBridgeFullPlayerParent()Landroid/widget/RelativeLayout;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->K:Landroid/widget/RelativeLayout;

    .line 2042
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;->getMBridgeFullClose()Landroid/widget/RelativeLayout;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->H:Landroid/widget/RelativeLayout;

    .line 2043
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;->getMBridgeFullTvInstall()Landroid/widget/TextView;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->I:Landroid/widget/TextView;

    .line 2044
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;->getMBridgeFullPb()Landroid/widget/ProgressBar;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->J:Landroid/widget/ProgressBar;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v0, 0x1

    return v0

    :catchall_0
    move-exception v0

    .line 2047
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    return v0
.end method

.method private z()V
    .locals 2

    .line 2126
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->i(Landroid/content/Context;)I

    move-result v0

    .line 2127
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->j(Landroid/content/Context;)I

    move-result v1

    if-lt v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 2128
    :goto_0
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    .line 2129
    iget-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->j:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 2131
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method static synthetic z(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z
    .locals 0

    .line 116
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    return p0
.end method


# virtual methods
.method protected final a(Ljava/lang/String;)V
    .locals 1

    .line 843
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->m:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 844
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->m:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 845
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    if-eqz p1, :cond_0

    .line 846
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    invoke-interface {p1}, Lcom/mbridge/msdk/out/OnMBMediaViewListener;->onVideoStart()V

    .line 848
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    if-eqz p1, :cond_1

    .line 849
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    invoke-interface {p1}, Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;->onVideoStart()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 853
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBMediaView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method protected final b(Ljava/lang/String;)V
    .locals 1

    .line 859
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->n:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 860
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->n:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 861
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    if-eqz p1, :cond_0

    .line 862
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    invoke-interface {p1}, Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;->onVideoComplete()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 866
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBMediaView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 7

    const-string v0, "cai"

    const-string v1, "exception: "

    .line 3225
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "cai:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "MBMediaView"

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 3226
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    const-string p2, "params is null"

    .line 3227
    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 3230
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 3233
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "packageName"

    .line 3234
    invoke-virtual {v2, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 3235
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v2, "packageName is empty"

    .line 3236
    invoke-static {p1, v2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 3238
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, p2}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x2

    if-eqz p2, :cond_2

    const/4 p2, 0x1

    goto :goto_0

    :cond_2
    move p2, v2

    .line 3241
    :goto_0
    :try_start_1
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "code"

    .line 3242
    sget v6, Lcom/mbridge/msdk/mbjscommon/bridge/b;->b:I

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 3243
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    const-string v6, "result"

    .line 3244
    invoke-virtual {v5, v6, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 3245
    invoke-virtual {v4, p2, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 3246
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-static {v4, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, p1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    move-exception p2

    .line 3248
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 3249
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v3, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 3255
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 3256
    invoke-static {v3, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_1

    :catch_1
    move-exception p2

    .line 3252
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lorg/json/JSONException;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 3253
    invoke-static {v3, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public canShowVideo()Z
    .locals 3

    const/4 v0, 0x0

    .line 2633
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Z)Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    move-result-object v1

    .line 2634
    sget-object v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v1, v2, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0
.end method

.method public changeNoticeURL()V
    .locals 5

    .line 2583
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_6

    .line 2584
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v0

    .line 2585
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_6

    const-string v1, "is_video"

    .line 2586
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2587
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    const-string v3, "is_video=1"

    const-string v4, "is_video=2"

    if-ne v1, v2, :cond_0

    .line 2588
    invoke-virtual {v0, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 2589
    invoke-virtual {v0, v4, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    .line 2591
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v1, v2, :cond_5

    .line 2592
    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 2593
    invoke-virtual {v0, v3, v4}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    .line 2598
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v1, v2, :cond_2

    const-string v1, "1"

    goto :goto_0

    .line 2600
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v1, v2, :cond_3

    const-string v1, "2"

    goto :goto_0

    :cond_3
    const-string v1, ""

    .line 2603
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v3, "?"

    .line 2604
    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    const-string v0, "&is_video="

    .line 2605
    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_4
    const-string v0, "?is_video="

    .line 2607
    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2609
    :goto_1
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 2611
    :cond_5
    :goto_2
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNoticeUrl(Ljava/lang/String;)V

    :cond_6
    return-void
.end method

.method public destory()V
    .locals 2

    .line 544
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v0, :cond_0

    .line 545
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->release()V

    .line 547
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 549
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public exitFullScreen()V
    .locals 3

    const-string v0, "MBMediaView"

    .line 1870
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->x()V

    .line 1871
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "=========webview close mAllowLoopPlay:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1872
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b:Z

    if-eqz v1, :cond_0

    const-string v1, "\u64ad\u653e\u7ed3\u675f \u8c03\u7528onClickPlayButton"

    .line 1873
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1874
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->onClickPlayButton()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 1878
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public getAddNVT2ToNoticeURL()Ljava/lang/String;
    .locals 2

    .line 2617
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    .line 2618
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v0

    .line 2619
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "nv_t2"

    .line 2620
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 2621
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v0, "&nv_t2="

    .line 2622
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNvT2()I

    move-result v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 2623
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :cond_0
    return-object v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public getEndScreenInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string p2, "MBMediaView"

    .line 3148
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 3149
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 3150
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MAL_16.3.67,3.0.1"

    .line 3152
    invoke-direct {p0, v0, v1, v2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 3153
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 3154
    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, ""

    .line 3158
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "====getEndScreenInfo-mCampaign.name:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3159
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    invoke-virtual {v1, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 3161
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public getFullScreenViewByStyle(Landroid/content/Context;Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;)Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;
    .locals 2

    .line 3051
    sget-object v0, Lcom/mbridge/msdk/nativex/view/MBMediaView$11;->a:[I

    invoke-virtual {p2}, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    const/4 p1, 0x0

    goto :goto_1

    .line 3053
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/nativex/view/mbfullview/MBridgeTopFullView;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/nativex/view/mbfullview/MBridgeTopFullView;-><init>(Landroid/content/Context;)V

    goto :goto_0

    .line 3057
    :cond_1
    new-instance v0, Lcom/mbridge/msdk/nativex/view/mbfullview/MBridgeFullView;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/nativex/view/mbfullview/MBridgeFullView;-><init>(Landroid/content/Context;)V

    :goto_0
    move-object p1, v0

    .line 3060
    :goto_1
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;->setStytle(Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;)V

    return-object p1
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 7

    .line 3263
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "gial:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "MBMediaView"

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 3265
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 3266
    sget v2, Lcom/mbridge/msdk/mbjscommon/bridge/b;->b:I

    invoke-virtual {p2, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 3267
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 3268
    sget-object v2, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    .line 3269
    new-instance v3, Lorg/json/JSONArray;

    invoke-direct {v3}, Lorg/json/JSONArray;-><init>()V

    if-eqz v2, :cond_0

    .line 3270
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v4

    if-lez v4, :cond_0

    .line 3271
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v4

    const/4 v5, 0x0

    :goto_0
    if-ge v5, v4, :cond_0

    .line 3273
    invoke-interface {v2, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v3, v6}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_0
    const-string v2, "packageNameList"

    .line 3276
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "data"

    .line 3277
    invoke-virtual {p2, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 3278
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v2, 0x2

    invoke-static {p2, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 3283
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 3284
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :catch_0
    move-exception p2

    .line 3280
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 3281
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public handleViewStyleResult(Landroid/content/Context;)Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;
    .locals 2

    .line 2950
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNvT2()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 p1, 0x2

    if-eq v0, p1, :cond_1

    const/4 p1, 0x3

    if-eq v0, p1, :cond_1

    const/4 p1, 0x4

    if-eq v0, p1, :cond_1

    const/4 p1, 0x6

    if-eq v0, p1, :cond_0

    goto :goto_0

    .line 2961
    :cond_0
    sget-object p1, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;->a:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;

    goto :goto_1

    .line 2958
    :cond_1
    sget-object p1, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;->b:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView$a;

    goto :goto_1

    .line 2953
    :cond_2
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Landroid/content/Context;)V

    :goto_0
    const/4 p1, 0x0

    :goto_1
    return-object p1
.end method

.method public handlerPlayableException(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public hideEndCardWebViewCloseBtn()V
    .locals 2

    .line 1895
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    .line 1896
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 3168
    :try_start_0
    iget-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->al:Landroid/content/Context;

    if-eqz p2, :cond_0

    .line 3169
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->al:Landroid/content/Context;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Landroid/content/Context;)V

    return-void

    .line 3172
    :cond_0
    instance-of p2, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz p2, :cond_1

    .line 3173
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_1

    .line 3175
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object p1

    .line 3176
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3180
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MBMediaView"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public ismCurIsFullScreen()Z
    .locals 1

    .line 3113
    iget-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    return v0
.end method

.method public notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 5

    const-string v0, "MBMediaView"

    .line 335
    invoke-super {p0}, Landroid/widget/LinearLayout;->onAttachedToWindow()V

    .line 337
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onAttachedToWindow start:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v2, :cond_0

    const-string v2, ""

    goto :goto_0

    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v2

    :goto_0
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 338
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v1, :cond_1

    .line 4274
    :try_start_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "sensor"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/hardware/SensorManager;

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->V:Landroid/hardware/SensorManager;

    const/4 v2, 0x1

    .line 4275
    invoke-virtual {v1, v2}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->W:Landroid/hardware/Sensor;

    .line 4276
    new-instance v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    const/4 v2, 0x0

    invoke-direct {v1, p0, v2}, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/nativex/view/MBMediaView$1;)V

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->U:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    .line 4277
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->V:Landroid/hardware/SensorManager;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->W:Landroid/hardware/Sensor;

    const/4 v4, 0x2

    invoke-virtual {v2, v1, v3, v4}, Landroid/hardware/SensorManager;->registerListener(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z

    const-string v1, "register sensorlistener"

    .line 4278
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    .line 4280
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 341
    :cond_1
    :goto_1
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0xb

    if-lt v1, v2, :cond_2

    .line 342
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->isHardwareAccelerated()Z

    move-result v1

    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->g:Z

    .line 344
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getOrientation()I

    move-result v1

    iput v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aj:I

    .line 345
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->d()V

    .line 347
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->M:Landroid/os/Handler;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->an:Ljava/lang/Runnable;

    const-wide/16 v3, 0x12c

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 348
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onAttachedToWindow setDisplay finalmCurDisplayMode:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception v1

    .line 350
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public onBufferingEnd()V
    .locals 2

    .line 1670
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v0, :cond_0

    .line 1671
    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->bufferFinish()V

    const-string v0, "omsdk"

    const-string v1, "videoEvents.bufferFinish()"

    .line 1672
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const-string v0, "bufferend"

    .line 1674
    invoke-static {v0, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onBufferingStart(Ljava/lang/String;)V
    .locals 1

    const-string v0, "bufferMsg"

    .line 1660
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1661
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz p1, :cond_0

    .line 1662
    invoke-virtual {p1}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->bufferStart()V

    const-string p1, "omsdk"

    const-string v0, "videoEvents.bufferStart()"

    .line 1663
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method protected onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 3

    .line 3074
    invoke-super {p0, p1}, Landroid/widget/LinearLayout;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 3076
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onConfigurationChange "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/content/res/Configuration;->orientation:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3078
    iget-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ak:Z

    if-eqz v0, :cond_3

    .line 3080
    iget v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aj:I

    iget v1, p1, Landroid/content/res/Configuration;->orientation:I

    if-ne v0, v1, :cond_0

    return-void

    .line 3083
    :cond_0
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    iput p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aj:I

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-nez p1, :cond_1

    move p1, v0

    goto :goto_0

    :cond_1
    move p1, v1

    .line 3085
    :goto_0
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    .line 3086
    iget p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aj:I

    if-nez p1, :cond_2

    goto :goto_1

    :cond_2
    move v0, v1

    :goto_1
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->j:Z

    .line 3088
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->M:Landroid/os/Handler;

    new-instance v0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    const-wide/16 v1, 0xc8

    invoke-virtual {p1, v0, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_3
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 4

    const-string v0, "MBMediaView"

    .line 356
    invoke-super {p0}, Landroid/widget/LinearLayout;->onDetachedFromWindow()V

    .line 358
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    .line 359
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v1, :cond_0

    .line 360
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->unregisterView()V

    .line 362
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-virtual {v1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->finish()V

    .line 363
    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    const-string v1, "omsdk"

    const-string v3, "adSession finish"

    .line 364
    invoke-static {v1, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 366
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v1, :cond_2

    .line 367
    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    .line 369
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    if-eqz v1, :cond_3

    .line 370
    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    .line 373
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->M:Landroid/os/Handler;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->an:Ljava/lang/Runnable;

    invoke-virtual {v1, v3}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 4409
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->M:Landroid/os/Handler;

    if-eqz v1, :cond_4

    .line 4410
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->M:Landroid/os/Handler;

    invoke-virtual {v1, v2}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 5257
    :cond_4
    :try_start_1
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->V:Landroid/hardware/SensorManager;

    if-eqz v1, :cond_5

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->U:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    if-eqz v1, :cond_5

    .line 5258
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->V:Landroid/hardware/SensorManager;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->U:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    invoke-virtual {v1, v2}, Landroid/hardware/SensorManager;->unregisterListener(Landroid/hardware/SensorEventListener;)V

    const-string v1, "unRegister sensorlistener"

    .line 5259
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 5262
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 376
    :cond_5
    :goto_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v1

    .line 378
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method protected onMeasure(II)V
    .locals 3

    const-string v0, "MBMediaView"

    .line 403
    invoke-super {p0, p1, p2}, Landroid/widget/LinearLayout;->onMeasure(II)V

    .line 405
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getHeight()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    .line 406
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getWidth()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    if-nez p1, :cond_0

    .line 408
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getMeasuredWidth()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    .line 409
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "onMeasure \u5bbd\u5ea6\u4e3a0 \u8c03\u7528getMeasuredWidth mDevWidth:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    .line 411
    :cond_0
    iget p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    if-nez p1, :cond_1

    .line 412
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getMeasuredHeight()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    .line 413
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "onMeasure \u9ad8\u5ea6\u4e3a0 \u8c03\u7528getMeasuredHeight mDevWidth:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    .line 415
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "onMeasure pre mDevWidth "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " mDevHeight:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " mCurDisplayMode:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, " mCurIsLandScape:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 416
    iget p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    if-nez p1, :cond_2

    iget p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    if-nez p1, :cond_2

    .line 417
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->B()F

    move-result p1

    float-to-int p1, p1

    iput p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    .line 418
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "onMeasure \u5bbd\u5ea6\u548c\u9ad8\u5ea6\u90fd\u4e3a0 \u5bbd\u5ea6\u53d6\u5c4f\u5e55\u5bbd\u5ea6mDevWidth:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 420
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object p2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne p1, p2, :cond_6

    iget-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    if-nez p1, :cond_6

    .line 421
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    .line 422
    iget p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    if-eqz p2, :cond_4

    if-eqz p1, :cond_3

    iget p2, p1, Landroid/view/ViewGroup$LayoutParams;->height:I

    const/4 v1, -0x2

    if-eq p2, v1, :cond_4

    :cond_3
    if-eqz p1, :cond_5

    iget p1, p1, Landroid/view/ViewGroup$LayoutParams;->height:I

    const/4 p2, -0x1

    if-ne p1, p2, :cond_5

    .line 426
    :cond_4
    iget p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    int-to-double p1, p1

    iget-wide v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->R:D

    mul-double/2addr p1, v1

    iget-wide v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->Q:D

    div-double/2addr p1, v1

    double-to-int p1, p1

    iput p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    .line 427
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "onMeasure mDevHeight\u4e3a0\u5e76\u4e14\u8bbe\u7f6eWRAP_CONTENT \u62ff\u89c6\u9891\u5bbd\u9ad8\u7b97\u9ad8\u5ea6mDevHeight:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 429
    :cond_5
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "onMeasure after mDevWidth "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->P:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " * mDevHeight *****"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->O:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 430
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h()V

    goto :goto_0

    .line 431
    :cond_6
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object p2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne p1, p2, :cond_7

    iget-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    if-nez p1, :cond_7

    .line 432
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->f()V

    goto :goto_0

    .line 433
    :cond_7
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object p2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->c:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne p1, p2, :cond_8

    iget-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    if-nez p1, :cond_8

    .line 434
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->g()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 437
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    :goto_0
    return-void
.end method

.method public onPlayCompleted()V
    .locals 2

    .line 1539
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v0, :cond_0

    .line 1540
    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->complete()V

    const-string v0, "omsdk"

    const-string v1, "videoEvents.complete()"

    .line 1541
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onPlayError(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "error"

    .line 1548
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1549
    new-instance v0, Lcom/mbridge/msdk/nativex/view/MBMediaView$17;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView$17;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;Ljava/lang/String;)V

    .line 1556
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 1557
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p1

    invoke-virtual {p1, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 1559
    :cond_0
    invoke-interface {v0}, Ljava/lang/Runnable;->run()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1562
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBMediaView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onPlayProgress(II)V
    .locals 16

    move-object/from16 v1, p0

    move/from16 v2, p1

    const-string v3, "MBMediaView"

    const/4 v4, 0x1

    .line 7473
    :try_start_0
    iget-object v0, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_2

    .line 7474
    iget-object v0, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 7475
    iget-boolean v5, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->h:Z

    if-nez v5, :cond_2

    iget-object v5, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->l:Ljava/util/Map;

    if-eqz v5, :cond_2

    iget-object v5, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->l:Ljava/util/Map;

    invoke-interface {v5}, Ljava/util/Map;->size()I

    move-result v5

    if-lez v5, :cond_2

    .line 7476
    iget-object v5, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->l:Ljava/util/Map;

    .line 7477
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "reportAdvImp pre advImpMap.size:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v5}, Ljava/util/Map;->size()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v3, v6}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 7478
    invoke-interface {v5}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v6

    invoke-interface {v6}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v6

    const/4 v13, 0x0

    const/4 v14, 0x0

    .line 7481
    :cond_0
    :goto_0
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_1

    .line 7482
    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/Map$Entry;

    .line 7483
    invoke-interface {v7}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/Integer;

    .line 7484
    invoke-interface {v7}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v7

    move-object v15, v7

    check-cast v15, Ljava/lang/String;

    .line 7485
    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v7

    if-lt v2, v7, :cond_0

    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_0

    .line 7486
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v7

    iget-object v8, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v9, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v9

    move-object v10, v15

    move v11, v13

    move v12, v14

    invoke-static/range {v7 .. v12}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V

    .line 7487
    invoke-interface {v6}, Ljava/util/Iterator;->remove()V

    .line 7488
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "reportAdvImp remove value:"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v3, v7}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 7491
    :cond_1
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "reportAdvImp advImpMap after size:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v5}, Ljava/util/Map;->size()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v3, v6}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 7492
    invoke-interface {v5}, Ljava/util/Map;->size()I

    move-result v5

    if-gtz v5, :cond_2

    .line 7493
    iput-boolean v4, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->h:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 7498
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1603
    :cond_2
    :goto_1
    invoke-direct/range {p0 .. p2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(II)V

    .line 1604
    iget-object v0, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    const/16 v5, 0x64

    if-eqz v0, :cond_5

    mul-int/lit8 v0, v2, 0x64

    .line 1605
    div-int v0, v0, p2

    add-int/lit8 v6, v2, 0x1

    mul-int/2addr v6, v5

    .line 1606
    div-int v6, v6, p2

    .line 1607
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "onPlayProgress: mCurPlayPosition = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, " percent = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, " nextPercent = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v8, "omsdk"

    invoke-static {v8, v7}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v7, 0x19

    if-gt v0, v7, :cond_3

    if-ge v7, v6, :cond_3

    .line 1609
    iget-object v0, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->firstQuartile()V

    const-string v0, "videoEvents.firstQuartile()"

    .line 1610
    invoke-static {v8, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :cond_3
    const/16 v7, 0x32

    if-gt v0, v7, :cond_4

    if-ge v7, v6, :cond_4

    .line 1612
    iget-object v0, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->midpoint()V

    const-string v0, "videoEvents.midpoint()"

    .line 1613
    invoke-static {v8, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :cond_4
    const/16 v7, 0x4b

    if-gt v0, v7, :cond_5

    if-ge v7, v6, :cond_5

    .line 1615
    iget-object v0, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->thirdQuartile()V

    const-string v0, "videoEvents.thirdQuartile()"

    .line 1616
    invoke-static {v8, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1620
    :cond_5
    :goto_2
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t()I

    move-result v0

    if-eq v0, v5, :cond_b

    iget-boolean v0, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->am:Z

    if-nez v0, :cond_b

    const/4 v0, 0x0

    .line 8456
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u()Lcom/mbridge/msdk/c/d;

    move-result-object v6

    if-eqz v6, :cond_6

    .line 8457
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u()Lcom/mbridge/msdk/c/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->g()I

    move-result v0

    .line 1622
    :cond_6
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t()I

    move-result v6

    if-nez v6, :cond_7

    return-void

    :cond_7
    if-le v0, v6, :cond_8

    .line 1629
    div-int/lit8 v0, v6, 0x2

    :cond_8
    if-ltz v0, :cond_b

    mul-int v0, v0, p2

    .line 1633
    div-int/2addr v0, v5

    if-lt v2, v0, :cond_b

    .line 1637
    iget-object v2, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v2

    const/16 v5, 0x5e

    if-eq v2, v5, :cond_a

    iget-object v2, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v2

    const/16 v5, 0x11f

    if-ne v2, v5, :cond_9

    goto :goto_3

    .line 1640
    :cond_9
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBidToken()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_4

    .line 1638
    :cond_a
    :goto_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1642
    :goto_4
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v5

    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6, v2}, Lcom/mbridge/msdk/videocommon/download/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/download/a;

    move-result-object v2

    if-eqz v2, :cond_b

    .line 1644
    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/download/a;->j()V

    .line 1645
    iput-boolean v4, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView;->am:Z

    .line 1646
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "CDRate is : "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " and start download !"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    return-void
.end method

.method public onPlayProgressMS(II)V
    .locals 0

    return-void
.end method

.method public onPlaySetDataSourceError(Ljava/lang/String;)V
    .locals 1

    const-string v0, "errorstr"

    .line 1679
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onPlayStarted(I)V
    .locals 3

    const-string v0, "omsdk"

    .line 1526
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v1, :cond_1

    int-to-float p1, p1

    .line 1529
    :try_start_0
    iget-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->f:Z

    if-eqz v2, :cond_0

    const/high16 v2, 0x3f800000    # 1.0f

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-virtual {v1, p1, v2}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->start(FF)V
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 1531
    invoke-virtual {p1}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    const-string p1, "videoEvents.start()"

    .line 1533
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    .line 3139
    invoke-super {p0, p1, p2}, Landroid/widget/LinearLayout;->onVisibilityChanged(Landroid/view/View;I)V

    const-string p1, "MBMediaView"

    const-string p2, "onVisibilityChanged invoked"

    .line 3141
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 3

    const-string v0, "MBMediaView"

    .line 384
    invoke-super {p0, p1}, Landroid/widget/LinearLayout;->onWindowFocusChanged(Z)V

    .line 386
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "hasWindowFocus:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 387
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e:Z

    .line 388
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ab:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    sget-object v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->b:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v1, v2, :cond_0

    .line 5306
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v1, :cond_0

    .line 5307
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->setIsFrontDesk(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 5382
    :cond_0
    :try_start_1
    iget-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    if-nez p1, :cond_1

    const-string p1, "initFullPlayerOnWindowFocus \u5728\u534a\u5c4f return"

    .line 5383
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 5386
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz p1, :cond_4

    .line 5387
    iget-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e:Z

    if-eqz p1, :cond_3

    .line 5388
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isPlaying()Z

    move-result p1

    if-eqz p1, :cond_2

    const-string p1, "fullscreen windowfocuse true isPlaying do nothing return"

    .line 5389
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 5391
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isComplete()Z

    move-result p1

    if-nez p1, :cond_5

    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getIsActiviePause()Z

    move-result p1

    if-nez p1, :cond_5

    const-string p1, "fullscreen windowfocuse true startOrPlayVideo"

    .line 5392
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 5393
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->onClickPlayButton()V

    goto :goto_0

    :cond_3
    const-string p1, "fullscreen windowfocuse false pasue======"

    .line 5397
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 5398
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->pause()V

    goto :goto_0

    :cond_4
    const-string p1, "fullscreen playerview is null return"

    .line 5401
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 5404
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 393
    :cond_5
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->requestLayout()V

    const-string p1, "onWindowFocusChanged reqeusetlaytout"

    .line 394
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception p1

    .line 396
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 3186
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "openURL:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3187
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p2, "params is null"

    .line 3188
    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 3191
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    .line 3192
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    if-nez v0, :cond_1

    .line 3194
    :try_start_0
    instance-of v2, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v2, :cond_1

    .line 3195
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_1

    .line 3197
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3201
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    if-nez v0, :cond_2

    return-void

    .line 3207
    :cond_2
    :try_start_1
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "url"

    .line 3208
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v2, "type"

    .line 3209
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v2, 0x1

    if-ne p1, v2, :cond_3

    .line 3211
    invoke-static {v0, p2}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_1

    :cond_3
    const/4 v2, 0x2

    if-ne p1, v2, :cond_4

    .line 3213
    invoke-static {v0, p2}, Lcom/mbridge/msdk/click/c;->b(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 3218
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :catch_1
    move-exception p1

    .line 3216
    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_1
    return-void
.end method

.method public setAllowLoopPlay(Z)V
    .locals 0

    .line 535
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b:Z

    return-void
.end method

.method public setAllowScreenChange(Z)V
    .locals 0

    .line 539
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c:Z

    return-void
.end method

.method public setAllowVideoRefresh(Z)V
    .locals 0

    .line 531
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a:Z

    return-void
.end method

.method public setFollowActivityOrientation(Z)V
    .locals 0

    .line 3069
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ak:Z

    return-void
.end method

.method public setFullScreenViewBackgroundColor(I)V
    .locals 0

    .line 3065
    iput p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->v:I

    return-void
.end method

.method public setIsAllowFullScreen(Z)V
    .locals 0

    .line 527
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->d:Z

    return-void
.end method

.method public setNativeAd(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 11

    const-string v0, "MBMediaView"

    if-nez p1, :cond_0

    :try_start_0
    const-string p1, "setNativeAd campaign is null return"

    .line 444
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 447
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-ne v1, p1, :cond_1

    const-string p1, "setNativeAd has init return"

    .line 448
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    const/4 v1, 0x1

    .line 6219
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->e:Z

    .line 6221
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->g:Z

    const/4 v1, 0x0

    .line 6222
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->h:Z

    .line 6223
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->i:Z

    .line 6224
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->j:Z

    .line 6225
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->r:Z

    .line 452
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z()V

    .line 453
    move-object v1, p1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 454
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMediaViewHolder()Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    move-result-object v1

    if-nez v1, :cond_2

    .line 455
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;-><init>()V

    .line 456
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdvImpList()Ljava/util/Map;

    move-result-object v2

    iput-object v2, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;->l:Ljava/util/Map;

    .line 457
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMediaViewHolder(Lcom/mbridge/msdk/foundation/entity/CampaignEx$b;)V

    .line 458
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "setNativeAd mediaViewHolder appname:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 462
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v1

    const/16 v2, 0x5e

    if-eq v1, v2, :cond_4

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v1

    const/16 v2, 0x11f

    if-ne v1, v2, :cond_3

    goto :goto_0

    .line 465
    :cond_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBidToken()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    .line 463
    :cond_4
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 467
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v2

    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Lcom/mbridge/msdk/videocommon/download/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/download/a;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->aa:Lcom/mbridge/msdk/videocommon/download/a;

    .line 468
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "setNativeAd cid"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " appname:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 469
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->q:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v2, "omsdk"

    if-eqz v1, :cond_8

    .line 470
    :try_start_1
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    const/4 v3, 0x0

    if-eqz v1, :cond_6

    .line 471
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v1, :cond_5

    .line 472
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->unregisterView()V

    .line 474
    :cond_5
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-virtual {v1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->finish()V

    .line 475
    iput-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    const-string v1, "adSession finish"

    .line 476
    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 478
    :cond_6
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v1, :cond_7

    .line 479
    iput-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->u:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    .line 481
    :cond_7
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    if-eqz v1, :cond_8

    .line 482
    iput-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->t:Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    .line 485
    :cond_8
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_9

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isActiveOm()Z

    move-result v1

    if-eqz v1, :cond_9

    .line 505
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v3

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOmid()Ljava/lang/String;

    move-result-object v5

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v6

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p()Ljava/lang/String;

    move-result-object v8

    const-string v9, ""

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v10

    invoke-static/range {v3 .. v10}, Lcom/mbridge/msdk/a/b;->a(Landroid/content/Context;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    .line 506
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "adSession.Create "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->s:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 508
    :cond_9
    iget-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->q:Z

    if-eqz p1, :cond_a

    .line 510
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setNativeAd setDisplay appname:"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->N:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 511
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->d()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 514
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    :goto_2
    return-void
.end method

.method public setOnMediaViewListener(Lcom/mbridge/msdk/out/OnMBMediaViewListener;)V
    .locals 0

    .line 519
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ac:Lcom/mbridge/msdk/out/OnMBMediaViewListener;

    return-void
.end method

.method public setOnMediaViewListener(Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;)V
    .locals 0

    .line 523
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ad:Lcom/mbridge/msdk/out/OnMBMediaViewListenerPlus;

    return-void
.end method

.method public setOrientation(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public setProgressVisibility(Z)V
    .locals 1

    .line 3004
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->k:Z

    .line 3005
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v0, :cond_0

    .line 3006
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->showProgressView(Z)V

    :cond_0
    return-void
.end method

.method public setSoundIndicatorVisibility(Z)V
    .locals 1

    .line 3016
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->l:Z

    .line 3017
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v0, :cond_0

    .line 3018
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->showSoundIndicator(Z)V

    :cond_0
    return-void
.end method

.method public setVideoSoundOnOff(Z)V
    .locals 1

    .line 3028
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->f:Z

    .line 3029
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    .line 3031
    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->openSound()V

    goto :goto_0

    .line 3033
    :cond_0
    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->closeSound()V

    :cond_1
    :goto_0
    return-void
.end method

.method public showEndCardWebViewCloseBtn()V
    .locals 2

    .line 1886
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    .line 1887
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ai:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "MBMediaView"

    const/4 v1, 0x1

    .line 3297
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-nez v2, :cond_0

    .line 3299
    :try_start_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 3301
    invoke-virtual {v2, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_0
    :try_start_2
    const-string p2, "SHOW CLOSE BTN "

    .line 3311
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3312
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->showEndCardWebViewCloseBtn()V

    .line 3314
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v2, 0x0

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, p1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return-void

    :catch_1
    move-exception p2

    .line 3317
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3320
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->b(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 3326
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->exitFullScreen()V

    .line 3327
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p2

    .line 3330
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string v0, "MBMediaView"

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3332
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->b(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public updateViewManger(Z)V
    .locals 5

    .line 2363
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/mbfullview/a;->a(Landroid/content/Context;)Lcom/mbridge/msdk/nativex/view/mbfullview/a;

    move-result-object v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    .line 2366
    :try_start_0
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    .line 9245
    invoke-virtual {v3}, Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;->getmAnimationPlayer()Landroid/widget/LinearLayout;

    move-result-object v3

    invoke-virtual {v3}, Landroid/widget/LinearLayout;->clearAnimation()V

    .line 2367
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isComplete()Z

    move-result v3

    if-nez v3, :cond_0

    move v3, v1

    goto :goto_0

    :cond_0
    move v3, v2

    .line 2368
    :goto_0
    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    invoke-virtual {v0, p1, v3, v4}, Lcom/mbridge/msdk/nativex/view/mbfullview/a;->a(ZZLcom/mbridge/msdk/nativex/view/mbfullview/BaseView;)V

    .line 2369
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    iget v4, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->ae:I

    invoke-virtual {v0, p1, v3, v4}, Lcom/mbridge/msdk/nativex/view/mbfullview/a;->a(ZLcom/mbridge/msdk/nativex/view/mbfullview/BaseView;I)V

    .line 2371
    :cond_1
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    instance-of v3, v3, Lcom/mbridge/msdk/nativex/view/mbfullview/MBridgeTopFullView;

    if-eqz v3, :cond_4

    if-eqz v0, :cond_4

    if-nez p1, :cond_2

    goto :goto_1

    :cond_2
    move v1, v2

    .line 2373
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F:Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    .line 10129
    instance-of v0, p1, Lcom/mbridge/msdk/nativex/view/mbfullview/MBridgeTopFullView;

    if-eqz v0, :cond_4

    .line 10130
    check-cast p1, Lcom/mbridge/msdk/nativex/view/mbfullview/MBridgeTopFullView;

    if-eqz v1, :cond_3

    goto :goto_2

    :cond_3
    const/16 v2, 0x8

    .line 10132
    :goto_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/mbfullview/MBridgeTopFullView;->getMBridgeFullViewDisplayIcon()Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 10133
    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/mbfullview/MBridgeTopFullView;->getMBridgeFullViewDisplayTitle()Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 10134
    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/mbfullview/MBridgeTopFullView;->getMBridgeFullViewDisplayDscription()Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 10135
    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/mbfullview/MBridgeTopFullView;->getStarLevelLayoutView()Lcom/mbridge/msdk/nativex/view/mbfullview/StarLevelLayoutView;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/nativex/view/mbfullview/StarLevelLayoutView;->setVisibility(I)V
    :try_end_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception p1

    .line 2377
    invoke-virtual {p1}, Ljava/lang/NullPointerException;->printStackTrace()V

    :cond_4
    :goto_3
    return-void
.end method
