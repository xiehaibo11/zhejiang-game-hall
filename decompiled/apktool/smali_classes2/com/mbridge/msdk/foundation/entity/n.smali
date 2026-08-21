.class public final Lcom/mbridge/msdk/foundation/entity/n;
.super Ljava/lang/Object;
.source "ReportData.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:I

.field private f:I

.field private g:J


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 36
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/n;->a:Ljava/lang/String;

    .line 37
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/entity/n;->b:Ljava/lang/String;

    .line 38
    iput-object p3, p0, Lcom/mbridge/msdk/foundation/entity/n;->c:Ljava/lang/String;

    .line 39
    iput-object p4, p0, Lcom/mbridge/msdk/foundation/entity/n;->d:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 45
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/n;->a:Ljava/lang/String;

    .line 46
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/entity/n;->b:Ljava/lang/String;

    .line 47
    iput-object p3, p0, Lcom/mbridge/msdk/foundation/entity/n;->c:Ljava/lang/String;

    .line 48
    iput-object p4, p0, Lcom/mbridge/msdk/foundation/entity/n;->d:Ljava/lang/String;

    .line 49
    iput p5, p0, Lcom/mbridge/msdk/foundation/entity/n;->f:I

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 23
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/n;->d:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 89
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/n;->e:I

    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 97
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/n;->g:J

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/n;->d:Ljava/lang/String;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 53
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/n;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 57
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/n;->a:Ljava/lang/String;

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/n;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/n;->b:Ljava/lang/String;

    return-void
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/n;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/n;->c:Ljava/lang/String;

    return-void
.end method

.method public final e()I
    .locals 1

    .line 77
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/n;->f:I

    return v0
.end method

.method public final f()I
    .locals 1

    .line 85
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/n;->e:I

    return v0
.end method

.method public final g()J
    .locals 2

    .line 93
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/n;->g:J

    return-wide v0
.end method
