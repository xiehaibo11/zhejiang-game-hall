.class public Lcom/sigmob/sdk/nativead/w;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/view/View$OnTouchListener;
.implements Lcom/sigmob/sdk/nativead/c$a;
.implements Lcom/sigmob/sdk/nativead/l$a;
.implements Lcom/sigmob/sdk/nativead/x;
.implements Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;


# static fields
.field private static final d:I = 0x1

.field private static final e:I = 0x2

.field private static final f:I = 0x3

.field private static g:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private A:I

.field private B:Z

.field private C:Z

.field private D:Z

.field private E:Z

.field private F:Z

.field private G:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private H:J

.field private I:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private J:Landroid/view/View;

.field private K:Z

.field private L:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

.field protected a:Lcom/sigmob/windad/natives/WindNativeAdData;

.field protected b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field protected c:Lcom/sigmob/sdk/nativead/g;

.field private h:Lcom/sigmob/sdk/nativead/n;

.field private i:Lcom/sigmob/sdk/nativead/l;

.field private j:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private k:Ljava/util/HashSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashSet<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private l:Lcom/sigmob/sdk/nativead/c;

.field private m:Lcom/sigmob/sdk/nativead/j;

.field private n:Landroid/view/MotionEvent;

.field private o:Lcom/sigmob/sdk/nativead/b;

.field private p:Lcom/sigmob/windad/natives/NativeADEventListener;

.field private q:Z

.field private r:Z

.field private s:Landroid/view/ViewGroup;

.field private t:Landroid/view/ViewGroup$LayoutParams;

.field private u:Landroid/graphics/Bitmap;

.field private v:Lcom/sigmob/sdk/base/views/q;

.field private w:Z

.field private x:Lcom/sigmob/sdk/nativead/r;

.field private y:Z

.field private z:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/nativead/w;->g:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->B:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->C:Z

    return-void
.end method

.method static synthetic G()Ljava/util/Map;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/nativead/w;->g:Ljava/util/Map;

    return-object v0
.end method

.method private H()Landroid/content/Context;
    .locals 1

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method

.method private I()V
    .locals 3

    :try_start_0
    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->J()Landroid/view/View;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getRootViewFromView(Landroid/view/View;)Landroid/view/View;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->v:Lcom/sigmob/sdk/base/views/q;

    if-nez v1, :cond_0

    if-eqz v0, :cond_0

    new-instance v1, Lcom/sigmob/sdk/base/views/q;

    invoke-virtual {v0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-direct {v1, v0, v2}, Lcom/sigmob/sdk/base/views/q;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->v:Lcom/sigmob/sdk/base/views/q;

    new-instance v0, Lcom/sigmob/sdk/nativead/w$7;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/nativead/w$7;-><init>(Lcom/sigmob/sdk/nativead/w;)V

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/views/q;->a(Lcom/sigmob/sdk/base/views/q$b;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->v:Lcom/sigmob/sdk/base/views/q;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->v:Lcom/sigmob/sdk/base/views/q;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->w:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    const-string v1, "appinfo"

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->click_area:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->v:Lcom/sigmob/sdk/base/views/q;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->show()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->w:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "openFourElements fail:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private J()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->i:Lcom/sigmob/sdk/nativead/l;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/l;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private K()Z
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreate_time()J

    move-result-wide v2

    sub-long/2addr v0, v2

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdExpiredTime()Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    int-to-long v2, v2

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private L()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlData()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getHtmlUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/w;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/w;->u:Landroid/graphics/Bitmap;

    return-object p1
.end method

.method private a(Ljava/util/HashSet;Landroid/view/MotionEvent;)Landroid/view/View;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashSet<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/MotionEvent;",
            ")",
            "Landroid/view/View;"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p1}, Ljava/util/HashSet;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    invoke-static {v1, p2}, Lcom/czhj/sdk/common/utils/ViewUtil;->isPointInView(Landroid/view/View;Landroid/view/MotionEvent;)Z

    move-result v2

    if-eqz v2, :cond_1

    return-object v1

    :cond_2
    return-object v0
.end method

.method private a(Ljava/util/List;Landroid/view/MotionEvent;)Landroid/view/View;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/MotionEvent;",
            ")",
            "Landroid/view/View;"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    invoke-static {v1, p2}, Lcom/czhj/sdk/common/utils/ViewUtil;->isPointInView(Landroid/view/View;Landroid/view/MotionEvent;)Z

    move-result v2

    if-eqz v2, :cond_1

    return-object v1

    :cond_2
    return-object v0
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/w;Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/w;->v:Lcom/sigmob/sdk/base/views/q;

    return-object p1
.end method

.method private a(Landroid/view/ViewGroup;)Lcom/sigmob/sdk/nativead/n;
    .locals 3

    const/4 v0, 0x0

    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_1

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    instance-of v2, v1, Lcom/sigmob/sdk/nativead/n;

    if-eqz v2, :cond_0

    check-cast v1, Lcom/sigmob/sdk/nativead/n;

    return-object v1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/w;)Lcom/sigmob/sdk/nativead/n;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    return-object p0
