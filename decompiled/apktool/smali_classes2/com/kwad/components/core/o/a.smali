.class public final Lcom/kwad/components/core/o/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/o/a$a;
    }
.end annotation


# static fields
.field private static Py:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method protected constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(JLcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/report/r;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/report/r;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/kwad/sdk/core/report/r;-><init>(JLcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)V

    return-object v0
.end method

.method private static b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/report/r;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/sdk/core/report/r;-><init>(JLcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-object v0
.end method

.method public static pA()Lcom/kwad/components/core/o/a;
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/o/a$a;->pE()Lcom/kwad/components/core/o/a;

    move-result-object v0

    return-object v0
.end method

.method public static z(J)Lcom/kwad/sdk/core/report/r;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/report/r;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/report/r;-><init>(J)V

    return-object v0
.end method


# virtual methods
.method public final U(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    const-wide/16 v0, 0x2717

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final V(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    const-wide/16 v0, 0x27e0

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final W(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    const-wide/16 v0, 0x27e1

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final a(ILcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)V
    .locals 2

    int-to-long v0, p1

    invoke-static {v0, v1, p2, p3}, Lcom/kwad/components/core/o/a;->a(JLcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final a(JI)V
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zR()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const-wide/16 v0, 0x4e20

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/r;->timestamp:J

    iput p3, v0, Lcom/kwad/sdk/core/report/r;->ast:I

    iput-wide p1, v0, Lcom/kwad/sdk/core/report/r;->posId:J

    const p1, 0x2e4c58

    iput p1, v0, Lcom/kwad/sdk/core/report/r;->asu:I

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final a(Lcom/kwad/components/core/n/a/b;)V
    .locals 3

    const-wide/16 v0, 0x27e7

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    iget-object v1, p1, Lcom/kwad/components/core/n/a/b;->Pp:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/report/r;->Pp:Ljava/lang/String;

    iget-wide v1, p1, Lcom/kwad/components/core/n/a/b;->Pv:J

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/r;->Pv:J

    iget-wide v1, p1, Lcom/kwad/components/core/n/a/b;->Pw:J

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/r;->Pw:J

    iget-wide v1, p1, Lcom/kwad/components/core/n/a/b;->Px:J

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/r;->Px:J

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;II)V
    .locals 2

    const-wide/16 v0, 0x2ee6

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    iput p2, p1, Lcom/kwad/sdk/core/report/r;->UQ:I

    iput p3, p1, Lcom/kwad/sdk/core/report/r;->arz:I

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;JI)V
    .locals 3

    const-wide/16 v0, 0x68

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/utils/l;->cC(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/r;->clickTime:J

    iput-wide p2, v0, Lcom/kwad/sdk/core/report/r;->arY:J

    iput p4, v0, Lcom/kwad/sdk/core/report/r;->arZ:I

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;JJI)V
    .locals 2

    const-wide/16 v0, 0x27db

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    iput-wide p2, p1, Lcom/kwad/sdk/core/report/r;->Xf:J

    iput-wide p4, p1, Lcom/kwad/sdk/core/report/r;->blockDuration:J

    int-to-long p2, p6

    iput-wide p2, p1, Lcom/kwad/sdk/core/report/r;->ary:J

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const-wide/16 v0, 0x2713

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    iput-object p2, p1, Lcom/kwad/sdk/core/report/r;->arJ:Ljava/lang/String;

    iput-object p3, p1, Lcom/kwad/sdk/core/report/r;->errorMsg:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/internal/api/SceneImpl;ZLjava/lang/String;)V
    .locals 2

    const-wide/16 v0, 0x27e8

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    iput-boolean p2, v0, Lcom/kwad/sdk/core/report/r;->arU:Z

    iput-object p3, v0, Lcom/kwad/sdk/core/report/r;->arV:Ljava/lang/String;

    iput-object p1, v0, Lcom/kwad/sdk/core/report/r;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final a(ZLjava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    const-wide/16 v0, 0x27dc

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    iput-boolean p1, v0, Lcom/kwad/sdk/core/report/r;->arU:Z

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_1

    new-instance p1, Lorg/json/JSONArray;

    invoke-direct {p1}, Lorg/json/JSONArray;-><init>()V

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {p1, v1}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    :cond_0
    iput-object p1, v0, Lcom/kwad/sdk/core/report/r;->arT:Lorg/json/JSONArray;

    :cond_1
    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final aA(I)V
    .locals 2

    const-wide/16 v0, 0x2778

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    iput p1, v0, Lcom/kwad/sdk/core/report/r;->arK:I

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final aB(I)V
    .locals 2

    const-wide/16 v0, 0x277b

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    iput p1, v0, Lcom/kwad/sdk/core/report/r;->arL:I

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final ai(Landroid/content/Context;)V
    .locals 2

    const-wide/16 v0, 0xb

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->xA()Ljava/util/List;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/kwad/sdk/utils/InstalledAppInfoManager;->c(Landroid/content/Context;Ljava/util/List;)[Lorg/json/JSONArray;

    move-result-object p1

    const/4 v1, 0x0

    aget-object v1, p1, v1

    iput-object v1, v0, Lcom/kwad/sdk/core/report/r;->arC:Lorg/json/JSONArray;

    const/4 v1, 0x1

    aget-object p1, p1, v1

    iput-object p1, v0, Lcom/kwad/sdk/core/report/r;->arD:Lorg/json/JSONArray;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/response/model/AdTemplate;II)V
    .locals 2

    const-wide/16 v0, 0x2712

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/r;->Cf()V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->bY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->ci(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    iput-object p1, v0, Lcom/kwad/sdk/core/report/r;->arJ:Ljava/lang/String;

    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "what"

    invoke-virtual {p1, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "extra"

    invoke-virtual {p1, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/kwad/sdk/core/report/r;->errorMsg:Ljava/lang/String;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_1
    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const-wide/16 v0, 0x2715

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->bY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->ci(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    iput-object p1, v0, Lcom/kwad/sdk/core/report/r;->arJ:Ljava/lang/String;

    iput-object p2, v0, Lcom/kwad/sdk/core/report/r;->arJ:Ljava/lang/String;

    iput-object p3, v0, Lcom/kwad/sdk/core/report/r;->errorMsg:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final c(Lcom/kwad/sdk/core/response/model/AdTemplate;ILjava/lang/String;)V
    .locals 2

    const-wide/16 v0, 0x277d

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    const/4 p2, 0x1

    iput p2, p1, Lcom/kwad/sdk/core/report/r;->arL:I

    iput-object p3, p1, Lcom/kwad/sdk/core/report/r;->arM:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final c(Lorg/json/JSONArray;)V
    .locals 2

    const-wide/16 v0, 0x27d8

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    iput-object p1, v0, Lcom/kwad/sdk/core/report/r;->arO:Lorg/json/JSONArray;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final d(Lcom/kwad/sdk/core/response/model/AdTemplate;ILjava/lang/String;)V
    .locals 2

    const-wide/16 v0, 0x6b

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    iput p2, p1, Lcom/kwad/sdk/core/report/r;->errorCode:I

    iput-object p3, p1, Lcom/kwad/sdk/core/report/r;->errorMsg:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final e(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 2

    const-wide/16 v0, 0x2fa8

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    iput-object p1, v0, Lcom/kwad/sdk/core/report/r;->asr:Ljava/lang/String;

    iput-object p2, v0, Lcom/kwad/sdk/core/report/r;->ass:Ljava/lang/String;

    invoke-static {v0, p3}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;Z)V

    return-void
.end method

.method public final e(Lorg/json/JSONObject;I)V
    .locals 2

    const-wide/16 v0, 0x27d9

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    const-string v1, "appChangeType"

    invoke-static {p1, v1, p2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iput-object p1, v0, Lcom/kwad/sdk/core/report/r;->arN:Lorg/json/JSONObject;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final f(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V
    .locals 2

    const-wide/16 v0, 0x277c

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    iput p2, p1, Lcom/kwad/sdk/core/report/r;->arL:I

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final f(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V
    .locals 2

    const-wide/16 v0, 0x27da

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    iput-wide p2, p1, Lcom/kwad/sdk/core/report/r;->arS:J

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final g(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V
    .locals 4

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zR()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    const-wide/16 v1, 0x4e20

    invoke-static {v1, v2}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/kwad/sdk/core/report/r;->timestamp:J

    iput p2, v1, Lcom/kwad/sdk/core/report/r;->ast:I

    iget-object p2, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->trace:Ljava/lang/String;

    iput-object p2, v1, Lcom/kwad/sdk/core/report/r;->trace:Ljava/lang/String;

    const p2, 0x2e4c58

    iput p2, v1, Lcom/kwad/sdk/core/report/r;->asu:I

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->bZ(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide p1

    iput-wide p1, v1, Lcom/kwad/sdk/core/report/r;->posId:J

    invoke-static {v1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final g(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V
    .locals 2

    const-wide/16 v0, 0x27de

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    iput-wide p2, p1, Lcom/kwad/sdk/core/report/r;->asi:J

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final h(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V
    .locals 2

    const-wide/16 v0, 0x27df

    invoke-static {v0, v1, p1}, Lcom/kwad/components/core/o/a;->b(JLcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    iput-wide p2, p1, Lcom/kwad/sdk/core/report/r;->asj:J

    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final pB()V
    .locals 1

    sget-boolean v0, Lcom/kwad/components/core/o/a;->Py:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/components/core/o/a;->Py:Z

    new-instance v0, Lcom/kwad/components/core/o/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/o/a$1;-><init>(Lcom/kwad/components/core/o/a;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final pC()V
    .locals 2

    const-wide/16 v0, 0x2775

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method public final pD()V
    .locals 2

    const-wide/16 v0, 0x277a

    invoke-static {v0, v1}, Lcom/kwad/components/core/o/a;->z(J)Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method
