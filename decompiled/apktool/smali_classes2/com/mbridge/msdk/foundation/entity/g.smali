.class public final Lcom/mbridge/msdk/foundation/entity/g;
.super Ljava/lang/Object;
.source "FqInfo.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:I

.field private d:J


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 17
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/g;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 37
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/g;->c:I

    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 45
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/g;->d:J

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/g;->a:Ljava/lang/String;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/g;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/g;->b:Ljava/lang/String;

    return-void
.end method

.method public final c()I
    .locals 1

    .line 33
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/g;->c:I

    return v0
.end method

.method public final d()J
    .locals 2

    .line 41
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/g;->d:J

    return-wide v0
.end method
