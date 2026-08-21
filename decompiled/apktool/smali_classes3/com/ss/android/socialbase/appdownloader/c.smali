.class public Lcom/ss/android/socialbase/appdownloader/c;
.super Ljava/lang/Object;


# instance fields
.field private ax:Z

.field private b:Z

.field private bj:Z

.field private bl:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

.field private bm:Z

.field private c:Ljava/lang/String;

.field private cd:I

.field private d:I

.field private df:Landroid/content/Context;

.field private dj:Z

.field private ev:I

.field private ey:J

.field private f:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

.field private fg:I

.field private fl:Lorg/json/JSONObject;

.field private fo:Z

.field private fw:Ljava/lang/String;

.field private g:Z

.field private gk:Z

.field private go:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private hq:Z

.field private i:Z

.field private j:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;",
            ">;"
        }
    .end annotation
.end field

.field private k:Z

.field private ka:I

.field private l:Ljava/lang/String;

.field private lc:I

.field private lu:Z

.field private m:Lcom/ss/android/socialbase/appdownloader/q/pp;

.field private mc:Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

.field private ms:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

.field private n:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

.field private oh:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

.field private oi:[I

.field private om:Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;

.field private ou:Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;

.field private oy:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

.field private p:J

.field private pp:Ljava/lang/String;

.field private pt:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private q:Ljava/lang/String;

.field private qx:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

.field private r:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

.field private re:Ljava/lang/String;

.field private rg:Landroid/app/Activity;

.field private rz:Z

.field private s:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

.field private su:Z

.field private t:Z

.field private un:Ljava/lang/String;

.field private ux:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;"
        }
    .end annotation
.end field

.field private v:Ljava/lang/String;

.field private vd:Z

.field private xv:Z

.field private y:Z

.field private yw:Ljava/lang/String;

.field private z:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 106
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 43
    iput-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->rz:Z

    const/4 v1, 0x0

    .line 44
    iput-boolean v1, p0, Lcom/ss/android/socialbase/appdownloader/c;->bm:Z

    .line 45
    iput-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->b:Z

    .line 46
    iput-boolean v1, p0, Lcom/ss/android/socialbase/appdownloader/c;->hq:Z

    const-string v1, "application/vnd.android.package-archive"

    .line 50
    iput-object v1, p0, Lcom/ss/android/socialbase/appdownloader/c;->un:Ljava/lang/String;

    const/4 v1, 0x5

    .line 62
    iput v1, p0, Lcom/ss/android/socialbase/appdownloader/c;->lc:I

    .line 66
    iput-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->k:Z

    .line 70
    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_NONE:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    iput-object v1, p0, Lcom/ss/android/socialbase/appdownloader/c;->oy:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    const/16 v1, 0x96

    .line 71
    iput v1, p0, Lcom/ss/android/socialbase/appdownloader/c;->ev:I

    .line 73
    iput-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->ax:Z

    .line 84
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/ss/android/socialbase/appdownloader/c;->j:Ljava/util/List;

    .line 89
    iput-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->t:Z

    .line 94
    iput-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->vd:Z

    .line 107
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->df:Landroid/content/Context;

    .line 108
    iput-object p2, p0, Lcom/ss/android/socialbase/appdownloader/c;->q:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public ax()Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;
    .locals 1

    .line 276
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->ms:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    return-object v0
.end method

.method public b(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 477
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->bj:Z

    return-object p0
.end method

.method public b()Ljava/lang/String;
    .locals 1

    .line 160
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->v:Ljava/lang/String;

    return-object v0
.end method

.method public bj()Z
    .locals 1

    .line 256
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->ax:Z

    return v0
.end method

.method public bl()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;",
            ">;"
        }
    .end annotation

    .line 295
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->j:Ljava/util/List;

    return-object v0
.end method