.end method

.method private a(ILandroid/view/MotionEvent;)V
    .locals 7

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/f;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->J()Landroid/view/View;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/czhj/sdk/common/utils/TouchLocation;->getTouchLocation(Landroid/view/View;Landroid/view/MotionEvent;)Lcom/czhj/sdk/common/utils/TouchLocation;

    move-result-object v4

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->J()Landroid/view/View;

    move-result-object p2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->n:Landroid/view/MotionEvent;

    invoke-static {p2, v0}, Lcom/czhj/sdk/common/utils/TouchLocation;->getTouchLocation(Landroid/view/View;Landroid/view/MotionEvent;)Lcom/czhj/sdk/common/utils/TouchLocation;

    move-result-object v3

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p2

    iput-object v3, p2, Lcom/sigmob/sdk/base/models/ClickCommon;->down:Lcom/czhj/sdk/common/utils/TouchLocation;

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p2

    iput-object v3, p2, Lcom/sigmob/sdk/base/models/ClickCommon;->up:Lcom/czhj/sdk/common/utils/TouchLocation;

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p2

    const-string v0, "preview"

    iput-object v0, p2, Lcom/sigmob/sdk/base/models/ClickCommon;->click_scene:Ljava/lang/String;

    const/4 p2, 0x1

    const/4 v0, 0x0

    if-eq p1, p2, :cond_6

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    const/4 v2, 0x3

    if-eq p1, v2, :cond_0

    goto :goto_1

    :cond_0
    move p1, v0

    goto :goto_0

    :cond_1
    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->L()Z

    move-result p1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v2

    const-string v5, "material"

    iput-object v5, v2, Lcom/sigmob/sdk/base/models/ClickCommon;->click_area:Ljava/lang/String;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    iput-boolean v0, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->is_final_click:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {p1, p2, v0}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->y()V

    return-void

    :cond_2
    move p1, p2

    :goto_0
    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    const-string v2, "btn"

    iput-object v2, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->click_area:Ljava/lang/String;

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->a:Lcom/sigmob/windad/natives/WindNativeAdData;

    invoke-interface {p1}, Lcom/sigmob/windad/natives/WindNativeAdData;->getAdPatternType()I

    move-result p1

    if-ne p1, p2, :cond_5

    :cond_4
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    iput-boolean p2, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->is_final_click:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v1

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->H()Landroid/content/Context;

    move-result-object v2

    sget-object v5, Lcom/sigmob/sdk/base/a;->e:Lcom/sigmob/sdk/base/a;

    iget-object v6, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual/range {v1 .. v6}, Lcom/sigmob/sdk/nativead/b;->a(Landroid/content/Context;Lcom/czhj/sdk/common/utils/TouchLocation;Lcom/czhj/sdk/common/utils/TouchLocation;Lcom/sigmob/sdk/base/a;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_1

    :cond_5
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInteractionType()I

    move-result p1

    if-ne p1, v1, :cond_4

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    iput-boolean v0, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->is_final_click:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {p1, p2, v0}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->I()V

    :goto_1
    return-void

    :cond_6
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    const-string p2, "appinfo"

    iput-object p2, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->click_area:Ljava/lang/String;

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    iput-boolean v0, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->is_final_click:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {p1, p2, v0}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->I()V

    return-void
.end method

.method public static a(Landroid/view/View;II)V
    .locals 1

    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    instance-of v0, v0, Landroid/widget/FrameLayout;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    iput p1, v0, Landroid/widget/FrameLayout$LayoutParams;->width:I

    iput p2, v0, Landroid/widget/FrameLayout$LayoutParams;->height:I

    :goto_0
    invoke-virtual {p0, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {p0}, Landroid/view/View;->requestLayout()V

    goto :goto_1

    :cond_0
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    instance-of v0, v0, Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    iput p1, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    iput p2, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    instance-of v0, v0, Landroid/widget/LinearLayout;

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout$LayoutParams;

    iput p1, v0, Landroid/widget/LinearLayout$LayoutParams;->width:I

    iput p2, v0, Landroid/widget/LinearLayout$LayoutParams;->height:I

    goto :goto_0

    :cond_2
    :goto_1
    return-void
.end method

.method private a(Landroid/view/MotionEvent;)Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/nativead/n;->a(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/w;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/w;->z:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/nativead/w;)Landroid/view/View;
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->J()Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method private b(Landroid/view/ViewGroup;)Lcom/sigmob/sdk/nativead/l;
    .locals 3

    const/4 v0, 0x0

    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_1

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    instance-of v2, v1, Lcom/sigmob/sdk/nativead/l;

    if-eqz v2, :cond_0

    check-cast v1, Lcom/sigmob/sdk/nativead/l;

    return-object v1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/nativead/w;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/w;->C:Z

    return p1
.end method

.method static synthetic c(Lcom/sigmob/sdk/nativead/w;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    return p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/nativead/w;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/w;->B:Z

    return p1
.end method

.method static synthetic d(Lcom/sigmob/sdk/nativead/w;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/nativead/w;->B:Z

    return p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/nativead/w;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/w;->w:Z

    return p1
.end method

.method static synthetic e(Lcom/sigmob/sdk/nativead/w;)Lcom/sigmob/sdk/nativead/r;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/w;->x:Lcom/sigmob/sdk/nativead/r;

    return-object p0
.end method

.method static synthetic f(Lcom/sigmob/sdk/nativead/w;)Lcom/sigmob/windad/natives/NativeADEventListener;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/w;->p:Lcom/sigmob/windad/natives/NativeADEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/sigmob/sdk/nativead/w;)Lcom/sigmob/sdk/base/views/q;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/w;->v:Lcom/sigmob/sdk/base/views/q;

    return-object p0
.end method


# virtual methods
.method public A()Landroid/graphics/Bitmap;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->u:Landroid/graphics/Bitmap;

    return-object v0
.end method

.method public B()V
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->r()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->c()V

    :cond_1
    return-void
.end method

.method public C()V
    .locals 2

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->r()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    if-eqz v0, :cond_1

    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/sigmob/sdk/nativead/w;->z:Z

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->a()V

    :cond_1
    return-void
.end method

.method public D()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->s:Landroid/view/ViewGroup;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/n;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->s:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->t:Landroid/view/ViewGroup$LayoutParams;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->s:Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v1, v2, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->s:Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v0, v1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v0, v1}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    :cond_2
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/w;->s:Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/w;->t:Landroid/view/ViewGroup$LayoutParams;

    return-void
.end method

.method public E()V
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->r()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->b()V

    :cond_1
    return-void
.end method

.method public F()V
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->r()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->d()V

    :cond_1
    return-void
.end method

.method public a()V
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->H()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/nativead/b;->a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    return-void
.end method

.method public a(Landroid/view/View;Ljava/util/List;Ljava/util/List;Landroid/view/View;Lcom/sigmob/windad/natives/NativeADEventListener;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/View;",
            "Lcom/sigmob/windad/natives/NativeADEventListener;",
            ")V"
        }
    .end annotation

    if-nez p1, :cond_1

    if-eqz p5, :cond_0

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_ADCONTAINER_IS_NULL:Lcom/sigmob/windad/WindAdError;

    invoke-interface {p5, p1}, Lcom/sigmob/windad/natives/NativeADEventListener;->onAdError(Lcom/sigmob/windad/WindAdError;)V

    :cond_0
    return-void

    :cond_1
    instance-of v0, p1, Landroid/view/ViewGroup;

    if-nez v0, :cond_3

    if-eqz p5, :cond_2

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_ADCONTAINER_NOT_VIEWGROUP:Lcom/sigmob/windad/WindAdError;

    invoke-interface {p5, p1}, Lcom/sigmob/windad/natives/NativeADEventListener;->onAdError(Lcom/sigmob/windad/WindAdError;)V

    :cond_2
    return-void

    :cond_3
    if-eqz p4, :cond_5

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->x:Lcom/sigmob/sdk/nativead/r;

    if-nez v0, :cond_4

    new-instance v0, Lcom/sigmob/sdk/nativead/a;

    invoke-virtual {p4}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-direct {v0, v1, v2}, Lcom/sigmob/sdk/nativead/a;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/w;->x:Lcom/sigmob/sdk/nativead/r;

    invoke-interface {v0, p0}, Lcom/sigmob/sdk/nativead/r;->a(Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;)V

    :cond_4
    new-instance v0, Lcom/sigmob/sdk/nativead/w$4;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/nativead/w$4;-><init>(Lcom/sigmob/sdk/nativead/w;)V

    invoke-virtual {p4, v0}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    :cond_5
    check-cast p1, Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object p4

    new-instance v0, Lcom/sigmob/sdk/nativead/w$5;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/nativead/w$5;-><init>(Lcom/sigmob/sdk/nativead/w;)V

    invoke-virtual {p4, v0}, Lcom/sigmob/sdk/nativead/b;->a(Lcom/sigmob/sdk/base/common/x;)V

    iput-object p3, p0, Lcom/sigmob/sdk/nativead/w;->j:Ljava/util/List;

    iget-object p3, p0, Lcom/sigmob/sdk/nativead/w;->I:Ljava/util/List;

    if-eqz p3, :cond_6

    iget-object p4, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    invoke-virtual {p4, p3}, Ljava/util/HashSet;->removeAll(Ljava/util/Collection;)Z

    :cond_6
    iput-object p2, p0, Lcom/sigmob/sdk/nativead/w;->I:Ljava/util/List;

    iput-object p5, p0, Lcom/sigmob/sdk/nativead/w;->p:Lcom/sigmob/windad/natives/NativeADEventListener;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->o()Lcom/sigmob/sdk/nativead/c;

    move-result-object p2

    const/4 p3, 0x0

    iget-object p4, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2, p3, p4}, Lcom/sigmob/sdk/nativead/c;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object p2

    iget-object p3, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    new-instance p4, Lcom/sigmob/sdk/nativead/w$6;

    invoke-direct {p4, p0}, Lcom/sigmob/sdk/nativead/w$6;-><init>(Lcom/sigmob/sdk/nativead/w;)V

    invoke-virtual {p2, p3, p4}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/w;->i:Lcom/sigmob/sdk/nativead/l;

    const/4 p3, 0x0

    if-eqz p2, :cond_7

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/w;->i:Lcom/sigmob/sdk/nativead/l;

    new-instance p4, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p4, p3, p3}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    :goto_0
    invoke-virtual {p1, p2, p4}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_1

    :cond_7
    invoke-direct {p0, p1}, Lcom/sigmob/sdk/nativead/w;->b(Landroid/view/ViewGroup;)Lcom/sigmob/sdk/nativead/l;

    move-result-object p2

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/w;->i:Lcom/sigmob/sdk/nativead/l;

    if-nez p2, :cond_8

    new-instance p2, Lcom/sigmob/sdk/nativead/l;

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->H()Landroid/content/Context;

    move-result-object p4

    invoke-direct {p2, p4}, Lcom/sigmob/sdk/nativead/l;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/w;->i:Lcom/sigmob/sdk/nativead/l;

    new-instance p4, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p4, p3, p3}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    goto :goto_0

    :cond_8
    :goto_1
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/w;->I:Ljava/util/List;

    invoke-virtual {p1, p2}, Ljava/util/HashSet;->addAll(Ljava/util/Collection;)Z

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->i:Lcom/sigmob/sdk/nativead/l;

    invoke-virtual {p1, p0}, Lcom/sigmob/sdk/nativead/l;->setAdVisibilityStatusChangeListener(Lcom/sigmob/sdk/nativead/l$a;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->i:Lcom/sigmob/sdk/nativead/l;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/nativead/b;->s()I

    move-result p2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object p3

    invoke-virtual {p3}, Lcom/sigmob/sdk/nativead/b;->t()I

    move-result p3

    invoke-virtual {p1, p2, p3}, Lcom/sigmob/sdk/nativead/l;->a(II)V

    return-void
.end method

.method public a(Landroid/view/ViewGroup;Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-direct {p0, p1}, Lcom/sigmob/sdk/nativead/w;->a(Landroid/view/ViewGroup;)Lcom/sigmob/sdk/nativead/n;

    move-result-object v0

    if-eqz v0, :cond_1

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    goto :goto_0

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-static {v1}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    new-instance v1, Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/nativead/n;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    :goto_0
    new-instance v1, Lcom/sigmob/sdk/nativead/w$2;

    invoke-direct {v1, p0, p1, v0}, Lcom/sigmob/sdk/nativead/w$2;-><init>(Lcom/sigmob/sdk/nativead/w;Landroid/view/ViewGroup;Lcom/sigmob/sdk/nativead/n;)V

    invoke-virtual {p1, v1}, Landroid/view/ViewGroup;->post(Ljava/lang/Runnable;)Z

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {p1, v0}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {p1, v0}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/n;->getAdUnit()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {p1, p0}, Lcom/sigmob/sdk/nativead/n;->a(Lcom/sigmob/sdk/nativead/x;)V

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/n;->getSigVideoAdController()Lcom/sigmob/sdk/nativead/p;

    move-result-object p1

    if-eqz p1, :cond_4

    new-instance v0, Lcom/sigmob/sdk/nativead/w$3;

    invoke-direct {v0, p0, p2, p1}, Lcom/sigmob/sdk/nativead/w$3;-><init>(Lcom/sigmob/sdk/nativead/w;Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;Lcom/sigmob/sdk/nativead/p;)V

    invoke-interface {p1, v0}, Lcom/sigmob/sdk/nativead/p;->a(Lcom/sigmob/sdk/nativead/h;)V

    :cond_4
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/natives/WindNativeAdData;)V
    .locals 1

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/w;->a:Lcom/sigmob/windad/natives/WindNativeAdData;

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->a()Lcom/czhj/sdk/common/utils/ImageManager;

    move-result-object p1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->k()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_logo()Ljava/lang/String;

    move-result-object p2

    new-instance v0, Lcom/sigmob/sdk/nativead/w$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/nativead/w$1;-><init>(Lcom/sigmob/sdk/nativead/w;)V

    invoke-virtual {p1, p2, v0}, Lcom/czhj/sdk/common/utils/ImageManager;->getBitmap(Ljava/lang/String;Lcom/czhj/sdk/common/utils/ImageManager$BitmapLoadedListener;)V

    return-void
.end method

.method public a(Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/w;->L:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    return-void
.end method

.method public a(Ljava/util/HashSet;Landroid/view/View$OnTouchListener;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashSet<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/View$OnTouchListener;",
            ")V"
        }
    .end annotation

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/util/HashSet;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    invoke-virtual {v0, p2}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public a(Ljava/util/List;I)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/widget/ImageView;",
            ">;I)V"
        }
    .end annotation

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->k()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getImageUrlList()Ljava/util/List;

    move-result-object v0

    if-eqz p1, :cond_2

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    invoke-static {v1, v2}, Ljava/lang/Math;->min(II)I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_2

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/SigImage;

    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/widget/ImageView;

    iget-object v5, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    invoke-virtual {v5, v4}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_0

    iget-object v5, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    invoke-virtual {v5, v4}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    :cond_0
    iget-object v5, p0, Lcom/sigmob/sdk/nativead/w;->G:Ljava/util/List;

    if-nez v5, :cond_1

    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    iput-object v5, p0, Lcom/sigmob/sdk/nativead/w;->G:Ljava/util/List;

    goto :goto_1

    :cond_1
    invoke-interface {v5}, Ljava/util/List;->clear()V

    :goto_1
    iget-object v5, p0, Lcom/sigmob/sdk/nativead/w;->G:Ljava/util/List;

    invoke-interface {v5, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->a()Lcom/czhj/sdk/common/utils/ImageManager;

    move-result-object v5

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/SigImage;->imageUrl:Ljava/lang/String;

    invoke-virtual {v5, v3}, Lcom/czhj/sdk/common/utils/ImageManager;->load(Ljava/lang/String;)Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;

    move-result-object v3

    invoke-virtual {v3, p2}, Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;->placeholder(I)Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;

    move-result-object v3

    invoke-virtual {v3, p2}, Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;->error(I)Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;

    move-result-object v3

    invoke-virtual {v3, v4}, Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;->into(Landroid/widget/ImageView;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method public a(Ljava/util/List;Landroid/view/View$OnTouchListener;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/View$OnTouchListener;",
            ")V"
        }
    .end annotation

    if-eqz p1, :cond_0

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    invoke-virtual {v0, p2}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public a(Z)V
    .locals 3

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->y:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    if-nez v0, :cond_2

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/common/f;->d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    if-eqz p1, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->p:Lcom/sigmob/windad/natives/NativeADEventListener;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/sigmob/windad/natives/NativeADEventListener;->onAdExposed()V

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->O:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_2
    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/w;->y:Z

    return-void
.end method

.method public b()V
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->H()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/nativead/b;->b(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/n;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    check-cast p1, Landroid/view/View;

    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "visibilityStatusChange() called with: isVisible = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/view/ViewGroup$LayoutParams;->width:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Landroid/view/ViewGroup$LayoutParams;->height:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "]"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public b(Z)V
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->r()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/nativead/p;->a(Z)V

    :cond_1
    return-void
.end method

.method public c()V
    .locals 3

    const-string v0, "----------onAdDetailShow----------"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->H()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/nativead/b;->c(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->p:Lcom/sigmob/windad/natives/NativeADEventListener;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/sigmob/windad/natives/NativeADEventListener;->onAdDetailShow()V

    :cond_1
    return-void
.end method

.method public c(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    return-void
.end method

.method public d()V
    .locals 0

    return-void
.end method

.method public d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    return-void
.end method

.method public e()V
    .locals 4

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->p:Lcom/sigmob/windad/natives/NativeADEventListener;

    if-eqz v1, :cond_0

    invoke-interface {v1}, Lcom/sigmob/windad/natives/NativeADEventListener;->onAdDetailDismiss()V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v1

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->H()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1, v2, v3}, Lcom/sigmob/sdk/nativead/b;->d(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->D()V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->m:Lcom/sigmob/sdk/nativead/j;

    if-eqz v1, :cond_2

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/nativead/j;->setVisibility(I)V

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->l:Lcom/sigmob/sdk/nativead/c;

    if-eqz v0, :cond_3

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/nativead/c;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_3
    return-void
.end method

.method public e(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    return-void
.end method

.method public f()V
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->D:Z

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->r()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->a()V

    const-string v0, "-----------onAdViewPauseImpression---------"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->D:Z

    :cond_0
    return-void
.end method

.method public g()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/n;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->D:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->z:Z

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/b;->u()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->D:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->r()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->c()V

    const-string v0, "------------onAdViewStartImpression------------"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public h()V
    .locals 3

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    if-nez v0, :cond_4

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->H()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_4

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->E:Z

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/util/HashSet;->clear()V

    :cond_0
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->E:Z

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "------------onAdViewRemoved----------"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->r()Lcom/sigmob/sdk/nativead/p;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-interface {v1}, Lcom/sigmob/sdk/nativead/p;->a()V

    :cond_1
    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->D:Z

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->i:Lcom/sigmob/sdk/nativead/l;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/sigmob/sdk/nativead/l;->hasWindowFocus()Z

    move-result v1

    if-eqz v1, :cond_2

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->y:Z

    :cond_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v1

    if-eqz v1, :cond_3

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->S:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {v1, v2, v0}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_3
    iget-boolean v2, p0, Lcom/sigmob/sdk/nativead/w;->B:Z

    if-nez v2, :cond_4

    iget-boolean v2, p0, Lcom/sigmob/sdk/nativead/w;->C:Z

    if-nez v2, :cond_4

    if-eqz v1, :cond_4

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->T:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {v1, v2, v0}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_4
    return-void
.end method

.method public i()V
    .locals 6

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->E:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    if-nez v0, :cond_6

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->E:Z

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "----------onAdViewShow------------"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->z:Z

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/w;->D:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->J()Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v2

    invoke-static {v1}, Lcom/czhj/sdk/common/utils/ViewUtil;->getActivityFromViewTop(Landroid/view/View;)Landroid/app/Activity;

    move-result-object v3

    iget-object v4, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const/4 v5, 0x0

    invoke-virtual {v2, v3, v4, v5}, Lcom/sigmob/sdk/nativead/b;->a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/views/q$b;)V

    invoke-virtual {v1, p0}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    if-eqz v1, :cond_2

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    invoke-virtual {v2, v1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v1, v2}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->G:Ljava/util/List;

    if-eqz v1, :cond_5

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    invoke-virtual {v1}, Ljava/util/HashSet;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->G:Ljava/util/List;

    invoke-virtual {v1, v2}, Ljava/util/HashSet;->addAll(Ljava/util/Collection;)Z

    goto :goto_1

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->G:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_4
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    invoke-virtual {v3, v2}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_4

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    invoke-virtual {v3, v2}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_5
    :goto_1
    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->I:Ljava/util/List;

    invoke-virtual {v1, v2}, Ljava/util/HashSet;->addAll(Ljava/util/Collection;)Z

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->j:Ljava/util/List;

    invoke-virtual {p0, v1, p0}, Lcom/sigmob/sdk/nativead/w;->a(Ljava/util/List;Landroid/view/View$OnTouchListener;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v1

    if-eqz v1, :cond_6

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->a:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {v1, v2, v0}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_6
    return-void
.end method

.method public j()Lcom/sigmob/sdk/base/common/ab;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSessionManager()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    if-nez v0, :cond_1

    new-instance v0, Lcom/sigmob/sdk/nativead/e;

    invoke-direct {v0}, Lcom/sigmob/sdk/nativead/e;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_1
    return-object v0
.end method

.method public k()Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object v0
.end method

.method public l()Lcom/sigmob/windad/natives/WindNativeAdData;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->a:Lcom/sigmob/windad/natives/WindNativeAdData;

    return-object v0
.end method

.method public m()Lcom/sigmob/sdk/nativead/j;
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->m:Lcom/sigmob/sdk/nativead/j;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadPrivacy()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/nativead/j;

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->H()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/nativead/j;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/w;->m:Lcom/sigmob/sdk/nativead/j;

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/nativead/j;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->m:Lcom/sigmob/sdk/nativead/j;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAppVersion()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCompanyName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/nativead/j;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->m:Lcom/sigmob/sdk/nativead/j;

    return-object v0
.end method

.method public n()Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->l:Lcom/sigmob/sdk/nativead/c;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/nativead/c;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public o()Lcom/sigmob/sdk/nativead/c;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->l:Lcom/sigmob/sdk/nativead/c;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/nativead/c;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/nativead/c;-><init>(Lcom/sigmob/sdk/base/common/m$b;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/w;->l:Lcom/sigmob/sdk/nativead/c;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->l:Lcom/sigmob/sdk/nativead/c;

    return-object v0
.end method

.method public onCancel()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->L:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;->onCancel()V

    :cond_0
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 0

    return-void
.end method

.method public onSelected(ILjava/lang/String;Z)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->L:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2, p3}, Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;->onSelected(ILjava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public onShow()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->L:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;->onShow()V

    :cond_0
    return-void
.end method

.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 5

    const/4 v0, 0x0

    if-nez p2, :cond_0

    return v0

    :cond_0
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result v1

    if-nez v1, :cond_1

    iget-wide v1, p0, Lcom/sigmob/sdk/nativead/w;->H:J

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-lez v1, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/sigmob/sdk/nativead/w;->H:J

    sub-long/2addr v1, v3

    const-wide/16 v3, 0x1f4

    cmp-long v1, v1, v3

    if-gez v1, :cond_1

    return v0

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v1, :cond_9

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_8

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v1

    const-string v3, "preview"

    iput-object v3, v1, Lcom/sigmob/sdk/base/models/ClickCommon;->click_scene:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->m:Lcom/sigmob/sdk/nativead/j;

    if-ne p1, v1, :cond_2

    const-string p1, "click mSigAppInfoView"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-direct {p0, v2, p2}, Lcom/sigmob/sdk/nativead/w;->a(ILandroid/view/MotionEvent;)V

    return v2

    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "click "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->j:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    move-object v1, p1

    goto :goto_0

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->j:Ljava/util/List;

    invoke-direct {p0, v1, p2}, Lcom/sigmob/sdk/nativead/w;->a(Ljava/util/List;Landroid/view/MotionEvent;)Landroid/view/View;

    move-result-object v1

    :goto_0
    const/4 v4, 0x3

    if-eqz v1, :cond_4

    const-string p1, "click ctaClickView"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    iput-object v3, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->click_scene:Ljava/lang/String;

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    const-string v0, "btn"

    iput-object v0, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->click_area:Ljava/lang/String;

    invoke-direct {p0, v4, p2}, Lcom/sigmob/sdk/nativead/w;->a(ILandroid/view/MotionEvent;)V

    return v2

    :cond_4
    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    invoke-virtual {v1, p1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    goto :goto_1

    :cond_5
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/nativead/w;->a(Ljava/util/HashSet;Landroid/view/MotionEvent;)Landroid/view/View;

    move-result-object p1

    :goto_1
    if-eqz p1, :cond_9

    const-string p1, "click mCreativeViews"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    if-eqz p1, :cond_6

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/nativead/n;->a(Landroid/view/MotionEvent;)Z

    move-result p1

    if-eqz p1, :cond_6

    move v0, v2

    :cond_6
    if-eqz v0, :cond_7

    goto :goto_2

    :cond_7
    const/4 v4, 0x2

    :goto_2
    invoke-direct {p0, v4, p2}, Lcom/sigmob/sdk/nativead/w;->a(ILandroid/view/MotionEvent;)V

    return v2

    :cond_8
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/sigmob/sdk/nativead/w;->H:J

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/w;->n:Landroid/view/MotionEvent;

    return v2

    :cond_9
    return v0
.end method

.method public p()I
    .locals 2

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->J()Landroid/view/View;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    if-eqz v1, :cond_0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v0

    if-lez v0, :cond_0

    return v0

    :cond_0
    const/16 v0, 0x500

    return v0
.end method

.method public q()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    return-object v0
.end method

.method public r()Lcom/sigmob/sdk/nativead/p;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->q()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/n;->getSigVideoAdController()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public s()D
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->r()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->e()I

    move-result v0

    int-to-double v0, v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public t()D
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->r()Lcom/sigmob/sdk/nativead/p;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/p;->f()I

    move-result v0

    int-to-double v0, v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public u()I
    .locals 4

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/w;->J()Landroid/view/View;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->q()Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v1

    if-lez v1, :cond_0

    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v0

    int-to-double v0, v0

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdPercent()D

    move-result-wide v2

    div-double/2addr v0, v2

    double-to-int v0, v0

    return v0

    :cond_0
    const/16 v0, 0x2d0

    return v0
.end method

.method public v()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/nativead/w;->a(Ljava/util/HashSet;Landroid/view/View$OnTouchListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->j:Ljava/util/List;

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/nativead/w;->a(Ljava/util/List;Landroid/view/View$OnTouchListener;)V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->k:Ljava/util/HashSet;

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->j:Ljava/util/List;

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->I:Ljava/util/List;

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->p:Lcom/sigmob/windad/natives/NativeADEventListener;

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->c:Lcom/sigmob/sdk/nativead/g;

    return-void
.end method

.method public w()V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "destroy"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->v()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/n;->c()V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSessionManager()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->S:Lcom/sigmob/sdk/base/common/a;

    const/4 v3, 0x0

    invoke-interface {v0, v2, v3}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/ab;->a()V

    :cond_1
    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/common/f;->d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->v:Lcom/sigmob/sdk/base/views/q;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->dismiss()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->v:Lcom/sigmob/sdk/base/views/q;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->c()V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->v:Lcom/sigmob/sdk/base/views/q;

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->x:Lcom/sigmob/sdk/nativead/r;

    if-eqz v0, :cond_3

    instance-of v2, v0, Lcom/sigmob/sdk/nativead/a;

    if-eqz v2, :cond_3

    check-cast v0, Lcom/sigmob/sdk/nativead/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/a;->b()V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->x:Lcom/sigmob/sdk/nativead/r;

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->L:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->i:Lcom/sigmob/sdk/nativead/l;

    if-eqz v0, :cond_4

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/nativead/l;->setAdVisibilityStatusChangeListener(Lcom/sigmob/sdk/nativead/l$a;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->i:Lcom/sigmob/sdk/nativead/l;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->i:Lcom/sigmob/sdk/nativead/l;

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->l:Lcom/sigmob/sdk/nativead/c;

    if-eqz v0, :cond_5

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/nativead/c;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->l:Lcom/sigmob/sdk/nativead/c;

    :cond_5
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/b;->k()V

    return-void
.end method

.method public x()Lcom/sigmob/sdk/nativead/b;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->o:Lcom/sigmob/sdk/nativead/b;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdConfig()Lcom/sigmob/sdk/base/common/h;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/nativead/b;

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/w;->o:Lcom/sigmob/sdk/nativead/b;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w;->o:Lcom/sigmob/sdk/nativead/b;

    return-object v0
.end method

.method public y()V
    .locals 5

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->x()Lcom/sigmob/sdk/nativead/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/nativead/b;->l()Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Lcom/sigmob/sdk/nativead/z;

    invoke-direct {v1}, Lcom/sigmob/sdk/nativead/z;-><init>()V

    const/4 v2, 0x2

    new-array v2, v2, [I

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v3, v2}, Lcom/sigmob/sdk/nativead/n;->getLocationOnScreen([I)V

    const/4 v3, 0x0

    aget v3, v2, v3

    invoke-virtual {v1, v3}, Lcom/sigmob/sdk/nativead/z;->a(I)V

    const/4 v3, 0x1

    aget v2, v2, v3

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/nativead/z;->b(I)V

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v2}, Lcom/sigmob/sdk/nativead/n;->getMeasuredWidth()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/nativead/z;->c(I)V

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v2}, Lcom/sigmob/sdk/nativead/n;->getMeasuredHeight()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/nativead/z;->d(I)V

    const-string v2, "attr"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putParcelable(Ljava/lang/String;Landroid/os/Parcelable;)V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v1}, Lcom/sigmob/sdk/nativead/n;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->s:Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-virtual {v1}, Lcom/sigmob/sdk/nativead/n;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/w;->t:Landroid/view/ViewGroup$LayoutParams;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->h:Lcom/sigmob/sdk/nativead/n;

    invoke-static {v1}, Lcom/sigmob/sdk/nativead/u;->a(Lcom/sigmob/sdk/nativead/i;)V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v2, "_SCENE_"

    const-string v4, "3"

    invoke-virtual {v1, v2, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    iput-boolean v3, p0, Lcom/sigmob/sdk/nativead/w;->r:Z

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w;->m:Lcom/sigmob/sdk/nativead/j;

    if-eqz v1, :cond_2

    const/4 v2, 0x4

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/nativead/j;->setVisibility(I)V

    :cond_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->o()Lcom/sigmob/sdk/nativead/c;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1, v2, v0}, Lcom/sigmob/sdk/nativead/c;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V

    return-void
.end method

.method public z()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/w;->k()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCTAText()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
