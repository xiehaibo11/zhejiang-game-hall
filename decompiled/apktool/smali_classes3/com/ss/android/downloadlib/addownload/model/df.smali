.class public Lcom/ss/android/downloadlib/addownload/model/df;
.super Ljava/lang/Object;


# instance fields
.field public c:Ljava/lang/String;

.field public df:J

.field public fw:Ljava/lang/String;

.field public pp:Ljava/lang/String;

.field public pt:Ljava/lang/String;

.field public q:Ljava/lang/String;

.field public rg:J

.field public rz:Ljava/lang/String;

.field public final ux:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/util/Pair<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/df;->ux:Ljava/util/List;

    return-void
.end method

.method public static rg(JJ)J
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p0, v0

    if-lez v0, :cond_0

    goto :goto_0

    :cond_0
    move-wide p0, p2

    :goto_0
    return-wide p0
.end method


# virtual methods
.method public rg()J
    .locals 4

    .line 28
    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/model/df;->rg:J

    iget-wide v2, p0, Lcom/ss/android/downloadlib/addownload/model/df;->df:J

    invoke-static {v0, v1, v2, v3}, Lcom/ss/android/downloadlib/addownload/model/df;->rg(JJ)J

    move-result-wide v0

    return-wide v0
.end method