.method public bm(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 566
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->h:Ljava/lang/String;

    return-object p0
.end method

.method public bm(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 472
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->lu:Z

    return-object p0
.end method

.method public bm()Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;
    .locals 1

    .line 156
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->f:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    return-object v0
.end method

.method public c(I)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 575
    iput p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->ka:I

    return-object p0
.end method

.method public c(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 427
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->re:Ljava/lang/String;

    return-object p0
.end method

.method public c(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 422
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->fo:Z

    return-object p0
.end method

.method public c()Z
    .locals 1

    .line 140
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->bm:Z

    return v0
.end method

.method public cd()Ljava/lang/String;
    .locals 1

    .line 272
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->c:Ljava/lang/String;

    return-object v0
.end method

.method public d()Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;
    .locals 1

    .line 236
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->n:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    return-object v0
.end method

.method public df(I)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 442
    iput p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->lc:I

    return-object p0
.end method

.method public df(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 336
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->c:Ljava/lang/String;

    return-object p0
.end method

.method public df(Ljava/util/List;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/ss/android/socialbase/appdownloader/c;"
        }
    .end annotation

    .line 584
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->pt:Ljava/util/List;

    return-object p0
.end method

.method public df(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 362
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->bm:Z

    return-object p0
.end method

.method public df()Ljava/lang/String;
    .locals 1

    .line 124
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->pp:Ljava/lang/String;

    return-object v0
.end method

.method public dj()I
    .locals 1

    .line 240
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->ev:I

    return v0
.end method

.method public ev()Z
    .locals 1

    .line 268
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->i:Z

    return v0
.end method

.method public ey()Z
    .locals 1

    .line 327
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->t:Z

    return v0
.end method

.method public f(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 507
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->i:Z

    return-object p0
.end method

.method public f()Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;
    .locals 1

    .line 172
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->ou:Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;

    return-object v0
.end method

.method public fg()Ljava/lang/String;
    .locals 1

    .line 571
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->h:Ljava/lang/String;

    return-object v0
.end method

.method public fl()Z
    .locals 1

    .line 311
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->vd:Z

    return v0
.end method

.method public fo()I
    .locals 1

    .line 212
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->lc:I

    return v0
.end method

.method public fw(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 432
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->l:Ljava/lang/String;

    return-object p0
.end method

.method public fw(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 452
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->dj:Z

    return-object p0
.end method

.method public fw()Z
    .locals 1

    .line 144
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->b:Z

    return v0
.end method

.method public g()Z
    .locals 1

    .line 260
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->gk:Z

    return v0
.end method

.method public getActivity()Landroid/app/Activity;
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->rg:Landroid/app/Activity;

    return-object v0
.end method

.method public getContext()Landroid/content/Context;
    .locals 1

    .line 116
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->df:Landroid/content/Context;

    return-object v0
.end method

.method public gk()Z
    .locals 1

    .line 299
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->su:Z

    return v0
.end method

.method public go()I
    .locals 1

    .line 244
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->cd:I

    return v0
.end method

.method public h()Ljava/lang/String;
    .locals 1

    .line 315
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->yw:Ljava/lang/String;

    return-object v0
.end method

.method public hq(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 482
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->g:Z

    return-object p0
.end method

.method public hq()Ljava/lang/String;
    .locals 1

    .line 164
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->un:Ljava/lang/String;

    return-object v0
.end method

.method public i()Z
    .locals 1

    .line 228
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->k:Z

    return v0
.end method

.method public j()[I
    .locals 1

    .line 319
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->oi:[I

    return-object v0
.end method

.method public k()Z
    .locals 1

    .line 248
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->bj:Z

    return v0
.end method

.method public ka()Z
    .locals 1

    .line 323
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->xv:Z

    return v0
.end method

.method public l()Z
    .locals 1

    .line 220
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->dj:Z

    return v0
.end method

.method public lc()Z
    .locals 1

    .line 232
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->lu:Z

    return v0
.end method

.method public lu()Z
    .locals 1

    .line 252
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->g:Z

    return v0
.end method

.method public m()Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;
    .locals 1

    .line 288
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->mc:Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    return-object v0
.end method

.method public mc()Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;
    .locals 1

    .line 292
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->s:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    return-object v0
.end method

.method public ms()Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;
    .locals 1

    .line 280
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->om:Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;

    return-object v0
.end method

.method public n()Ljava/lang/String;
    .locals 1

    .line 200
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->re:Ljava/lang/String;

    return-object v0
.end method

.method public oh(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 497
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->ax:Z

    return-object p0
.end method

.method public oh()Z
    .locals 1

    .line 168
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->z:Z

    return v0
.end method

.method public om()Lcom/ss/android/socialbase/appdownloader/q/pp;
    .locals 1

    .line 284
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->m:Lcom/ss/android/socialbase/appdownloader/q/pp;

    return-object v0
.end method

.method public ou()Ljava/lang/String;
    .locals 1

    .line 204
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->l:Ljava/lang/String;

    return-object v0
.end method

.method public oy()Lcom/ss/android/socialbase/downloader/constants/EnqueueType;
    .locals 1

    .line 264
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->oy:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    return-object v0
.end method

.method public p()Ljava/lang/String;
    .locals 1

    .line 224
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->go:Ljava/lang/String;

    return-object v0
.end method

.method public pp(I)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 492
    iput p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->cd:I

    return-object p0
.end method

.method public pp(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 387
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->un:Ljava/lang/String;

    return-object p0
.end method

.method public pp(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 417
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->y:Z

    return-object p0
.end method

.method public pp()Z
    .locals 1

    .line 136
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->rz:Z

    return v0
.end method

.method public pt(I)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 487
    iput p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->ev:I

    return-object p0
.end method

.method public pt(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 382
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->v:Ljava/lang/String;

    return-object p0
.end method

.method public pt(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 392
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->z:Z

    return-object p0
.end method

.method public pt()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;"
        }
    .end annotation

    .line 132
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->ux:Ljava/util/List;

    return-object v0
.end method

.method public q(I)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 447
    iput p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->d:I

    return-object p0
.end method

.method public q(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 341
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->fw:Ljava/lang/String;

    return-object p0
.end method

.method public q(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 367
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->hq:Z

    return-object p0
.end method

.method public q()Ljava/lang/String;
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->fw:Ljava/lang/String;

    return-object v0
.end method

.method public qx()I
    .locals 1

    .line 192
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->fg:I

    return v0
.end method

.method public r()Z
    .locals 1

    .line 188
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->fo:Z

    return v0
.end method

.method public re()I
    .locals 1

    .line 216
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->d:I

    return v0
.end method

.method public rg(J)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 437
    iput-wide p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->p:J

    return-object p0
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/constants/EnqueueType;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 502
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->oy:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    return-object p0
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 2

    .line 607
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->j:Ljava/util/List;

    monitor-enter v0

    if-eqz p1, :cond_1

    .line 608
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/c;->j:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 611
    :cond_0
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/c;->j:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 612
    monitor-exit v0

    return-object p0

    .line 609
    :cond_1
    :goto_0
    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p1

    .line 612
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 593
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->bl:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    return-object p0
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 527
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->mc:Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    return-object p0
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 372
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->oh:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    return-object p0
.end method

.method public rg(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 331
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->pp:Ljava/lang/String;

    return-object p0
.end method

.method public rg(Ljava/util/List;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)",
            "Lcom/ss/android/socialbase/appdownloader/c;"
        }
    .end annotation

    .line 346
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->ux:Ljava/util/List;

    return-object p0
.end method

.method public rg(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 602
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->fl:Lorg/json/JSONObject;

    return-object p0
.end method

.method public rg(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 351
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->rz:Z

    return-object p0
.end method

.method public rg()Ljava/lang/String;
    .locals 1

    .line 120
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->q:Ljava/lang/String;

    return-object v0
.end method

.method public rg(I)V
    .locals 0

    .line 196
    iput p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->fg:I

    return-void
.end method

.method public rz(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 556
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->yw:Ljava/lang/String;

    return-object p0
.end method

.method public rz(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 467
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->k:Z

    return-object p0
.end method

.method public rz()Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;
    .locals 1

    .line 152
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->oh:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    return-object v0
.end method

.method public s()I
    .locals 1

    .line 303
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->ka:I

    return v0
.end method

.method public su()J
    .locals 2

    .line 307
    iget-wide v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->ey:J

    return-wide v0
.end method

.method public t()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;
    .locals 1

    .line 589
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->bl:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    return-object v0
.end method

.method public un(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 627
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->t:Z

    return-object p0
.end method

.method public un()Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;
    .locals 1

    .line 180
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->r:Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    return-object v0
.end method

.method public ux(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 457
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->go:Ljava/lang/String;

    return-object p0
.end method

.method public ux(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 462
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->gk:Z

    return-object p0
.end method

.method public ux()Z
    .locals 1

    .line 148
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->hq:Z

    return v0
.end method

.method public v(Z)Lcom/ss/android/socialbase/appdownloader/c;
    .locals 0

    .line 622
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/c;->xv:Z

    return-object p0
.end method

.method public v()Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;
    .locals 1

    .line 176
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->qx:Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    return-object v0
.end method

.method public vd()Lorg/json/JSONObject;
    .locals 1

    .line 598
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->fl:Lorg/json/JSONObject;

    return-object v0
.end method

.method public xv()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 580
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->pt:Ljava/util/List;

    return-object v0
.end method

.method public y()J
    .locals 2

    .line 208
    iget-wide v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->p:J

    return-wide v0
.end method

.method public z()Z
    .locals 1

    .line 184
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c;->y:Z

    return v0
.end method
