.class public abstract Lcom/tkay/expressad/exoplayer/h/b/a;
.super Lcom/tkay/expressad/exoplayer/h/b/i;


# instance fields
.field public final a:J

.field private k:Lcom/tkay/expressad/exoplayer/h/b/b;

.field private l:[I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/j/h;Lcom/tkay/expressad/exoplayer/j/k;Lcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJ)V
    .locals 12

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move/from16 v4, p4

    move-object/from16 v5, p5

    move-wide/from16 v6, p6

    move-wide/from16 v8, p8

    move-wide/from16 v10, p12

    .line 59
    invoke-direct/range {v0 .. v11}, Lcom/tkay/expressad/exoplayer/h/b/i;-><init>(Lcom/tkay/expressad/exoplayer/j/h;Lcom/tkay/expressad/exoplayer/j/k;Lcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJ)V

    move-wide/from16 v1, p10

    .line 61
    iput-wide v1, v0, Lcom/tkay/expressad/exoplayer/h/b/a;->a:J

    return-void
.end method


# virtual methods
.method public final a(I)I
    .locals 1

    .line 80
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/a;->l:[I

    aget p1, v0, p1

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/b/b;)V
    .locals 0

    .line 71
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/a;->k:Lcom/tkay/expressad/exoplayer/h/b/b;

    .line 72
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/b/b;->a()[I

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/a;->l:[I

    return-void
.end method

.method protected final c()Lcom/tkay/expressad/exoplayer/h/b/b;
    .locals 1

    .line 87
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/a;->k:Lcom/tkay/expressad/exoplayer/h/b/b;

    return-object v0
.end method
