.class public final Lcom/tkay/expressad/exoplayer/e/a/j;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/e/a/j$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1


# instance fields
.field public final c:I

.field public final d:I

.field public final e:J

.field public final f:J

.field public final g:J

.field public final h:Lcom/tkay/expressad/exoplayer/m;

.field public final i:I

.field public final j:[J

.field public final k:[J

.field public final l:I

.field private final m:[Lcom/tkay/expressad/exoplayer/e/a/k;


# direct methods
.method public constructor <init>(IIJJJLcom/tkay/expressad/exoplayer/m;I[Lcom/tkay/expressad/exoplayer/e/a/k;I[J[J)V
    .locals 0

    .line 104
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 105
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->c:I

    .line 106
    iput p2, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->d:I

    .line 107
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->e:J

    .line 108
    iput-wide p5, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->f:J

    .line 109
    iput-wide p7, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->g:J

    .line 110
    iput-object p9, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->h:Lcom/tkay/expressad/exoplayer/m;

    .line 111
    iput p10, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->i:I

    .line 112
    iput-object p11, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->m:[Lcom/tkay/expressad/exoplayer/e/a/k;

    .line 113
    iput p12, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->l:I

    .line 114
    iput-object p13, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->j:[J

    .line 115
    iput-object p14, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->k:[J

    return-void
.end method


# virtual methods
.method public final a(I)Lcom/tkay/expressad/exoplayer/e/a/k;
    .locals 1

    .line 126
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/j;->m:[Lcom/tkay/expressad/exoplayer/e/a/k;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 127
    :cond_0
    aget-object p1, v0, p1

    return-object p1
.end method
