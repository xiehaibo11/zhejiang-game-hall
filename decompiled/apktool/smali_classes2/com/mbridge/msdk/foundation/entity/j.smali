.class public final Lcom/mbridge/msdk/foundation/entity/j;
.super Ljava/lang/Object;
.source "LoadTime.java"


# instance fields
.field private a:I

.field private b:Ljava/lang/String;

.field private c:I

.field private d:Ljava/lang/String;

.field private e:I

.field private f:I

.field private g:I

.field private h:Ljava/lang/String;

.field private i:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 62
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(ILjava/lang/String;ILjava/lang/String;III)V
    .locals 0

    .line 49
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 50
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/j;->a:I

    .line 51
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/entity/j;->b:Ljava/lang/String;

    .line 52
    iput p3, p0, Lcom/mbridge/msdk/foundation/entity/j;->c:I

    .line 53
    iput-object p4, p0, Lcom/mbridge/msdk/foundation/entity/j;->d:Ljava/lang/String;

    .line 54
    iput p5, p0, Lcom/mbridge/msdk/foundation/entity/j;->e:I

    .line 55
    iput p6, p0, Lcom/mbridge/msdk/foundation/entity/j;->f:I

    .line 56
    iput p7, p0, Lcom/mbridge/msdk/foundation/entity/j;->g:I

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 36
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/j;->i:I

    return v0
.end method

.method public final a(I)V
    .locals 0

    .line 44
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/j;->i:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/j;->b:Ljava/lang/String;

    return-void
.end method

.method public final b()I
    .locals 1

    .line 68
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/j;->a:I

    return v0
.end method

.method public final b(I)V
    .locals 0

    .line 74
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/j;->a:I

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 121
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/j;->d:Ljava/lang/String;

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 80
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/j;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final c(I)V
    .locals 0

    .line 109
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/j;->c:I

    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 166
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/j;->h:Ljava/lang/String;

    return-void
.end method

.method public final d()I
    .locals 1

    .line 103
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/j;->c:I

    return v0
.end method

.method public final d(I)V
    .locals 0

    .line 133
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/j;->e:I

    return-void
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/j;->d:Ljava/lang/String;

    return-object v0
.end method

.method public final e(I)V
    .locals 0

    .line 157
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/j;->g:I

    return-void
.end method

.method public final f()I
    .locals 1

    .line 127
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/j;->e:I

    return v0
.end method

.method public final g()I
    .locals 1

    .line 139
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/j;->f:I

    return v0
.end method

.method public final h()I
    .locals 1

    .line 151
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/j;->g:I

    return v0
.end method

.method public final i()Ljava/lang/String;
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/j;->h:Ljava/lang/String;

    return-object v0
.end method
