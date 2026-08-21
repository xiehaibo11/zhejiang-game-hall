.class public final Lcom/tkay/expressad/exoplayer/i/a$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/i/f$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/i/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/j/d;

.field private final b:I

.field private final c:I

.field private final d:I

.field private final e:F

.field private final f:F

.field private final g:J

.field private final h:Lcom/tkay/expressad/exoplayer/k/c;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/j/d;)V
    .locals 7

    .line 54
    sget-object v6, Lcom/tkay/expressad/exoplayer/k/c;->a:Lcom/tkay/expressad/exoplayer/k/c;

    const/16 v2, 0x2710

    const/16 v3, 0x61a8

    const/16 v4, 0x61a8

    const/high16 v5, 0x3f400000    # 0.75f

    move-object v0, p0

    move-object v1, p1

    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/i/a$a;-><init>(Lcom/tkay/expressad/exoplayer/j/d;IIIFLcom/tkay/expressad/exoplayer/k/c;)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/j/d;IIIF)V
    .locals 7

    .line 85
    sget-object v6, Lcom/tkay/expressad/exoplayer/k/c;->a:Lcom/tkay/expressad/exoplayer/k/c;

    move-object v0, p0

    move-object v1, p1

    move v2, p2

    move v3, p3

    move v4, p4

    move v5, p5

    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/i/a$a;-><init>(Lcom/tkay/expressad/exoplayer/j/d;IIIFLcom/tkay/expressad/exoplayer/k/c;)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/j/d;IIIFLcom/tkay/expressad/exoplayer/k/c;)V
    .locals 0

    .line 129
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 130
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/i/a$a;->a:Lcom/tkay/expressad/exoplayer/j/d;

    .line 131
    iput p2, p0, Lcom/tkay/expressad/exoplayer/i/a$a;->b:I

    .line 132
    iput p3, p0, Lcom/tkay/expressad/exoplayer/i/a$a;->c:I

    .line 133
    iput p4, p0, Lcom/tkay/expressad/exoplayer/i/a$a;->d:I

    .line 134
    iput p5, p0, Lcom/tkay/expressad/exoplayer/i/a$a;->e:F

    const/high16 p1, 0x3f400000    # 0.75f

    .line 135
    iput p1, p0, Lcom/tkay/expressad/exoplayer/i/a$a;->f:F

    const-wide/16 p1, 0x7d0

    .line 137
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/i/a$a;->g:J

    .line 138
    iput-object p6, p0, Lcom/tkay/expressad/exoplayer/i/a$a;->h:Lcom/tkay/expressad/exoplayer/k/c;

    return-void
.end method

.method private varargs b(Lcom/tkay/expressad/exoplayer/h/ae;[I)Lcom/tkay/expressad/exoplayer/i/a;
    .locals 17

    move-object/from16 v0, p0

    .line 143
    new-instance v16, Lcom/tkay/expressad/exoplayer/i/a;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->a:Lcom/tkay/expressad/exoplayer/j/d;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->b:I

    int-to-long v5, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->c:I

    int-to-long v7, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->d:I

    int-to-long v9, v1

    iget v11, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->e:F

    iget v12, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->f:F

    iget-wide v13, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->g:J

    iget-object v15, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->h:Lcom/tkay/expressad/exoplayer/k/c;

    move-object/from16 v1, v16

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    invoke-direct/range {v1 .. v15}, Lcom/tkay/expressad/exoplayer/i/a;-><init>(Lcom/tkay/expressad/exoplayer/h/ae;[ILcom/tkay/expressad/exoplayer/j/d;JJJFFJLcom/tkay/expressad/exoplayer/k/c;)V

    return-object v16
.end method


# virtual methods
.method public final synthetic a(Lcom/tkay/expressad/exoplayer/h/ae;[I)Lcom/tkay/expressad/exoplayer/i/f;
    .locals 17

    move-object/from16 v0, p0

    .line 1143
    new-instance v16, Lcom/tkay/expressad/exoplayer/i/a;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->a:Lcom/tkay/expressad/exoplayer/j/d;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->b:I

    int-to-long v5, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->c:I

    int-to-long v7, v1

    iget v1, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->d:I

    int-to-long v9, v1

    iget v11, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->e:F

    iget v12, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->f:F

    iget-wide v13, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->g:J

    iget-object v15, v0, Lcom/tkay/expressad/exoplayer/i/a$a;->h:Lcom/tkay/expressad/exoplayer/k/c;

    move-object/from16 v1, v16

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    invoke-direct/range {v1 .. v15}, Lcom/tkay/expressad/exoplayer/i/a;-><init>(Lcom/tkay/expressad/exoplayer/h/ae;[ILcom/tkay/expressad/exoplayer/j/d;JJJFFJLcom/tkay/expressad/exoplayer/k/c;)V

    return-object v16
.end method
