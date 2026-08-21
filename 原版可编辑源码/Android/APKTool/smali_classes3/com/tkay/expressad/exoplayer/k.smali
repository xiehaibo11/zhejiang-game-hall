.class final Lcom/tkay/expressad/exoplayer/k;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Handler$Callback;
.implements Lcom/tkay/expressad/exoplayer/e$a;
.implements Lcom/tkay/expressad/exoplayer/h/r$a;
.implements Lcom/tkay/expressad/exoplayer/h/s$b;
.implements Lcom/tkay/expressad/exoplayer/i/h$a;
.implements Lcom/tkay/expressad/exoplayer/x$a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/k$c;,
        Lcom/tkay/expressad/exoplayer/k$a;,
        Lcom/tkay/expressad/exoplayer/k$b;,
        Lcom/tkay/expressad/exoplayer/k$d;
    }
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field public static final c:I = 0x2

.field private static final d:Ljava/lang/String; = "ExoPlayerImplInternal"

.field private static final e:I = 0x0

.field private static final f:I = 0x1

.field private static final g:I = 0x2

.field private static final h:I = 0x3

.field private static final i:I = 0x4

.field private static final j:I = 0x5

.field private static final k:I = 0x6

.field private static final l:I = 0x7

.field private static final m:I = 0x8

.field private static final n:I = 0x9

.field private static final o:I = 0xa

.field private static final p:I = 0xb

.field private static final q:I = 0xc

.field private static final r:I = 0xd

.field private static final s:I = 0xe

.field private static final t:I = 0xf

.field private static final u:I = 0xa

.field private static final v:I = 0xa

.field private static final w:I = 0x3e8

.field private static final x:J = 0x1f4L


# instance fields
.field private final A:Lcom/tkay/expressad/exoplayer/i/h;

.field private final B:Lcom/tkay/expressad/exoplayer/i/i;

.field private final C:Lcom/tkay/expressad/exoplayer/p;

.field private final D:Lcom/tkay/expressad/exoplayer/k/k;

.field private final E:Landroid/os/HandlerThread;

.field private final F:Landroid/os/Handler;

.field private final G:Lcom/tkay/expressad/exoplayer/h;

.field private final H:Lcom/tkay/expressad/exoplayer/ae$b;

.field private final I:Lcom/tkay/expressad/exoplayer/ae$a;

.field private final J:J

.field private final K:Z

.field private final L:Lcom/tkay/expressad/exoplayer/e;

.field private final M:Lcom/tkay/expressad/exoplayer/k$c;

.field private final N:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/k$b;",
            ">;"
        }
    .end annotation
.end field

.field private final O:Lcom/tkay/expressad/exoplayer/k/c;

.field private final P:Lcom/tkay/expressad/exoplayer/s;

.field private Q:Lcom/tkay/expressad/exoplayer/ac;

.field private R:Lcom/tkay/expressad/exoplayer/u;

.field private S:Lcom/tkay/expressad/exoplayer/h/s;

.field private T:[Lcom/tkay/expressad/exoplayer/y;

.field private U:Z

.field private V:Z

.field private W:Z

.field private X:I

.field private Y:Z

.field private Z:I

.field private aa:Lcom/tkay/expressad/exoplayer/k$d;

.field private ab:J

.field private ac:I

.field private final y:[Lcom/tkay/expressad/exoplayer/y;

.field private final z:[Lcom/tkay/expressad/exoplayer/z;


# direct methods
.method public constructor <init>([Lcom/tkay/expressad/exoplayer/y;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/i/i;Lcom/tkay/expressad/exoplayer/p;ZIZLandroid/os/Handler;Lcom/tkay/expressad/exoplayer/h;Lcom/tkay/expressad/exoplayer/k/c;)V
    .locals 11

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object/from16 v3, p10

    .line 137
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 138
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    .line 139
    iput-object v2, v0, Lcom/tkay/expressad/exoplayer/k;->A:Lcom/tkay/expressad/exoplayer/i/h;

    move-object v4, p3

    .line 140
    iput-object v4, v0, Lcom/tkay/expressad/exoplayer/k;->B:Lcom/tkay/expressad/exoplayer/i/i;

    move-object v5, p4

    .line 141
    iput-object v5, v0, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    move/from16 v5, p5

    .line 142
    iput-boolean v5, v0, Lcom/tkay/expressad/exoplayer/k;->V:Z

    move/from16 v5, p6

    .line 143
    iput v5, v0, Lcom/tkay/expressad/exoplayer/k;->X:I

    move/from16 v5, p7

    .line 144
    iput-boolean v5, v0, Lcom/tkay/expressad/exoplayer/k;->Y:Z

    move-object/from16 v5, p8

    .line 145
    iput-object v5, v0, Lcom/tkay/expressad/exoplayer/k;->F:Landroid/os/Handler;

    move-object/from16 v5, p9

    .line 146
    iput-object v5, v0, Lcom/tkay/expressad/exoplayer/k;->G:Lcom/tkay/expressad/exoplayer/h;

    .line 147
    iput-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->O:Lcom/tkay/expressad/exoplayer/k/c;

    .line 148
    new-instance v5, Lcom/tkay/expressad/exoplayer/s;

    invoke-direct {v5}, Lcom/tkay/expressad/exoplayer/s;-><init>()V

    iput-object v5, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    const-wide/16 v5, 0x0

    .line 150
    iput-wide v5, v0, Lcom/tkay/expressad/exoplayer/k;->J:J

    const/4 v5, 0x0

    .line 151
    iput-boolean v5, v0, Lcom/tkay/expressad/exoplayer/k;->K:Z

    .line 153
    sget-object v6, Lcom/tkay/expressad/exoplayer/ac;->e:Lcom/tkay/expressad/exoplayer/ac;

    iput-object v6, v0, Lcom/tkay/expressad/exoplayer/k;->Q:Lcom/tkay/expressad/exoplayer/ac;

    .line 154
    new-instance v6, Lcom/tkay/expressad/exoplayer/u;

    sget-object v7, Lcom/tkay/expressad/exoplayer/ae;->a:Lcom/tkay/expressad/exoplayer/ae;

    sget-object v8, Lcom/tkay/expressad/exoplayer/h/af;->a:Lcom/tkay/expressad/exoplayer/h/af;

    const-wide v9, -0x7fffffffffffffffL    # -4.9E-324

    move-object p4, v6

    move-object/from16 p5, v7

    move-wide/from16 p6, v9

    move-object/from16 p8, v8

    move-object/from16 p9, p3

    invoke-direct/range {p4 .. p9}, Lcom/tkay/expressad/exoplayer/u;-><init>(Lcom/tkay/expressad/exoplayer/ae;JLcom/tkay/expressad/exoplayer/h/af;Lcom/tkay/expressad/exoplayer/i/i;)V

    iput-object v6, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 160
    new-instance v4, Lcom/tkay/expressad/exoplayer/k$c;

    invoke-direct {v4, v5}, Lcom/tkay/expressad/exoplayer/k$c;-><init>(B)V

    iput-object v4, v0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    .line 161
    array-length v4, v1

    new-array v4, v4, [Lcom/tkay/expressad/exoplayer/z;

    iput-object v4, v0, Lcom/tkay/expressad/exoplayer/k;->z:[Lcom/tkay/expressad/exoplayer/z;

    move v4, v5

    .line 162
    :goto_0
    array-length v6, v1

    if-ge v4, v6, :cond_0

    .line 163
    aget-object v6, v1, v4

    invoke-interface {v6, v4}, Lcom/tkay/expressad/exoplayer/y;->a(I)V

    .line 164
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/k;->z:[Lcom/tkay/expressad/exoplayer/z;

    aget-object v7, v1, v4

    invoke-interface {v7}, Lcom/tkay/expressad/exoplayer/y;->b()Lcom/tkay/expressad/exoplayer/z;

    move-result-object v7

    aput-object v7, v6, v4

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 166
    :cond_0
    new-instance v1, Lcom/tkay/expressad/exoplayer/e;

    invoke-direct {v1, p0, v3}, Lcom/tkay/expressad/exoplayer/e;-><init>(Lcom/tkay/expressad/exoplayer/e$a;Lcom/tkay/expressad/exoplayer/k/c;)V

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    .line 167
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    new-array v1, v5, [Lcom/tkay/expressad/exoplayer/y;

    .line 168
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    .line 169
    new-instance v1, Lcom/tkay/expressad/exoplayer/ae$b;

    invoke-direct {v1}, Lcom/tkay/expressad/exoplayer/ae$b;-><init>()V

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/k;->H:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 170
    new-instance v1, Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-direct {v1}, Lcom/tkay/expressad/exoplayer/ae$a;-><init>()V

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 171
    invoke-virtual {p2, p0}, Lcom/tkay/expressad/exoplayer/i/h;->a(Lcom/tkay/expressad/exoplayer/i/h$a;)V

    .line 175
    new-instance v1, Landroid/os/HandlerThread;

    const/16 v2, -0x10

    const-string v4, "ExoPlayerImplInternal:Handler"

    invoke-direct {v1, v4, v2}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;I)V

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/k;->E:Landroid/os/HandlerThread;

    .line 177
    invoke-virtual {v1}, Landroid/os/HandlerThread;->start()V

    .line 178
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/k;->E:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-interface {v3, v1, p0}, Lcom/tkay/expressad/exoplayer/k/c;->a(Landroid/os/Looper;Landroid/os/Handler$Callback;)Lcom/tkay/expressad/exoplayer/k/k;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    return-void
.end method

.method private a(ILcom/tkay/expressad/exoplayer/ae;Lcom/tkay/expressad/exoplayer/ae;)I
    .locals 9

    .line 1288
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v0

    const/4 v1, -0x1

    const/4 v2, 0x0

    move v4, p1

    move p1, v1

    :goto_0
    if-ge v2, v0, :cond_0

    if-ne p1, v1, :cond_0

    .line 1290
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/k;->H:Lcom/tkay/expressad/exoplayer/ae$b;

    iget v7, p0, Lcom/tkay/expressad/exoplayer/k;->X:I

    iget-boolean v8, p0, Lcom/tkay/expressad/exoplayer/k;->Y:Z

    move-object v3, p2

    invoke-virtual/range {v3 .. v8}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Lcom/tkay/expressad/exoplayer/ae$b;IZ)I

    move-result v4

    if-eq v4, v1, :cond_0

    .line 1296
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v3, 0x1

    .line 1297
    invoke-virtual {p2, v4, p1, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p1

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 1296
    invoke-virtual {p3, p1}, Lcom/tkay/expressad/exoplayer/ae;->a(Ljava/lang/Object;)I

    move-result p1

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return p1
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/s$a;J)J
    .locals 2

    .line 657
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    .line 658
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/s;->d()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v1

    if-eq v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 657
    :goto_0
    invoke-direct {p0, p1, p2, p3, v0}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JZ)J

    move-result-wide p1

    return-wide p1
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/s$a;JZ)J
    .locals 5

    .line 664
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->f()V

    const/4 v0, 0x0

    .line 665
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/k;->W:Z

    const/4 v1, 0x2

    .line 666
    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    .line 669
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v2

    move-object v3, v2

    :goto_0
    if-eqz v3, :cond_1

    .line 672
    invoke-direct {p0, p1, p2, p3, v3}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JLcom/tkay/expressad/exoplayer/q;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 673
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;)Z

    goto :goto_1

    .line 676
    :cond_0
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/s;->h()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v3

    goto :goto_0

    :cond_1
    :goto_1
    if-ne v2, v3, :cond_2

    if-eqz p4, :cond_4

    .line 681
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length p4, p1

    move v2, v0

    :goto_2
    if-ge v2, p4, :cond_3

    aget-object v4, p1, v2

    .line 682
    invoke-direct {p0, v4}, Lcom/tkay/expressad/exoplayer/k;->b(Lcom/tkay/expressad/exoplayer/y;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    :cond_3
    new-array p1, v0, [Lcom/tkay/expressad/exoplayer/y;

    .line 684
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    const/4 v2, 0x0

    :cond_4
    if-eqz v3, :cond_6

    .line 690
    invoke-direct {p0, v2}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/q;)V

    .line 691
    iget-boolean p1, v3, Lcom/tkay/expressad/exoplayer/q;->g:Z

    if-eqz p1, :cond_5

    .line 692
    iget-object p1, v3, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {p1, p2, p3}, Lcom/tkay/expressad/exoplayer/h/r;->b(J)J

    move-result-wide p1

    .line 693
    iget-object p3, v3, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/k;->J:J

    sub-long v2, p1, v2

    iget-boolean p4, p0, Lcom/tkay/expressad/exoplayer/k;->K:Z

    invoke-interface {p3, v2, v3, p4}, Lcom/tkay/expressad/exoplayer/h/r;->a(JZ)V

    move-wide p2, p1

    .line 696
    :cond_5
    invoke-direct {p0, p2, p3}, Lcom/tkay/expressad/exoplayer/k;->a(J)V

    .line 697
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->r()V

    goto :goto_3

    .line 699
    :cond_6
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    const/4 p4, 0x1

    invoke-virtual {p1, p4}, Lcom/tkay/expressad/exoplayer/s;->b(Z)V

    .line 700
    invoke-direct {p0, p2, p3}, Lcom/tkay/expressad/exoplayer/k;->a(J)V

    .line 703
    :goto_3
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {p1, v1}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z

    return-wide p2
.end method

.method private a(Lcom/tkay/expressad/exoplayer/ae;I)Landroid/util/Pair;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/ae;",
            "I)",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation

    .line 1366
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->H:Lcom/tkay/expressad/exoplayer/ae$b;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    const-wide v4, -0x7fffffffffffffffL    # -4.9E-324

    move-object v0, p1

    move v3, p2

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/ae;->a(Lcom/tkay/expressad/exoplayer/ae$b;Lcom/tkay/expressad/exoplayer/ae$a;IJ)Landroid/util/Pair;

    move-result-object p1

    return-object p1
.end method

.method private a(Lcom/tkay/expressad/exoplayer/k$d;Z)Landroid/util/Pair;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/k$d;",
            "Z)",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation

    .line 1315
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 1316
    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/k$d;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 1317
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    return-object v3

    .line 1321
    :cond_0
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v2

    if-eqz v2, :cond_1

    move-object v1, v0

    .line 1329
    :cond_1
    :try_start_0
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/k;->H:Lcom/tkay/expressad/exoplayer/ae$b;

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    iget v7, p1, Lcom/tkay/expressad/exoplayer/k$d;->b:I

    iget-wide v8, p1, Lcom/tkay/expressad/exoplayer/k$d;->c:J

    move-object v4, v1

    invoke-virtual/range {v4 .. v9}, Lcom/tkay/expressad/exoplayer/ae;->a(Lcom/tkay/expressad/exoplayer/ae$b;Lcom/tkay/expressad/exoplayer/ae$a;IJ)Landroid/util/Pair;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_0 .. :try_end_0} :catch_0

    if-ne v0, v1, :cond_2

    return-object p1

    .line 1341
    :cond_2
    iget-object v2, p1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Integer;

    .line 1342
    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v5, 0x1

    invoke-virtual {v1, v2, v4, v5}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v2

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 1341
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(Ljava/lang/Object;)I

    move-result v2

    const/4 v4, -0x1

    if-eq v2, v4, :cond_3

    .line 1345
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    iget-object p1, p1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast p1, Ljava/lang/Long;

    invoke-static {p2, p1}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p1

    return-object p1

    :cond_3
    if-eqz p2, :cond_4

    .line 1349
    iget-object p1, p1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    invoke-direct {p0, p1, v1, v0}, Lcom/tkay/expressad/exoplayer/k;->a(ILcom/tkay/expressad/exoplayer/ae;Lcom/tkay/expressad/exoplayer/ae;)I

    move-result p1

    if-eq p1, v4, :cond_4

    .line 1352
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v1, 0x0

    .line 21750
    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p1

    .line 1353
    iget p1, p1, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    .line 1352
    invoke-direct {p0, v0, p1}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/ae;I)Landroid/util/Pair;

    move-result-object p1

    return-object p1

    :cond_4
    return-object v3

    .line 1333
    :catch_0
    new-instance p2, Lcom/tkay/expressad/exoplayer/o;

    iget v1, p1, Lcom/tkay/expressad/exoplayer/k$d;->b:I

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/k$d;->c:J

    invoke-direct {p2, v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/o;-><init>(Lcom/tkay/expressad/exoplayer/ae;IJ)V

    throw p2
.end method

.method private a(F)V
    .locals 5

    .line 1081
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->e()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    :goto_0
    if-eqz v0, :cond_2

    .line 1083
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    if-eqz v1, :cond_1

    .line 1084
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/i/g;->a()[Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object v1

    .line 1085
    array-length v2, v1

    const/4 v3, 0x0

    :goto_1
    if-ge v3, v2, :cond_1

    aget-object v4, v1, v3

    if-eqz v4, :cond_0

    .line 1087
    invoke-interface {v4, p1}, Lcom/tkay/expressad/exoplayer/i/f;->a(F)V

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 1091
    :cond_1
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    goto :goto_0

    :cond_2
    return-void
.end method

.method private a(IZI)V
    .locals 11

    .line 1606
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    .line 1607
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    aget-object v1, v1, p1

    .line 1608
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    aput-object v1, v2, p3

    .line 1609
    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/y;->a_()I

    move-result p3

    if-nez p3, :cond_2

    .line 1610
    iget-object p3, v0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    iget-object p3, p3, Lcom/tkay/expressad/exoplayer/i/i;->b:[Lcom/tkay/expressad/exoplayer/aa;

    aget-object v3, p3, p1

    .line 1612
    iget-object p3, v0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    iget-object p3, p3, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    invoke-virtual {p3, p1}, Lcom/tkay/expressad/exoplayer/i/g;->a(I)Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object p3

    .line 1614
    invoke-static {p3}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/i/f;)[Lcom/tkay/expressad/exoplayer/m;

    move-result-object v4

    .line 1616
    iget-boolean p3, p0, Lcom/tkay/expressad/exoplayer/k;->V:Z

    const/4 v2, 0x1

    const/4 v5, 0x0

    if-eqz p3, :cond_0

    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget p3, p3, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v6, 0x3

    if-ne p3, v6, :cond_0

    move p3, v2

    goto :goto_0

    :cond_0
    move p3, v5

    :goto_0
    if-nez p2, :cond_1

    if-eqz p3, :cond_1

    move v8, v2

    goto :goto_1

    :cond_1
    move v8, v5

    .line 1620
    :goto_1
    iget-object p2, v0, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v5, p2, p1

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    .line 25106
    iget-wide v9, v0, Lcom/tkay/expressad/exoplayer/q;->e:J

    move-object v2, v1

    .line 1620
    invoke-interface/range {v2 .. v10}, Lcom/tkay/expressad/exoplayer/y;->a(Lcom/tkay/expressad/exoplayer/aa;[Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/h/y;JZJ)V

    .line 1623
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/exoplayer/e;->a(Lcom/tkay/expressad/exoplayer/y;)V

    if-eqz p3, :cond_2

    .line 1626
    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/y;->b_()V

    :cond_2
    return-void
.end method

.method private a(J)V
    .locals 4

    .line 722
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 724
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    .line 17106
    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/q;->e:J

    add-long/2addr p1, v0

    .line 724
    :goto_0
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    .line 725
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/e;->a(J)V

    .line 726
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length p2, p1

    const/4 v0, 0x0

    :goto_1
    if-ge v0, p2, :cond_1

    aget-object v1, p1, v0

    .line 727
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-interface {v1, v2, v3}, Lcom/tkay/expressad/exoplayer/y;->a(J)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    :cond_1
    return-void
.end method

.method private a(JJ)V
    .locals 1

    .line 583
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/k/k;->b()V

    .line 584
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    add-long/2addr p1, p3

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/k/k;->a(J)Z

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/i/i;)V
    .locals 2

    .line 1077
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/p;->a([Lcom/tkay/expressad/exoplayer/y;Lcom/tkay/expressad/exoplayer/i/g;)V

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/k$a;)V
    .locals 13

    .line 1143
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/k$a;->a:Lcom/tkay/expressad/exoplayer/h/s;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    if-eq v0, v1, :cond_0

    return-void

    .line 1148
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 1149
    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/k$a;->b:Lcom/tkay/expressad/exoplayer/ae;

    .line 1150
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/k$a;->c:Ljava/lang/Object;

    .line 1151
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/ae;)V

    .line 1152
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {v2, v1, p1}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/u;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 19882
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    const/4 v2, 0x1

    sub-int/2addr p1, v2

    :goto_0
    const/4 v3, 0x0

    if-ltz p1, :cond_2

    .line 19883
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v4, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/exoplayer/k$b;

    invoke-direct {p0, v4}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/k$b;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 19885
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v4, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/exoplayer/k$b;

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/k$b;->a:Lcom/tkay/expressad/exoplayer/x;

    invoke-virtual {v4, v3}, Lcom/tkay/expressad/exoplayer/x;->a(Z)V

    .line 19886
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v3, p1}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    :cond_1
    add-int/lit8 p1, p1, -0x1

    goto :goto_0

    .line 19890
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-static {p1}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    .line 1155
    iget p1, p0, Lcom/tkay/expressad/exoplayer/k;->Z:I

    const-wide/16 v4, 0x0

    if-lez p1, :cond_9

    .line 1156
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k$c;->a(I)V

    .line 1157
    iput v3, p0, Lcom/tkay/expressad/exoplayer/k;->Z:I

    .line 1158
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->aa:Lcom/tkay/expressad/exoplayer/k$d;

    if-eqz p1, :cond_5

    .line 1160
    invoke-direct {p0, p1, v2}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/k$d;Z)Landroid/util/Pair;

    move-result-object p1

    const/4 v0, 0x0

    .line 1161
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->aa:Lcom/tkay/expressad/exoplayer/k$d;

    if-nez p1, :cond_3

    .line 1165
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->o()V

    return-void

    .line 1167
    :cond_3
    iget-object v0, p1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 1168
    iget-object p1, p1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast p1, Ljava/lang/Long;

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v10

    .line 1169
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {p1, v0, v10, v11}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v7

    .line 1170
    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 1172
    invoke-virtual {v7}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result p1

    if-eqz p1, :cond_4

    move-wide v8, v4

    goto :goto_1

    :cond_4
    move-wide v8, v10

    .line 1171
    :goto_1
    invoke-virtual/range {v6 .. v11}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    return-void

    .line 1174
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/u;->d:J

    const-wide v6, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long p1, v2, v6

    if-nez p1, :cond_8

    .line 1175
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result p1

    if-eqz p1, :cond_6

    .line 1176
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->o()V

    return-void

    .line 1178
    :cond_6
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/k;->Y:Z

    .line 1179
    invoke-virtual {v1, p1}, Lcom/tkay/expressad/exoplayer/ae;->b(Z)I

    move-result p1

    .line 1178
    invoke-direct {p0, v1, p1}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/ae;I)Landroid/util/Pair;

    move-result-object p1

    .line 1180
    iget-object v0, p1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 1181
    iget-object p1, p1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast p1, Ljava/lang/Long;

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v10

    .line 1182
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {p1, v0, v10, v11}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v7

    .line 1183
    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 1186
    invoke-virtual {v7}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result p1

    if-eqz p1, :cond_7

    move-wide v8, v4

    goto :goto_2

    :cond_7
    move-wide v8, v10

    .line 1184
    :goto_2
    invoke-virtual/range {v6 .. v11}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    :cond_8
    return-void

    .line 1193
    :cond_9
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget p1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    .line 1194
    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v11, v6, Lcom/tkay/expressad/exoplayer/u;->e:J

    .line 1195
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v6

    if-eqz v6, :cond_c

    .line 1197
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v0

    if-nez v0, :cond_b

    .line 1198
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    .line 1199
    invoke-virtual {v0, p1, v11, v12}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v8

    .line 1200
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 1202
    invoke-virtual {v8}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result p1

    if-eqz p1, :cond_a

    move-wide v9, v4

    goto :goto_3

    :cond_a
    move-wide v9, v11

    .line 1201
    :goto_3
    invoke-virtual/range {v7 .. v12}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    :cond_b
    return-void

    .line 1206
    :cond_c
    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/s;->e()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v6

    if-nez v6, :cond_d

    .line 1208
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v0, p1, v7, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v7

    iget-object v7, v7, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    goto :goto_4

    :cond_d
    iget-object v7, v6, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    .line 1209
    :goto_4
    invoke-virtual {v1, v7}, Lcom/tkay/expressad/exoplayer/ae;->a(Ljava/lang/Object;)I

    move-result v7

    const/4 v8, -0x1

    if-ne v7, v8, :cond_12

    .line 1213
    invoke-direct {p0, p1, v0, v1}, Lcom/tkay/expressad/exoplayer/k;->a(ILcom/tkay/expressad/exoplayer/ae;Lcom/tkay/expressad/exoplayer/ae;)I

    move-result p1

    if-ne p1, v8, :cond_e

    .line 1216
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->o()V

    return-void

    .line 1220
    :cond_e
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 20750
    invoke-virtual {v1, p1, v0, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p1

    .line 1221
    iget p1, p1, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    .line 1220
    invoke-direct {p0, v1, p1}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/ae;I)Landroid/util/Pair;

    move-result-object p1

    .line 1222
    iget-object v0, p1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 1223
    iget-object p1, p1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast p1, Ljava/lang/Long;

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v11

    .line 1224
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {p1, v0, v11, v12}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v8

    .line 1225
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v1, v0, p1, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    if-eqz v6, :cond_10

    .line 1229
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 1230
    iget-object v1, v6, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/r;->a()Lcom/tkay/expressad/exoplayer/r;

    move-result-object v1

    iput-object v1, v6, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 1231
    :goto_5
    iget-object v1, v6, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v1, :cond_10

    .line 1232
    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    .line 1233
    iget-object v1, v6, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    invoke-virtual {v1, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_f

    .line 1234
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-object v2, v6, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/r;I)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v1

    iput-object v1, v6, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    goto :goto_5

    .line 1236
    :cond_f
    iget-object v1, v6, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/r;->a()Lcom/tkay/expressad/exoplayer/r;

    move-result-object v1

    iput-object v1, v6, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    goto :goto_5

    .line 1241
    :cond_10
    invoke-virtual {v8}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result p1

    if-eqz p1, :cond_11

    goto :goto_6

    :cond_11
    move-wide v4, v11

    :goto_6
    invoke-direct {p0, v8, v4, v5}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/h/s$a;J)J

    move-result-wide v9

    .line 1242
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual/range {v7 .. v12}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    return-void

    :cond_12
    if-eq v7, p1, :cond_13

    .line 1248
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {p1, v7}, Lcom/tkay/expressad/exoplayer/u;->a(I)Lcom/tkay/expressad/exoplayer/u;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 1251
    :cond_13
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 1252
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_15

    .line 1253
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0, v7, v11, v12}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v8

    .line 1254
    invoke-virtual {v8, p1}, Lcom/tkay/expressad/exoplayer/h/s$a;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_15

    .line 1257
    invoke-virtual {v8}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result p1

    if-eqz p1, :cond_14

    goto :goto_7

    :cond_14
    move-wide v4, v11

    :goto_7
    invoke-direct {p0, v8, v4, v5}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/h/s$a;J)J

    move-result-wide v9

    .line 1258
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual/range {v7 .. v12}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    return-void

    .line 1263
    :cond_15
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;J)Z

    move-result p1

    if-nez p1, :cond_16

    .line 1264
    invoke-direct {p0, v3}, Lcom/tkay/expressad/exoplayer/k;->g(Z)V

    :cond_16
    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/k$d;)V
    .locals 20

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    .line 588
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/exoplayer/k$c;->a(I)V

    .line 595
    invoke-direct {v1, v0, v3}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/k$d;Z)Landroid/util/Pair;

    move-result-object v2

    const-wide/16 v4, 0x0

    const/4 v6, 0x0

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    if-nez v2, :cond_0

    .line 599
    new-instance v2, Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->j()I

    move-result v9

    invoke-direct {v2, v9}, Lcom/tkay/expressad/exoplayer/h/s$a;-><init>(I)V

    move-object v15, v2

    move v2, v3

    move-wide v12, v7

    move-wide/from16 v18, v12

    goto :goto_1

    .line 605
    :cond_0
    iget-object v9, v2, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v9, Ljava/lang/Integer;

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    .line 606
    iget-object v10, v2, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v10, Ljava/lang/Long;

    invoke-virtual {v10}, Ljava/lang/Long;->longValue()J

    move-result-wide v10

    .line 607
    iget-object v12, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v12, v9, v10, v11}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v9

    .line 608
    invoke-virtual {v9}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v12

    if-eqz v12, :cond_1

    move v2, v3

    move-wide v12, v4

    :goto_0
    move-object v15, v9

    move-wide/from16 v18, v10

    goto :goto_1

    .line 612
    :cond_1
    iget-object v2, v2, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v12

    .line 613
    iget-wide v14, v0, Lcom/tkay/expressad/exoplayer/k$d;->c:J

    cmp-long v2, v14, v7

    if-nez v2, :cond_2

    move v2, v3

    goto :goto_0

    :cond_2
    move v2, v6

    goto :goto_0

    :goto_1
    const/4 v9, 0x2

    .line 618
    :try_start_0
    iget-object v10, v1, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    if-eqz v10, :cond_a

    iget v10, v1, Lcom/tkay/expressad/exoplayer/k;->Z:I

    if-lez v10, :cond_3

    goto :goto_4

    :cond_3
    cmp-long v0, v12, v7

    if-nez v0, :cond_4

    const/4 v0, 0x4

    .line 623
    invoke-direct {v1, v0}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    .line 624
    invoke-direct {v1, v6, v3, v6}, Lcom/tkay/expressad/exoplayer/k;->a(ZZZ)V

    goto :goto_5

    .line 629
    :cond_4
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-virtual {v15, v0}, Lcom/tkay/expressad/exoplayer/h/s$a;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 630
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    if-eqz v0, :cond_5

    cmp-long v4, v12, v4

    if-eqz v4, :cond_5

    .line 632
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    iget-object v4, v1, Lcom/tkay/expressad/exoplayer/k;->Q:Lcom/tkay/expressad/exoplayer/ac;

    .line 633
    invoke-interface {v0, v12, v13, v4}, Lcom/tkay/expressad/exoplayer/h/r;->a(JLcom/tkay/expressad/exoplayer/ac;)J

    move-result-wide v4

    goto :goto_2

    :cond_5
    move-wide v4, v12

    .line 636
    :goto_2
    invoke-static {v4, v5}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v7

    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v10, v0, Lcom/tkay/expressad/exoplayer/u;->j:J

    invoke-static {v10, v11}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v10

    cmp-long v0, v7, v10

    if-nez v0, :cond_8

    .line 638
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v3, v0, Lcom/tkay/expressad/exoplayer/u;->j:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 647
    iget-object v14, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    move-wide/from16 v16, v3

    invoke-virtual/range {v14 .. v19}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v0

    iput-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    if-eqz v2, :cond_6

    .line 649
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V

    :cond_6
    return-void

    :cond_7
    move-wide v4, v12

    .line 642
    :cond_8
    :try_start_1
    invoke-direct {v1, v15, v4, v5}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/h/s$a;J)J

    move-result-wide v4

    cmp-long v0, v12, v4

    if-eqz v0, :cond_9

    goto :goto_3

    :cond_9
    move v3, v6

    :goto_3
    or-int/2addr v2, v3

    move-wide/from16 v16, v4

    goto :goto_6

    .line 620
    :cond_a
    :goto_4
    iput-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->aa:Lcom/tkay/expressad/exoplayer/k$d;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :goto_5
    move-wide/from16 v16, v12

    .line 647
    :goto_6
    iget-object v14, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual/range {v14 .. v19}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v0

    iput-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    if-eqz v2, :cond_b

    .line 649
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    invoke-virtual {v0, v9}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V

    :cond_b
    return-void

    :catchall_0
    move-exception v0

    .line 647
    iget-object v14, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    move-wide/from16 v16, v12

    invoke-virtual/range {v14 .. v19}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v3

    iput-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    if-eqz v2, :cond_c

    .line 649
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    invoke-virtual {v2, v9}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V

    .line 651
    :cond_c
    throw v0
.end method

.method private a(Lcom/tkay/expressad/exoplayer/q;)V
    .locals 8

    .line 1563
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    if-eqz v0, :cond_6

    if-ne p1, v0, :cond_0

    goto :goto_2

    .line 1568
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v1, v1

    new-array v1, v1, [Z

    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    .line 1569
    :goto_0
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v6, v5

    if-ge v3, v6, :cond_5

    .line 1570
    aget-object v5, v5, v3

    .line 1571
    invoke-interface {v5}, Lcom/tkay/expressad/exoplayer/y;->a_()I

    move-result v6

    if-eqz v6, :cond_1

    const/4 v6, 0x1

    goto :goto_1

    :cond_1
    move v6, v2

    :goto_1
    aput-boolean v6, v1, v3

    .line 1572
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    invoke-virtual {v6, v3}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v6

    if-eqz v6, :cond_2

    add-int/lit8 v4, v4, 0x1

    .line 1575
    :cond_2
    aget-boolean v6, v1, v3

    if-eqz v6, :cond_4

    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 1576
    invoke-virtual {v6, v3}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v6

    if-eqz v6, :cond_3

    .line 1577
    invoke-interface {v5}, Lcom/tkay/expressad/exoplayer/y;->i()Z

    move-result v6

    if-eqz v6, :cond_4

    .line 1578
    invoke-interface {v5}, Lcom/tkay/expressad/exoplayer/y;->f()Lcom/tkay/expressad/exoplayer/h/y;

    move-result-object v6

    iget-object v7, p1, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v7, v7, v3

    if-ne v6, v7, :cond_4

    .line 1582
    :cond_3
    invoke-direct {p0, v5}, Lcom/tkay/expressad/exoplayer/k;->b(Lcom/tkay/expressad/exoplayer/y;)V

    :cond_4
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 1585
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/q;->j:Lcom/tkay/expressad/exoplayer/h/af;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 1586
    invoke-virtual {p1, v2, v0}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/af;Lcom/tkay/expressad/exoplayer/i/i;)Lcom/tkay/expressad/exoplayer/u;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 1588
    invoke-direct {p0, v1, v4}, Lcom/tkay/expressad/exoplayer/k;->a([ZI)V

    :cond_6
    :goto_2
    return-void
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/y;)V
    .locals 2

    .line 978
    invoke-interface {p0}, Lcom/tkay/expressad/exoplayer/y;->a_()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 979
    invoke-interface {p0}, Lcom/tkay/expressad/exoplayer/y;->k()V

    :cond_0
    return-void
.end method

.method private a(ZZ)V
    .locals 2

    const/4 v0, 0x1

    .line 740
    invoke-direct {p0, v0, p1, p1}, Lcom/tkay/expressad/exoplayer/k;->a(ZZZ)V

    .line 742
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/k;->Z:I

    add-int/2addr v1, p2

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/exoplayer/k$c;->a(I)V

    const/4 p1, 0x0

    .line 744
    iput p1, p0, Lcom/tkay/expressad/exoplayer/k;->Z:I

    .line 745
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/p;->b()V

    .line 746
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    return-void
.end method

.method private a(ZZZ)V
    .locals 16

    move-object/from16 v1, p0

    .line 776
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/k/k;->b()V

    const/4 v2, 0x0

    .line 777
    iput-boolean v2, v1, Lcom/tkay/expressad/exoplayer/k;->W:Z

    .line 778
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/e;->b()V

    const-wide/16 v3, 0x0

    .line 779
    iput-wide v3, v1, Lcom/tkay/expressad/exoplayer/k;->ab:J

    .line 780
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v4, v3

    move v5, v2

    :goto_0
    if-ge v5, v4, :cond_0

    aget-object v0, v3, v5

    .line 782
    :try_start_0
    invoke-direct {v1, v0}, Lcom/tkay/expressad/exoplayer/k;->b(Lcom/tkay/expressad/exoplayer/y;)V
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    goto :goto_1

    :catch_1
    move-exception v0

    :goto_1
    const-string v6, "ExoPlayerImplInternal"

    const-string v7, "Stop failed."

    .line 785
    invoke-static {v6, v7, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_2
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_0
    new-array v0, v2, [Lcom/tkay/expressad/exoplayer/y;

    .line 788
    iput-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    .line 789
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    xor-int/lit8 v3, p2, 0x1

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/s;->b(Z)V

    .line 790
    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->d(Z)V

    const/4 v0, 0x0

    if-eqz p2, :cond_1

    .line 792
    iput-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->aa:Lcom/tkay/expressad/exoplayer/k$d;

    :cond_1
    if-eqz p3, :cond_3

    .line 795
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    sget-object v4, Lcom/tkay/expressad/exoplayer/ae;->a:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {v3, v4}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/ae;)V

    .line 796
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_3
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/exoplayer/k$b;

    .line 797
    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/k$b;->a:Lcom/tkay/expressad/exoplayer/x;

    invoke-virtual {v4, v2}, Lcom/tkay/expressad/exoplayer/x;->a(Z)V

    goto :goto_3

    .line 799
    :cond_2
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->clear()V

    .line 800
    iput v2, v1, Lcom/tkay/expressad/exoplayer/k;->ac:I

    .line 802
    :cond_3
    new-instance v2, Lcom/tkay/expressad/exoplayer/u;

    if-eqz p3, :cond_4

    .line 804
    sget-object v3, Lcom/tkay/expressad/exoplayer/ae;->a:Lcom/tkay/expressad/exoplayer/ae;

    goto :goto_4

    :cond_4
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    :goto_4
    move-object v5, v3

    if-eqz p3, :cond_5

    move-object v6, v0

    goto :goto_5

    .line 805
    :cond_5
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/u;->b:Ljava/lang/Object;

    move-object v6, v3

    :goto_5
    if-eqz p2, :cond_6

    .line 806
    new-instance v3, Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->j()I

    move-result v4

    invoke-direct {v3, v4}, Lcom/tkay/expressad/exoplayer/h/s$a;-><init>(I)V

    goto :goto_6

    :cond_6
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    :goto_6
    move-object v7, v3

    const-wide v3, -0x7fffffffffffffffL    # -4.9E-324

    if-eqz p2, :cond_7

    move-wide v8, v3

    goto :goto_7

    .line 808
    :cond_7
    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v8, v8, Lcom/tkay/expressad/exoplayer/u;->j:J

    :goto_7
    if-eqz p2, :cond_8

    goto :goto_8

    .line 809
    :cond_8
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v3, v3, Lcom/tkay/expressad/exoplayer/u;->e:J

    :goto_8
    move-wide v10, v3

    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v12, v3, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v13, 0x0

    if-eqz p3, :cond_9

    .line 812
    sget-object v3, Lcom/tkay/expressad/exoplayer/h/af;->a:Lcom/tkay/expressad/exoplayer/h/af;

    goto :goto_9

    :cond_9
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/u;->h:Lcom/tkay/expressad/exoplayer/h/af;

    :goto_9
    move-object v14, v3

    if-eqz p3, :cond_a

    .line 813
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->B:Lcom/tkay/expressad/exoplayer/i/i;

    goto :goto_a

    :cond_a
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/u;->i:Lcom/tkay/expressad/exoplayer/i/i;

    :goto_a
    move-object v15, v3

    move-object v4, v2

    invoke-direct/range {v4 .. v15}, Lcom/tkay/expressad/exoplayer/u;-><init>(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s$a;JJIZLcom/tkay/expressad/exoplayer/h/af;Lcom/tkay/expressad/exoplayer/i/i;)V

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    if-eqz p1, :cond_b

    .line 815
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    if-eqz v2, :cond_b

    .line 816
    invoke-interface {v2, v1}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h/s$b;)V

    .line 817
    iput-object v0, v1, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    :cond_b
    return-void
.end method

.method private a([ZI)V
    .locals 4

    .line 1593
    new-array p2, p2, [Lcom/tkay/expressad/exoplayer/y;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    .line 1595
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object p2

    const/4 v0, 0x0

    move v1, v0

    .line 1596
    :goto_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v2, v2

    if-ge v0, v2, :cond_1

    .line 1597
    iget-object v2, p2, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 1598
    aget-boolean v2, p1, v0

    add-int/lit8 v3, v1, 0x1

    invoke-direct {p0, v0, v2, v1}, Lcom/tkay/expressad/exoplayer/k;->a(IZI)V

    move v1, v3

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/s$a;JLcom/tkay/expressad/exoplayer/q;)Z
    .locals 3

    .line 709
    iget-object v0, p4, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/h/s$a;->equals(Ljava/lang/Object;)Z

    move-result p1

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    iget-boolean p1, p4, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-eqz p1, :cond_1

    .line 710
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v1, p4, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 16750
    invoke-virtual {p1, v1, v2, v0}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    .line 711
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {p1, p2, p3}, Lcom/tkay/expressad/exoplayer/ae$a;->b(J)I

    move-result p1

    const/4 p2, -0x1

    if-eq p1, p2, :cond_0

    .line 712
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 713
    invoke-virtual {p2, p1}, Lcom/tkay/expressad/exoplayer/ae$a;->a(I)J

    move-result-wide p1

    iget-object p3, p4, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide p3, p3, Lcom/tkay/expressad/exoplayer/r;->c:J

    cmp-long p1, p1, p3

    if-nez p1, :cond_1

    :cond_0
    const/4 p1, 0x1

    return p1

    :cond_1
    return v0
.end method

.method private a(Lcom/tkay/expressad/exoplayer/k$b;)Z
    .locals 7

    .line 894
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/k$b;->d:Ljava/lang/Object;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez v0, :cond_1

    .line 896
    new-instance v0, Lcom/tkay/expressad/exoplayer/k$d;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/k$b;->a:Lcom/tkay/expressad/exoplayer/x;

    .line 899
    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/x;->a()Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v3

    iget-object v4, p1, Lcom/tkay/expressad/exoplayer/k$b;->a:Lcom/tkay/expressad/exoplayer/x;

    .line 900
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/x;->g()I

    move-result v4

    iget-object v5, p1, Lcom/tkay/expressad/exoplayer/k$b;->a:Lcom/tkay/expressad/exoplayer/x;

    .line 901
    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/x;->f()J

    move-result-wide v5

    invoke-static {v5, v6}, Lcom/tkay/expressad/exoplayer/b;->b(J)J

    move-result-wide v5

    invoke-direct {v0, v3, v4, v5, v6}, Lcom/tkay/expressad/exoplayer/k$d;-><init>(Lcom/tkay/expressad/exoplayer/ae;IJ)V

    .line 897
    invoke-direct {p0, v0, v2}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/k$d;Z)Landroid/util/Pair;

    move-result-object v0

    if-nez v0, :cond_0

    return v2

    .line 906
    :cond_0
    iget-object v2, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Integer;

    .line 907
    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget-object v3, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v3, Ljava/lang/Long;

    .line 908
    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v0, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Integer;

    .line 909
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v5, v0, v6, v1}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v0

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 906
    invoke-virtual {p1, v2, v3, v4, v0}, Lcom/tkay/expressad/exoplayer/k$b;->a(IJLjava/lang/Object;)V

    goto :goto_0

    .line 912
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/k$b;->d:Ljava/lang/Object;

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(Ljava/lang/Object;)I

    move-result v0

    const/4 v3, -0x1

    if-ne v0, v3, :cond_2

    return v2

    .line 916
    :cond_2
    iput v0, p1, Lcom/tkay/expressad/exoplayer/k$b;->b:I

    :goto_0
    return v1
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/i/f;)[Lcom/tkay/expressad/exoplayer/m;
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    .line 1640
    invoke-interface {p0}, Lcom/tkay/expressad/exoplayer/i/f;->g()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v0

    .line 1641
    :goto_0
    new-array v2, v1, [Lcom/tkay/expressad/exoplayer/m;

    :goto_1
    if-ge v0, v1, :cond_1

    .line 1643
    invoke-interface {p0, v0}, Lcom/tkay/expressad/exoplayer/i/f;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v3

    aput-object v3, v2, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    :cond_1
    return-object v2
.end method

.method private b(I)V
    .locals 1

    .line 373
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-eq v0, p1, :cond_0

    .line 374
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/u;->b(I)Lcom/tkay/expressad/exoplayer/u;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    :cond_0
    return-void
.end method

.method private b(JJ)V
    .locals 5

    .line 923
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_b

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_5

    .line 928
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/u;->d:J

    cmp-long v0, v0, p1

    if-nez v0, :cond_1

    const-wide/16 v0, 0x1

    sub-long/2addr p1, v0

    .line 932
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    .line 934
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    const/4 v2, 0x0

    if-lez v1, :cond_2

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/k$b;

    goto :goto_0

    :cond_2
    move-object v1, v2

    :goto_0
    if-eqz v1, :cond_4

    .line 935
    iget v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->b:I

    if-gt v3, v0, :cond_3

    iget v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->b:I

    if-ne v3, v0, :cond_4

    iget-wide v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->c:J

    cmp-long v1, v3, p1

    if-lez v1, :cond_4

    .line 939
    :cond_3
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    add-int/lit8 v1, v1, -0x1

    iput v1, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    if-lez v1, :cond_2

    .line 941
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/k$b;

    goto :goto_0

    .line 944
    :cond_4
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v1, v3, :cond_5

    .line 945
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    iget v3, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/k$b;

    goto :goto_1

    :cond_5
    move-object v1, v2

    :goto_1
    if-eqz v1, :cond_7

    .line 947
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->d:Ljava/lang/Object;

    if-eqz v3, :cond_7

    iget v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->b:I

    if-lt v3, v0, :cond_6

    iget v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->b:I

    if-ne v3, v0, :cond_7

    iget-wide v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->c:J

    cmp-long v3, v3, p1

    if-gtz v3, :cond_7

    .line 952
    :cond_6
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    .line 954
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v1, v3, :cond_5

    .line 955
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    iget v3, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/k$b;

    goto :goto_1

    :cond_7
    :goto_2
    if-eqz v1, :cond_b

    .line 959
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->d:Ljava/lang/Object;

    if-eqz v3, :cond_b

    iget v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->b:I

    if-ne v3, v0, :cond_b

    iget-wide v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->c:J

    cmp-long v3, v3, p1

    if-lez v3, :cond_b

    iget-wide v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->c:J

    cmp-long v3, v3, p3

    if-gtz v3, :cond_b

    .line 964
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->a:Lcom/tkay/expressad/exoplayer/x;

    invoke-direct {p0, v3}, Lcom/tkay/expressad/exoplayer/k;->d(Lcom/tkay/expressad/exoplayer/x;)V

    .line 965
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/k$b;->a:Lcom/tkay/expressad/exoplayer/x;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/x;->h()Z

    move-result v3

    if-nez v3, :cond_9

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/k$b;->a:Lcom/tkay/expressad/exoplayer/x;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/x;->j()Z

    move-result v1

    if-eqz v1, :cond_8

    goto :goto_3

    .line 968
    :cond_8
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    goto :goto_4

    .line 966
    :cond_9
    :goto_3
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    iget v3, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    .line 971
    :goto_4
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v1, v3, :cond_a

    .line 972
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    iget v3, p0, Lcom/tkay/expressad/exoplayer/k;->ac:I

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/k$b;

    goto :goto_2

    :cond_a
    move-object v1, v2

    goto :goto_2

    :cond_b
    :goto_5
    return-void
.end method

.method private b(Lcom/tkay/expressad/exoplayer/ac;)V
    .locals 0

    .line 736
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->Q:Lcom/tkay/expressad/exoplayer/ac;

    return-void
.end method

.method private b(Lcom/tkay/expressad/exoplayer/h/r;)V
    .locals 2

    .line 269
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/16 v1, 0xa

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method private b(Lcom/tkay/expressad/exoplayer/h/s;ZZ)V
    .locals 2

    .line 400
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k;->Z:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/k;->Z:I

    .line 401
    invoke-direct {p0, v1, p2, p3}, Lcom/tkay/expressad/exoplayer/k;->a(ZZZ)V

    .line 402
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    invoke-interface {p2}, Lcom/tkay/expressad/exoplayer/p;->a()V

    .line 403
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    const/4 p2, 0x2

    .line 404
    invoke-direct {p0, p2}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    .line 405
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/k;->G:Lcom/tkay/expressad/exoplayer/h;

    invoke-interface {p1, p3, v1, p0}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h;ZLcom/tkay/expressad/exoplayer/h/s$b;)V

    .line 406
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {p1, p2}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/x;)V
    .locals 0

    .line 52
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/k;->f(Lcom/tkay/expressad/exoplayer/x;)V

    return-void
.end method

.method private b(Lcom/tkay/expressad/exoplayer/y;)V
    .locals 1

    .line 984
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/e;->b(Lcom/tkay/expressad/exoplayer/y;)V

    .line 985
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/y;)V

    .line 986
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/y;->l()V

    return-void
.end method

.method private c(I)V
    .locals 1

    .line 427
    iput p1, p0, Lcom/tkay/expressad/exoplayer/k;->X:I

    .line 428
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/s;->a(I)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    .line 429
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/k;->g(Z)V

    :cond_0
    return-void
.end method

.method private c(Lcom/tkay/expressad/exoplayer/h/r;)V
    .locals 14

    .line 1516
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/r;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    .line 1520
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/s;->b()Lcom/tkay/expressad/exoplayer/q;

    move-result-object p1

    .line 1521
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/e;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v0

    iget v0, v0, Lcom/tkay/expressad/exoplayer/v;->b:F

    const/4 v1, 0x1

    .line 23142
    iput-boolean v1, p1, Lcom/tkay/expressad/exoplayer/q;->f:Z

    .line 23143
    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/h/r;->b()Lcom/tkay/expressad/exoplayer/h/af;

    move-result-object v1

    iput-object v1, p1, Lcom/tkay/expressad/exoplayer/q;->j:Lcom/tkay/expressad/exoplayer/h/af;

    .line 23144
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/q;->a(F)Z

    .line 23145
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/r;->b:J

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/exoplayer/q;->b(J)J

    move-result-wide v4

    .line 23146
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/q;->e:J

    iget-object v2, p1, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v2, v2, Lcom/tkay/expressad/exoplayer/r;->b:J

    sub-long/2addr v2, v4

    add-long/2addr v0, v2

    iput-wide v0, p1, Lcom/tkay/expressad/exoplayer/q;->e:J

    .line 23147
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 24089
    new-instance v1, Lcom/tkay/expressad/exoplayer/r;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v6, v0, Lcom/tkay/expressad/exoplayer/r;->c:J

    iget-wide v8, v0, Lcom/tkay/expressad/exoplayer/r;->d:J

    iget-wide v10, v0, Lcom/tkay/expressad/exoplayer/r;->e:J

    iget-boolean v12, v0, Lcom/tkay/expressad/exoplayer/r;->f:Z

    iget-boolean v13, v0, Lcom/tkay/expressad/exoplayer/r;->g:Z

    move-object v2, v1

    invoke-direct/range {v2 .. v13}, Lcom/tkay/expressad/exoplayer/r;-><init>(Lcom/tkay/expressad/exoplayer/h/s$a;JJJJZZ)V

    .line 23147
    iput-object v1, p1, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 1522
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/i/i;)V

    .line 1524
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result p1

    if-nez p1, :cond_1

    .line 1526
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/s;->h()Lcom/tkay/expressad/exoplayer/q;

    move-result-object p1

    .line 1527
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/r;->b:J

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/k;->a(J)V

    const/4 p1, 0x0

    .line 1528
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/q;)V

    .line 1530
    :cond_1
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->r()V

    return-void
.end method

.method private c(Lcom/tkay/expressad/exoplayer/v;)V
    .locals 1

    .line 732
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/e;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    return-void
.end method

.method private c(Lcom/tkay/expressad/exoplayer/x;)V
    .locals 4

    .line 823
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/x;->f()J

    move-result-wide v0

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    .line 825
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/k;->d(Lcom/tkay/expressad/exoplayer/x;)V

    return-void

    .line 826
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/tkay/expressad/exoplayer/k;->Z:I

    if-lez v0, :cond_1

    goto :goto_0

    .line 830
    :cond_1
    new-instance v0, Lcom/tkay/expressad/exoplayer/k$b;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/k$b;-><init>(Lcom/tkay/expressad/exoplayer/x;)V

    .line 831
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/k$b;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 832
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 834
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-static {p1}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    return-void

    :cond_2
    const/4 v0, 0x0

    .line 836
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/x;->a(Z)V

    return-void

    .line 828
    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    new-instance v1, Lcom/tkay/expressad/exoplayer/k$b;

    invoke-direct {v1, p1}, Lcom/tkay/expressad/exoplayer/k$b;-><init>(Lcom/tkay/expressad/exoplayer/x;)V

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private c(Lcom/tkay/expressad/exoplayer/y;)Z
    .locals 2

    .line 1632
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->d()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    .line 1633
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v1, :cond_0

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-eqz v0, :cond_0

    .line 1634
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/y;->g()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method private d()V
    .locals 5

    .line 385
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k$c;->a(Lcom/tkay/expressad/exoplayer/u;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 386
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->F:Landroid/os/Handler;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    .line 389
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k$c;->a(Lcom/tkay/expressad/exoplayer/k$c;)I

    move-result v2

    .line 390
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/k$c;->b(Lcom/tkay/expressad/exoplayer/k$c;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 391
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/k$c;->c(Lcom/tkay/expressad/exoplayer/k$c;)I

    move-result v3

    goto :goto_0

    :cond_0
    const/4 v3, -0x1

    .line 392
    :goto_0
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 387
    invoke-virtual {v0, v1, v2, v3, v4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object v0

    .line 394
    invoke-virtual {v0}, Landroid/os/Message;->sendToTarget()V

    .line 395
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k$c;->b(Lcom/tkay/expressad/exoplayer/u;)V

    :cond_1
    return-void
.end method

.method private d(Lcom/tkay/expressad/exoplayer/h/r;)V
    .locals 2

    .line 1534
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/r;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    .line 1538
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/exoplayer/s;->a(J)V

    .line 1539
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->r()V

    return-void
.end method

.method private d(Lcom/tkay/expressad/exoplayer/x;)V
    .locals 2

    .line 842
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/x;->e()Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/Handler;->getLooper()Landroid/os/Looper;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/k/k;->a()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_1

    .line 843
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k;->f(Lcom/tkay/expressad/exoplayer/x;)V

    .line 844
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget p1, p1, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v0, 0x3

    const/4 v1, 0x2

    if-eq p1, v0, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget p1, p1, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-ne p1, v1, :cond_2

    .line 847
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {p1, v1}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z

    return-void

    .line 850
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/16 v1, 0xf

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    :cond_2
    return-void
.end method

.method private d(Z)V
    .locals 1

    .line 379
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/u;->g:Z

    if-eq v0, p1, :cond_0

    .line 380
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/u;->a(Z)Lcom/tkay/expressad/exoplayer/u;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    :cond_0
    return-void
.end method

.method private e()V
    .locals 4

    const/4 v0, 0x0

    .line 457
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/k;->W:Z

    .line 458
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/e;->a()V

    .line 459
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v2, v1

    :goto_0
    if-ge v0, v2, :cond_0

    aget-object v3, v1, v0

    .line 460
    invoke-interface {v3}, Lcom/tkay/expressad/exoplayer/y;->b_()V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private e(Lcom/tkay/expressad/exoplayer/x;)V
    .locals 2

    .line 855
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/x;->e()Landroid/os/Handler;

    move-result-object v0

    .line 856
    new-instance v1, Lcom/tkay/expressad/exoplayer/k$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/exoplayer/k$1;-><init>(Lcom/tkay/expressad/exoplayer/k;Lcom/tkay/expressad/exoplayer/x;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private e(Z)V
    .locals 2

    const/4 v0, 0x0

    .line 410
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/k;->W:Z

    .line 411
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/k;->V:Z

    if-nez p1, :cond_0

    .line 413
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->f()V

    .line 414
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->g()V

    return-void

    .line 416
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget p1, p1, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v0, 0x3

    const/4 v1, 0x2

    if-ne p1, v0, :cond_1

    .line 417
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->e()V

    .line 418
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {p1, v1}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z

    return-void

    .line 419
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget p1, p1, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-ne p1, v1, :cond_2

    .line 420
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {p1, v1}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z

    :cond_2
    return-void
.end method

.method private f()V
    .locals 4

    .line 465
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/e;->b()V

    .line 466
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, v0, v2

    .line 467
    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/y;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private static f(Lcom/tkay/expressad/exoplayer/x;)V
    .locals 4

    .line 871
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/x;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 875
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/x;->b()Lcom/tkay/expressad/exoplayer/x$b;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/x;->c()I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/x;->d()Ljava/lang/Object;

    move-result-object v3

    invoke-interface {v1, v2, v3}, Lcom/tkay/expressad/exoplayer/x$b;->a(ILjava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 877
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/x;->a(Z)V

    return-void

    :catchall_0
    move-exception v1

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/x;->a(Z)V

    .line 878
    throw v1
.end method

.method private f(Z)V
    .locals 1

    .line 435
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/k;->Y:Z

    .line 436
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/s;->a(Z)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    .line 437
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/k;->g(Z)V

    :cond_0
    return-void
.end method

.method private g()V
    .locals 8

    .line 472
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 477
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    .line 478
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/h/r;->c()J

    move-result-wide v4

    const-wide v1, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v1, v4, v1

    if-eqz v1, :cond_1

    .line 480
    invoke-direct {p0, v4, v5}, Lcom/tkay/expressad/exoplayer/k;->a(J)V

    .line 483
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v1, v1, Lcom/tkay/expressad/exoplayer/u;->j:J

    cmp-long v1, v4, v1

    if-eqz v1, :cond_2

    .line 484
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v3, v2, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v6, v1, Lcom/tkay/expressad/exoplayer/u;->e:J

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 486
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    const/4 v2, 0x4

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V

    goto :goto_0

    .line 489
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/e;->c()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    .line 13106
    iget-wide v3, v0, Lcom/tkay/expressad/exoplayer/q;->e:J

    sub-long/2addr v1, v3

    .line 491
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v3, v3, Lcom/tkay/expressad/exoplayer/u;->j:J

    invoke-direct {p0, v3, v4, v1, v2}, Lcom/tkay/expressad/exoplayer/k;->b(JJ)V

    .line 492
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iput-wide v1, v3, Lcom/tkay/expressad/exoplayer/u;->j:J

    .line 496
    :cond_2
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 497
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v2, v2

    if-nez v2, :cond_3

    .line 498
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v2, v0, Lcom/tkay/expressad/exoplayer/r;->e:J

    goto :goto_1

    :cond_3
    const/4 v2, 0x1

    .line 499
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/q;->a(Z)J

    move-result-wide v2

    :goto_1
    iput-wide v2, v1, Lcom/tkay/expressad/exoplayer/u;->k:J

    return-void
.end method

.method private g(Z)V
    .locals 7

    .line 444
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 445
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/u;->j:J

    const/4 v3, 0x1

    .line 446
    invoke-direct {p0, v2, v0, v1, v3}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JZ)J

    move-result-wide v3

    .line 447
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/u;->j:J

    cmp-long v0, v3, v0

    if-eqz v0, :cond_0

    .line 448
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v5, v1, Lcom/tkay/expressad/exoplayer/u;->e:J

    .line 449
    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    if-eqz p1, :cond_0

    .line 451
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V

    :cond_0
    return-void
.end method

.method private h()V
    .locals 19

    move-object/from16 v0, p0

    .line 503
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/k;->O:Lcom/tkay/expressad/exoplayer/k/c;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/k/c;->b()J

    move-result-wide v1

    .line 13370
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    const-wide v4, -0x7fffffffffffffffL    # -4.9E-324

    const/4 v7, 0x0

    const/4 v8, 0x1

    if-eqz v3, :cond_12

    .line 13374
    iget v9, v0, Lcom/tkay/expressad/exoplayer/k;->Z:I

    if-lez v9, :cond_0

    .line 13376
    invoke-interface {v3}, Lcom/tkay/expressad/exoplayer/h/s;->b()V

    goto/16 :goto_b

    .line 13494
    :cond_0
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v9, v0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-virtual {v3, v9, v10}, Lcom/tkay/expressad/exoplayer/s;->a(J)V

    .line 13495
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/s;->a()Z

    move-result v3

    if-eqz v3, :cond_2

    .line 13496
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v9, v0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    iget-object v11, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {v3, v9, v10, v11}, Lcom/tkay/expressad/exoplayer/s;->a(JLcom/tkay/expressad/exoplayer/u;)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v3

    if-nez v3, :cond_1

    .line 13498
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-interface {v3}, Lcom/tkay/expressad/exoplayer/h/s;->b()V

    goto :goto_0

    .line 13500
    :cond_1
    iget-object v9, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v10, v3, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v10, v10, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v11, v0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v9, v10, v11, v8}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v9

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 13501
    iget-object v12, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-object v13, v0, Lcom/tkay/expressad/exoplayer/k;->z:[Lcom/tkay/expressad/exoplayer/z;

    iget-object v14, v0, Lcom/tkay/expressad/exoplayer/k;->A:Lcom/tkay/expressad/exoplayer/i/h;

    iget-object v10, v0, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    .line 13505
    invoke-interface {v10}, Lcom/tkay/expressad/exoplayer/p;->d()Lcom/tkay/expressad/exoplayer/j/b;

    move-result-object v15

    iget-object v10, v0, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    move-object/from16 v16, v10

    move-object/from16 v17, v9

    move-object/from16 v18, v3

    .line 13502
    invoke-virtual/range {v12 .. v18}, Lcom/tkay/expressad/exoplayer/s;->a([Lcom/tkay/expressad/exoplayer/z;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/j/b;Lcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/r;)Lcom/tkay/expressad/exoplayer/h/r;

    move-result-object v9

    .line 13509
    iget-wide v10, v3, Lcom/tkay/expressad/exoplayer/r;->b:J

    invoke-interface {v9, v0, v10, v11}, Lcom/tkay/expressad/exoplayer/h/r;->a(Lcom/tkay/expressad/exoplayer/h/r$a;J)V

    .line 13510
    invoke-direct {v0, v8}, Lcom/tkay/expressad/exoplayer/k;->d(Z)V

    .line 13382
    :cond_2
    :goto_0
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/s;->b()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v3

    if-eqz v3, :cond_4

    .line 13383
    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/q;->a()Z

    move-result v3

    if-eqz v3, :cond_3

    goto :goto_1

    .line 13385
    :cond_3
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-boolean v3, v3, Lcom/tkay/expressad/exoplayer/u;->g:Z

    if-nez v3, :cond_5

    .line 13386
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->r()V

    goto :goto_2

    .line 13384
    :cond_4
    :goto_1
    invoke-direct {v0, v7}, Lcom/tkay/expressad/exoplayer/k;->d(Z)V

    .line 13389
    :cond_5
    :goto_2
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v3

    if-eqz v3, :cond_12

    .line 13395
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v3

    .line 13396
    iget-object v9, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v9}, Lcom/tkay/expressad/exoplayer/s;->d()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v9

    move v10, v7

    .line 13398
    :goto_3
    iget-boolean v11, v0, Lcom/tkay/expressad/exoplayer/k;->V:Z

    if-eqz v11, :cond_8

    if-eq v3, v9, :cond_8

    iget-wide v11, v0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    iget-object v13, v3, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-wide v13, v13, Lcom/tkay/expressad/exoplayer/q;->e:J

    cmp-long v11, v11, v13

    if-ltz v11, :cond_8

    if-eqz v10, :cond_6

    .line 13404
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->d()V

    .line 13407
    :cond_6
    iget-object v10, v3, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v10, v10, Lcom/tkay/expressad/exoplayer/r;->f:Z

    if-eqz v10, :cond_7

    move v10, v7

    goto :goto_4

    :cond_7
    const/4 v10, 0x3

    .line 13411
    :goto_4
    iget-object v11, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v11}, Lcom/tkay/expressad/exoplayer/s;->h()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v11

    .line 13412
    invoke-direct {v0, v3}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/q;)V

    .line 13413
    iget-object v12, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v3, v11, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v13, v3, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object v3, v11, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v14, v3, Lcom/tkay/expressad/exoplayer/r;->b:J

    iget-object v3, v11, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v6, v3, Lcom/tkay/expressad/exoplayer/r;->d:J

    move-wide/from16 v16, v6

    invoke-virtual/range {v12 .. v17}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v3

    iput-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 13415
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    invoke-virtual {v3, v10}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V

    .line 13416
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->g()V

    move v10, v8

    move-object v3, v11

    const/4 v7, 0x0

    goto :goto_3

    .line 13420
    :cond_8
    iget-object v3, v9, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v3, v3, Lcom/tkay/expressad/exoplayer/r;->g:Z

    if-eqz v3, :cond_a

    const/4 v3, 0x0

    .line 13421
    :goto_5
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v7, v6

    if-ge v3, v7, :cond_12

    .line 13422
    aget-object v6, v6, v3

    .line 13423
    iget-object v7, v9, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v7, v7, v3

    if-eqz v7, :cond_9

    .line 13426
    invoke-interface {v6}, Lcom/tkay/expressad/exoplayer/y;->f()Lcom/tkay/expressad/exoplayer/h/y;

    move-result-object v10

    if-ne v10, v7, :cond_9

    .line 13427
    invoke-interface {v6}, Lcom/tkay/expressad/exoplayer/y;->g()Z

    move-result v7

    if-eqz v7, :cond_9

    .line 13428
    invoke-interface {v6}, Lcom/tkay/expressad/exoplayer/y;->h()V

    :cond_9
    add-int/lit8 v3, v3, 0x1

    goto :goto_5

    .line 13435
    :cond_a
    iget-object v3, v9, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v3, :cond_12

    iget-object v3, v9, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-boolean v3, v3, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-nez v3, :cond_b

    goto/16 :goto_b

    :cond_b
    const/4 v3, 0x0

    .line 13440
    :goto_6
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v7, v6

    if-ge v3, v7, :cond_d

    .line 13441
    aget-object v6, v6, v3

    .line 13442
    iget-object v7, v9, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v7, v7, v3

    .line 13443
    invoke-interface {v6}, Lcom/tkay/expressad/exoplayer/y;->f()Lcom/tkay/expressad/exoplayer/h/y;

    move-result-object v10

    if-ne v10, v7, :cond_12

    if-eqz v7, :cond_c

    .line 13444
    invoke-interface {v6}, Lcom/tkay/expressad/exoplayer/y;->g()Z

    move-result v6

    if-nez v6, :cond_c

    goto/16 :goto_b

    :cond_c
    add-int/lit8 v3, v3, 0x1

    goto :goto_6

    .line 13450
    :cond_d
    iget-object v3, v9, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 13451
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/s;->g()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v6

    .line 13452
    iget-object v7, v6, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 13454
    iget-object v9, v6, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    .line 13455
    invoke-interface {v9}, Lcom/tkay/expressad/exoplayer/h/r;->c()J

    move-result-wide v9

    cmp-long v9, v9, v4

    if-eqz v9, :cond_e

    move v9, v8

    goto :goto_7

    :cond_e
    const/4 v9, 0x0

    :goto_7
    const/4 v10, 0x0

    .line 13456
    :goto_8
    iget-object v11, v0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v12, v11

    if-ge v10, v12, :cond_12

    .line 13457
    aget-object v11, v11, v10

    .line 13458
    invoke-virtual {v3, v10}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v12

    if-eqz v12, :cond_11

    if-nez v9, :cond_10

    .line 13465
    invoke-interface {v11}, Lcom/tkay/expressad/exoplayer/y;->i()Z

    move-result v12

    if-nez v12, :cond_11

    .line 13466
    iget-object v12, v7, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    invoke-virtual {v12, v10}, Lcom/tkay/expressad/exoplayer/i/g;->a(I)Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object v12

    .line 13467
    invoke-virtual {v7, v10}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v13

    .line 13468
    iget-object v14, v0, Lcom/tkay/expressad/exoplayer/k;->z:[Lcom/tkay/expressad/exoplayer/z;

    aget-object v14, v14, v10

    invoke-interface {v14}, Lcom/tkay/expressad/exoplayer/z;->a()I

    move-result v14

    const/4 v15, 0x5

    if-ne v14, v15, :cond_f

    move v14, v8

    goto :goto_9

    :cond_f
    const/4 v14, 0x0

    .line 13469
    :goto_9
    iget-object v15, v3, Lcom/tkay/expressad/exoplayer/i/i;->b:[Lcom/tkay/expressad/exoplayer/aa;

    aget-object v15, v15, v10

    .line 13470
    iget-object v8, v7, Lcom/tkay/expressad/exoplayer/i/i;->b:[Lcom/tkay/expressad/exoplayer/aa;

    aget-object v8, v8, v10

    if-eqz v13, :cond_10

    .line 13471
    invoke-virtual {v8, v15}, Lcom/tkay/expressad/exoplayer/aa;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_10

    if-nez v14, :cond_10

    .line 13478
    invoke-static {v12}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/i/f;)[Lcom/tkay/expressad/exoplayer/m;

    move-result-object v8

    .line 13479
    iget-object v12, v6, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v12, v12, v10

    .line 14106
    iget-wide v13, v6, Lcom/tkay/expressad/exoplayer/q;->e:J

    .line 13479
    invoke-interface {v11, v8, v12, v13, v14}, Lcom/tkay/expressad/exoplayer/y;->a([Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/h/y;J)V

    goto :goto_a

    .line 13487
    :cond_10
    invoke-interface {v11}, Lcom/tkay/expressad/exoplayer/y;->h()V

    :cond_11
    :goto_a
    add-int/lit8 v10, v10, 0x1

    const/4 v8, 0x1

    goto :goto_8

    .line 505
    :cond_12
    :goto_b
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v3

    const-wide/16 v6, 0xa

    if-nez v3, :cond_13

    .line 507
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->n()V

    .line 508
    invoke-direct {v0, v1, v2, v6, v7}, Lcom/tkay/expressad/exoplayer/k;->a(JJ)V

    return-void

    .line 511
    :cond_13
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v3

    const-string v8, "doSomeWork"

    .line 513
    invoke-static {v8}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    .line 515
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->g()V

    .line 516
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v8

    const-wide/16 v10, 0x3e8

    mul-long/2addr v8, v10

    .line 518
    iget-object v12, v3, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    iget-object v13, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v13, v13, Lcom/tkay/expressad/exoplayer/u;->j:J

    iget-wide v10, v0, Lcom/tkay/expressad/exoplayer/k;->J:J

    sub-long/2addr v13, v10

    iget-boolean v10, v0, Lcom/tkay/expressad/exoplayer/k;->K:Z

    invoke-interface {v12, v13, v14, v10}, Lcom/tkay/expressad/exoplayer/h/r;->a(JZ)V

    .line 523
    iget-object v10, v0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v11, v10

    const/4 v12, 0x0

    const/4 v13, 0x1

    const/4 v14, 0x1

    :goto_c
    if-ge v12, v11, :cond_1a

    aget-object v15, v10, v12

    .line 527
    iget-wide v6, v0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-interface {v15, v6, v7, v8, v9}, Lcom/tkay/expressad/exoplayer/y;->a(JJ)V

    if-eqz v14, :cond_14

    .line 528
    invoke-interface {v15}, Lcom/tkay/expressad/exoplayer/y;->v()Z

    move-result v6

    if-eqz v6, :cond_14

    const/4 v14, 0x1

    goto :goto_d

    :cond_14
    const/4 v14, 0x0

    .line 533
    :goto_d
    invoke-interface {v15}, Lcom/tkay/expressad/exoplayer/y;->u()Z

    move-result v6

    if-nez v6, :cond_17

    invoke-interface {v15}, Lcom/tkay/expressad/exoplayer/y;->v()Z

    move-result v6

    if-nez v6, :cond_17

    .line 14632
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/s;->d()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v6

    .line 14633
    iget-object v7, v6, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v7, :cond_15

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-boolean v6, v6, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-eqz v6, :cond_15

    .line 14634
    invoke-interface {v15}, Lcom/tkay/expressad/exoplayer/y;->g()Z

    move-result v6

    if-eqz v6, :cond_15

    const/4 v6, 0x1

    goto :goto_e

    :cond_15
    const/4 v6, 0x0

    :goto_e
    if-eqz v6, :cond_16

    goto :goto_f

    :cond_16
    const/4 v6, 0x0

    goto :goto_10

    :cond_17
    :goto_f
    const/4 v6, 0x1

    :goto_10
    if-nez v6, :cond_18

    .line 536
    invoke-interface {v15}, Lcom/tkay/expressad/exoplayer/y;->j()V

    :cond_18
    if-eqz v13, :cond_19

    if-eqz v6, :cond_19

    const/4 v13, 0x1

    goto :goto_11

    :cond_19
    const/4 v13, 0x0

    :goto_11
    add-int/lit8 v12, v12, 0x1

    const-wide/16 v6, 0xa

    goto :goto_c

    :cond_1a
    if-nez v13, :cond_1b

    .line 541
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->n()V

    .line 544
    :cond_1b
    iget-object v6, v3, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v6, v6, Lcom/tkay/expressad/exoplayer/r;->e:J

    const/4 v8, 0x4

    const/4 v9, 0x2

    if-eqz v14, :cond_1d

    cmp-long v4, v6, v4

    if-eqz v4, :cond_1c

    .line 545
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v4, v4, Lcom/tkay/expressad/exoplayer/u;->j:J

    cmp-long v4, v6, v4

    if-gtz v4, :cond_1d

    :cond_1c
    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v3, v3, Lcom/tkay/expressad/exoplayer/r;->g:Z

    if-eqz v3, :cond_1d

    .line 549
    invoke-direct {v0, v8}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    .line 550
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->f()V

    goto/16 :goto_13

    .line 551
    :cond_1d
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-ne v3, v9, :cond_22

    .line 15096
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v3, v3

    if-nez v3, :cond_1e

    .line 15098
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->m()Z

    move-result v3

    move/from16 v16, v3

    goto :goto_12

    :cond_1e
    if-eqz v13, :cond_21

    .line 15103
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-boolean v3, v3, Lcom/tkay/expressad/exoplayer/u;->g:Z

    if-nez v3, :cond_1f

    const/16 v16, 0x1

    goto :goto_12

    .line 15109
    :cond_1f
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/s;->b()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v3

    .line 15110
    iget-object v4, v3, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v4, v4, Lcom/tkay/expressad/exoplayer/r;->g:Z

    const/4 v5, 0x1

    xor-int/2addr v4, v5

    invoke-virtual {v3, v4}, Lcom/tkay/expressad/exoplayer/q;->a(Z)J

    move-result-wide v6

    const-wide/high16 v10, -0x8000000000000000L

    cmp-long v4, v6, v10

    if-eqz v4, :cond_20

    .line 15111
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    iget-wide v10, v0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    .line 16106
    iget-wide v14, v3, Lcom/tkay/expressad/exoplayer/q;->e:J

    sub-long/2addr v10, v14

    sub-long/2addr v6, v10

    .line 15113
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    .line 15114
    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/e;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v3

    iget v3, v3, Lcom/tkay/expressad/exoplayer/v;->b:F

    iget-boolean v10, v0, Lcom/tkay/expressad/exoplayer/k;->W:Z

    .line 15112
    invoke-interface {v4, v6, v7, v3, v10}, Lcom/tkay/expressad/exoplayer/p;->a(JFZ)Z

    move-result v3

    if-eqz v3, :cond_21

    :cond_20
    move/from16 v16, v5

    goto :goto_12

    :cond_21
    const/16 v16, 0x0

    :goto_12
    if-eqz v16, :cond_22

    const/4 v3, 0x3

    .line 553
    invoke-direct {v0, v3}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    .line 554
    iget-boolean v4, v0, Lcom/tkay/expressad/exoplayer/k;->V:Z

    if-eqz v4, :cond_25

    .line 555
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->e()V

    goto :goto_13

    :cond_22
    const/4 v3, 0x3

    .line 557
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v4, v4, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-ne v4, v3, :cond_25

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v3, v3

    if-nez v3, :cond_23

    .line 558
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->m()Z

    move-result v3

    if-eqz v3, :cond_24

    goto :goto_13

    :cond_23
    if-nez v13, :cond_25

    .line 559
    :cond_24
    iget-boolean v3, v0, Lcom/tkay/expressad/exoplayer/k;->V:Z

    iput-boolean v3, v0, Lcom/tkay/expressad/exoplayer/k;->W:Z

    .line 560
    invoke-direct {v0, v9}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    .line 561
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->f()V

    .line 564
    :cond_25
    :goto_13
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-ne v3, v9, :cond_26

    .line 565
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v4, v3

    const/4 v7, 0x0

    :goto_14
    if-ge v7, v4, :cond_26

    aget-object v5, v3, v7

    .line 566
    invoke-interface {v5}, Lcom/tkay/expressad/exoplayer/y;->j()V

    add-int/lit8 v7, v7, 0x1

    goto :goto_14

    .line 570
    :cond_26
    iget-boolean v3, v0, Lcom/tkay/expressad/exoplayer/k;->V:Z

    if-eqz v3, :cond_27

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v4, 0x3

    if-eq v3, v4, :cond_28

    :cond_27
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-ne v3, v9, :cond_29

    :cond_28
    const-wide/16 v3, 0xa

    .line 572
    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/k;->a(JJ)V

    goto :goto_15

    .line 573
    :cond_29
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v3, v3

    if-eqz v3, :cond_2a

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-eq v3, v8, :cond_2a

    const-wide/16 v3, 0x3e8

    .line 574
    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/k;->a(JJ)V

    goto :goto_15

    .line 576
    :cond_2a
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/k/k;->b()V

    .line 579
    :goto_15
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    return-void
.end method

.method private h(Z)Z
    .locals 9

    .line 1096
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v0, v0

    if-nez v0, :cond_0

    .line 1098
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->m()Z

    move-result p1

    return p1

    :cond_0
    const/4 v0, 0x0

    if-nez p1, :cond_1

    return v0

    .line 1103
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-boolean p1, p1, Lcom/tkay/expressad/exoplayer/u;->g:Z

    const/4 v1, 0x1

    if-nez p1, :cond_2

    return v1

    .line 1109
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/s;->b()Lcom/tkay/expressad/exoplayer/q;

    move-result-object p1

    .line 1110
    iget-object v2, p1, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v2, v2, Lcom/tkay/expressad/exoplayer/r;->g:Z

    xor-int/2addr v2, v1

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/exoplayer/q;->a(Z)J

    move-result-wide v2

    const-wide/high16 v4, -0x8000000000000000L

    cmp-long v4, v2, v4

    if-eqz v4, :cond_4

    .line 1111
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    iget-wide v5, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    .line 19106
    iget-wide v7, p1, Lcom/tkay/expressad/exoplayer/q;->e:J

    sub-long/2addr v5, v7

    sub-long/2addr v2, v5

    .line 1113
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    .line 1114
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/e;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object p1

    iget p1, p1, Lcom/tkay/expressad/exoplayer/v;->b:F

    iget-boolean v5, p0, Lcom/tkay/expressad/exoplayer/k;->W:Z

    .line 1112
    invoke-interface {v4, v2, v3, p1, v5}, Lcom/tkay/expressad/exoplayer/p;->a(JFZ)Z

    move-result p1

    if-eqz p1, :cond_3

    goto :goto_0

    :cond_3
    return v0

    :cond_4
    :goto_0
    return v1
.end method

.method private i()V
    .locals 3

    const/4 v0, 0x1

    .line 750
    invoke-direct {p0, v0, v0, v0}, Lcom/tkay/expressad/exoplayer/k;->a(ZZZ)V

    .line 752
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/p;->c()V

    .line 753
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    .line 755
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x12

    if-lt v1, v2, :cond_0

    .line 756
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->E:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->quitSafely()Z

    goto :goto_0

    .line 758
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->E:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->quit()Z

    .line 760
    :goto_0
    monitor-enter p0

    .line 761
    :try_start_0
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/k;->U:Z

    .line 762
    invoke-virtual {p0}, Ljava/lang/Object;->notifyAll()V

    .line 763
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private j()I
    .locals 4

    .line 767
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 768
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    .line 771
    :cond_0
    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/k;->Y:Z

    .line 770
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ae;->b(Z)I

    move-result v1

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->H:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 17621
    invoke-virtual {v0, v1, v3, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object v0

    .line 770
    iget v0, v0, Lcom/tkay/expressad/exoplayer/ae$b;->f:I

    return v0
.end method

.method private k()V
    .locals 3

    .line 882
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    :goto_0
    if-ltz v0, :cond_1

    .line 883
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/k$b;

    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/k$b;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 885
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/k$b;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/k$b;->a:Lcom/tkay/expressad/exoplayer/x;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/x;->a(Z)V

    .line 886
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    :cond_0
    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    .line 890
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-static {v0}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    return-void
.end method

.method private l()V
    .locals 15

    .line 990
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 994
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/e;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v0

    iget v0, v0, Lcom/tkay/expressad/exoplayer/v;->b:F

    .line 996
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v1

    .line 997
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->d()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v2

    const/4 v3, 0x1

    move v4, v3

    :goto_0
    if-eqz v1, :cond_c

    .line 1000
    iget-boolean v5, v1, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-nez v5, :cond_1

    goto/16 :goto_5

    .line 1004
    :cond_1
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/q;->a(F)Z

    move-result v5

    const/4 v6, 0x0

    if-nez v5, :cond_3

    if-ne v1, v2, :cond_2

    move v4, v6

    .line 1012
    :cond_2
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    goto :goto_0

    :cond_3
    const/4 v0, 0x4

    if-eqz v4, :cond_a

    .line 1017
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v1

    .line 1018
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;)Z

    move-result v2

    .line 1020
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v4, v4

    new-array v4, v4, [Z

    .line 1021
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v7, v5, Lcom/tkay/expressad/exoplayer/u;->j:J

    .line 1022
    invoke-virtual {v1, v7, v8, v2, v4}, Lcom/tkay/expressad/exoplayer/q;->a(JZ[Z)J

    move-result-wide v7

    .line 1024
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    invoke-direct {p0, v2}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/i/i;)V

    .line 1026
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-eq v2, v0, :cond_4

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v9, v2, Lcom/tkay/expressad/exoplayer/u;->j:J

    cmp-long v2, v7, v9

    if-eqz v2, :cond_4

    .line 1028
    iget-object v9, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v10, v9, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v13, v2, Lcom/tkay/expressad/exoplayer/u;->e:J

    move-wide v11, v7

    invoke-virtual/range {v9 .. v14}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 1030
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V

    .line 1031
    invoke-direct {p0, v7, v8}, Lcom/tkay/expressad/exoplayer/k;->a(J)V

    .line 1035
    :cond_4
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v2, v2

    new-array v2, v2, [Z

    move v5, v6

    move v7, v5

    .line 1036
    :goto_1
    iget-object v8, p0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v9, v8

    if-ge v5, v9, :cond_9

    .line 1037
    aget-object v8, v8, v5

    .line 1038
    invoke-interface {v8}, Lcom/tkay/expressad/exoplayer/y;->a_()I

    move-result v9

    if-eqz v9, :cond_5

    move v9, v3

    goto :goto_2

    :cond_5
    move v9, v6

    :goto_2
    aput-boolean v9, v2, v5

    .line 1039
    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v9, v9, v5

    if-eqz v9, :cond_6

    add-int/lit8 v7, v7, 0x1

    .line 1043
    :cond_6
    aget-boolean v10, v2, v5

    if-eqz v10, :cond_8

    .line 1044
    invoke-interface {v8}, Lcom/tkay/expressad/exoplayer/y;->f()Lcom/tkay/expressad/exoplayer/h/y;

    move-result-object v10

    if-eq v9, v10, :cond_7

    .line 1046
    invoke-direct {p0, v8}, Lcom/tkay/expressad/exoplayer/k;->b(Lcom/tkay/expressad/exoplayer/y;)V

    goto :goto_3

    .line 1047
    :cond_7
    aget-boolean v9, v4, v5

    if-eqz v9, :cond_8

    .line 1049
    iget-wide v9, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-interface {v8, v9, v10}, Lcom/tkay/expressad/exoplayer/y;->a(J)V

    :cond_8
    :goto_3
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 1053
    :cond_9
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v4, v1, Lcom/tkay/expressad/exoplayer/q;->j:Lcom/tkay/expressad/exoplayer/h/af;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 1054
    invoke-virtual {v3, v4, v1}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/af;Lcom/tkay/expressad/exoplayer/i/i;)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 1056
    invoke-direct {p0, v2, v7}, Lcom/tkay/expressad/exoplayer/k;->a([ZI)V

    goto :goto_4

    .line 1059
    :cond_a
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;)Z

    .line 1060
    iget-boolean v2, v1, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-eqz v2, :cond_b

    .line 1061
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v2, v2, Lcom/tkay/expressad/exoplayer/r;->b:J

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    .line 18106
    iget-wide v6, v1, Lcom/tkay/expressad/exoplayer/q;->e:J

    sub-long/2addr v4, v6

    .line 1062
    invoke-static {v2, v3, v4, v5}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v2

    .line 1064
    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/exoplayer/q;->b(J)J

    .line 1065
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/i/i;)V

    .line 1068
    :cond_b
    :goto_4
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-eq v1, v0, :cond_c

    .line 1069
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->r()V

    .line 1070
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->g()V

    .line 1071
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/4 v1, 0x2

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z

    :cond_c
    :goto_5
    return-void
.end method

.method private m()Z
    .locals 5

    .line 1119
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    .line 1120
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v1, v1, Lcom/tkay/expressad/exoplayer/r;->e:J

    const-wide v3, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v3, v1, v3

    if-eqz v3, :cond_1

    .line 1121
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v3, v3, Lcom/tkay/expressad/exoplayer/u;->j:J

    cmp-long v1, v3, v1

    if-ltz v1, :cond_1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v1, :cond_0

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-boolean v1, v1, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-nez v1, :cond_1

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 1124
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method private n()V
    .locals 5

    .line 1128
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->b()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    .line 1129
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/s;->d()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v1

    if-eqz v0, :cond_3

    .line 1130
    iget-boolean v2, v0, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-nez v2, :cond_3

    if-eqz v1, :cond_0

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-ne v1, v0, :cond_3

    .line 1132
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_2

    aget-object v4, v1, v3

    .line 1133
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/y;->g()Z

    move-result v4

    if-nez v4, :cond_1

    return-void

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 1137
    :cond_2
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/r;->a()V

    :cond_3
    return-void
.end method

.method private o()V
    .locals 2

    const/4 v0, 0x4

    .line 1269
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    const/4 v0, 0x0

    const/4 v1, 0x1

    .line 1271
    invoke-direct {p0, v0, v1, v0}, Lcom/tkay/expressad/exoplayer/k;->a(ZZZ)V

    return-void
.end method

.method private p()V
    .locals 13

    .line 1370
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    if-nez v0, :cond_0

    return-void

    .line 1374
    :cond_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k;->Z:I

    if-lez v1, :cond_1

    .line 1376
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/s;->b()V

    return-void

    .line 22494
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/s;->a(J)V

    .line 22495
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->a()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_3

    .line 22496
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {v0, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/s;->a(JLcom/tkay/expressad/exoplayer/u;)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v0

    if-nez v0, :cond_2

    .line 22498
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/s;->b()V

    goto :goto_0

    .line 22500
    :cond_2
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v2, v3, v4, v1}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v2

    iget-object v10, v2, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 22501
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/k;->z:[Lcom/tkay/expressad/exoplayer/z;

    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/k;->A:Lcom/tkay/expressad/exoplayer/i/h;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    .line 22505
    invoke-interface {v2}, Lcom/tkay/expressad/exoplayer/p;->d()Lcom/tkay/expressad/exoplayer/j/b;

    move-result-object v8

    iget-object v9, p0, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    move-object v11, v0

    .line 22502
    invoke-virtual/range {v5 .. v11}, Lcom/tkay/expressad/exoplayer/s;->a([Lcom/tkay/expressad/exoplayer/z;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/j/b;Lcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/r;)Lcom/tkay/expressad/exoplayer/h/r;

    move-result-object v2

    .line 22509
    iget-wide v3, v0, Lcom/tkay/expressad/exoplayer/r;->b:J

    invoke-interface {v2, p0, v3, v4}, Lcom/tkay/expressad/exoplayer/h/r;->a(Lcom/tkay/expressad/exoplayer/h/r$a;J)V

    .line 22510
    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/k;->d(Z)V

    .line 1382
    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->b()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    const/4 v2, 0x0

    if-eqz v0, :cond_5

    .line 1383
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/q;->a()Z

    move-result v0

    if-eqz v0, :cond_4

    goto :goto_1

    .line 1385
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/u;->g:Z

    if-nez v0, :cond_6

    .line 1386
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->r()V

    goto :goto_2

    .line 1384
    :cond_5
    :goto_1
    invoke-direct {p0, v2}, Lcom/tkay/expressad/exoplayer/k;->d(Z)V

    .line 1389
    :cond_6
    :goto_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v0

    if-nez v0, :cond_7

    return-void

    .line 1395
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    .line 1396
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/s;->d()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v3

    move v4, v2

    .line 1398
    :goto_3
    iget-boolean v5, p0, Lcom/tkay/expressad/exoplayer/k;->V:Z

    if-eqz v5, :cond_a

    if-eq v0, v3, :cond_a

    iget-wide v5, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-wide v7, v7, Lcom/tkay/expressad/exoplayer/q;->e:J

    cmp-long v5, v5, v7

    if-ltz v5, :cond_a

    if-eqz v4, :cond_8

    .line 1404
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->d()V

    .line 1407
    :cond_8
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v4, v4, Lcom/tkay/expressad/exoplayer/r;->f:Z

    if-eqz v4, :cond_9

    move v4, v2

    goto :goto_4

    :cond_9
    const/4 v4, 0x3

    .line 1411
    :goto_4
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/s;->h()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v5

    .line 1412
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/q;)V

    .line 1413
    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v5, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object v0, v5, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v8, v0, Lcom/tkay/expressad/exoplayer/r;->b:J

    iget-object v0, v5, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v10, v0, Lcom/tkay/expressad/exoplayer/r;->d:J

    invoke-virtual/range {v6 .. v11}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 1415
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V

    .line 1416
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k;->g()V

    move v4, v1

    move-object v0, v5

    goto :goto_3

    .line 1420
    :cond_a
    iget-object v0, v3, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/r;->g:Z

    if-eqz v0, :cond_d

    .line 1421
    :goto_5
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v1, v0

    if-ge v2, v1, :cond_c

    .line 1422
    aget-object v0, v0, v2

    .line 1423
    iget-object v1, v3, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v1, v1, v2

    if-eqz v1, :cond_b

    .line 1426
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/y;->f()Lcom/tkay/expressad/exoplayer/h/y;

    move-result-object v4

    if-ne v4, v1, :cond_b

    .line 1427
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/y;->g()Z

    move-result v1

    if-eqz v1, :cond_b

    .line 1428
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/y;->h()V

    :cond_b
    add-int/lit8 v2, v2, 0x1

    goto :goto_5

    :cond_c
    return-void

    .line 1435
    :cond_d
    iget-object v0, v3, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v0, :cond_16

    iget-object v0, v3, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-nez v0, :cond_e

    goto/16 :goto_c

    :cond_e
    move v0, v2

    .line 1440
    :goto_6
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v5, v4

    if-ge v0, v5, :cond_11

    .line 1441
    aget-object v4, v4, v0

    .line 1442
    iget-object v5, v3, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v5, v5, v0

    .line 1443
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/y;->f()Lcom/tkay/expressad/exoplayer/h/y;

    move-result-object v6

    if-ne v6, v5, :cond_10

    if-eqz v5, :cond_f

    .line 1444
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/y;->g()Z

    move-result v4

    if-nez v4, :cond_f

    goto :goto_7

    :cond_f
    add-int/lit8 v0, v0, 0x1

    goto :goto_6

    :cond_10
    :goto_7
    return-void

    .line 1450
    :cond_11
    iget-object v0, v3, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 1451
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/s;->g()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v3

    .line 1452
    iget-object v4, v3, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 1454
    iget-object v5, v3, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    .line 1455
    invoke-interface {v5}, Lcom/tkay/expressad/exoplayer/h/r;->c()J

    move-result-wide v5

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v5, v5, v7

    if-eqz v5, :cond_12

    move v5, v1

    goto :goto_8

    :cond_12
    move v5, v2

    :goto_8
    move v6, v2

    .line 1456
    :goto_9
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v8, v7

    if-ge v6, v8, :cond_16

    .line 1457
    aget-object v7, v7, v6

    .line 1458
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v8

    if-eqz v8, :cond_15

    if-nez v5, :cond_14

    .line 1465
    invoke-interface {v7}, Lcom/tkay/expressad/exoplayer/y;->i()Z

    move-result v8

    if-nez v8, :cond_15

    .line 1466
    iget-object v8, v4, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    invoke-virtual {v8, v6}, Lcom/tkay/expressad/exoplayer/i/g;->a(I)Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object v8

    .line 1467
    invoke-virtual {v4, v6}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v9

    .line 1468
    iget-object v10, p0, Lcom/tkay/expressad/exoplayer/k;->z:[Lcom/tkay/expressad/exoplayer/z;

    aget-object v10, v10, v6

    invoke-interface {v10}, Lcom/tkay/expressad/exoplayer/z;->a()I

    move-result v10

    const/4 v11, 0x5

    if-ne v10, v11, :cond_13

    move v10, v1

    goto :goto_a

    :cond_13
    move v10, v2

    .line 1469
    :goto_a
    iget-object v11, v0, Lcom/tkay/expressad/exoplayer/i/i;->b:[Lcom/tkay/expressad/exoplayer/aa;

    aget-object v11, v11, v6

    .line 1470
    iget-object v12, v4, Lcom/tkay/expressad/exoplayer/i/i;->b:[Lcom/tkay/expressad/exoplayer/aa;

    aget-object v12, v12, v6

    if-eqz v9, :cond_14

    .line 1471
    invoke-virtual {v12, v11}, Lcom/tkay/expressad/exoplayer/aa;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_14

    if-nez v10, :cond_14

    .line 1478
    invoke-static {v8}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/i/f;)[Lcom/tkay/expressad/exoplayer/m;

    move-result-object v8

    .line 1479
    iget-object v9, v3, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v9, v9, v6

    .line 23106
    iget-wide v10, v3, Lcom/tkay/expressad/exoplayer/q;->e:J

    .line 1479
    invoke-interface {v7, v8, v9, v10, v11}, Lcom/tkay/expressad/exoplayer/y;->a([Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/h/y;J)V

    goto :goto_b

    .line 1487
    :cond_14
    invoke-interface {v7}, Lcom/tkay/expressad/exoplayer/y;->h()V

    :cond_15
    :goto_b
    add-int/lit8 v6, v6, 0x1

    goto :goto_9

    :cond_16
    :goto_c
    return-void
.end method

.method private q()V
    .locals 12

    .line 1494
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/s;->a(J)V

    .line 1495
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1496
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/s;->a(JLcom/tkay/expressad/exoplayer/u;)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v0

    if-nez v0, :cond_0

    .line 1498
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/s;->b()V

    return-void

    .line 1500
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v11, 0x1

    invoke-virtual {v1, v2, v3, v11}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v1

    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 1501
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/k;->z:[Lcom/tkay/expressad/exoplayer/z;

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/k;->A:Lcom/tkay/expressad/exoplayer/i/h;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    .line 1505
    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/p;->d()Lcom/tkay/expressad/exoplayer/j/b;

    move-result-object v7

    iget-object v8, p0, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    move-object v10, v0

    .line 1502
    invoke-virtual/range {v4 .. v10}, Lcom/tkay/expressad/exoplayer/s;->a([Lcom/tkay/expressad/exoplayer/z;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/j/b;Lcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/r;)Lcom/tkay/expressad/exoplayer/h/r;

    move-result-object v1

    .line 1509
    iget-wide v2, v0, Lcom/tkay/expressad/exoplayer/r;->b:J

    invoke-interface {v1, p0, v2, v3}, Lcom/tkay/expressad/exoplayer/h/r;->a(Lcom/tkay/expressad/exoplayer/h/r$a;J)V

    .line 1510
    invoke-direct {p0, v11}, Lcom/tkay/expressad/exoplayer/k;->d(Z)V

    :cond_1
    return-void
.end method

.method private r()V
    .locals 7

    .line 1543
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->b()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    .line 1544
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/q;->b()J

    move-result-wide v1

    const-wide/high16 v3, -0x8000000000000000L

    cmp-long v3, v1, v3

    if-nez v3, :cond_0

    const/4 v0, 0x0

    .line 1546
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/k;->d(Z)V

    return-void

    .line 1549
    :cond_0
    iget-wide v3, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    .line 24106
    iget-wide v5, v0, Lcom/tkay/expressad/exoplayer/q;->e:J

    sub-long/2addr v3, v5

    sub-long/2addr v1, v3

    .line 1551
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    .line 1553
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/e;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v4

    iget v4, v4, Lcom/tkay/expressad/exoplayer/v;->b:F

    .line 1552
    invoke-interface {v3, v1, v2, v4}, Lcom/tkay/expressad/exoplayer/p;->a(JF)Z

    move-result v1

    .line 1554
    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/k;->d(Z)V

    if-eqz v1, :cond_1

    .line 1556
    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/q;->a(J)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final declared-synchronized a()V
    .locals 7

    monitor-enter p0

    .line 227
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/k;->U:Z

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->E:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->isAlive()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_2

    .line 230
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/4 v1, 0x7

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z

    .line 232
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->O:Lcom/tkay/expressad/exoplayer/k/c;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/k/c;->a()J

    move-result-wide v0

    const-wide/16 v2, 0x1f4

    add-long/2addr v0, v2

    const/4 v4, 0x0

    .line 235
    :goto_0
    iget-boolean v5, p0, Lcom/tkay/expressad/exoplayer/k;->U:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v5, :cond_1

    const-wide/16 v5, 0x0

    cmp-long v5, v2, v5

    if-lez v5, :cond_1

    .line 237
    :try_start_1
    invoke-virtual {p0, v2, v3}, Ljava/lang/Object;->wait(J)V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    const/4 v2, 0x1

    move v4, v2

    .line 241
    :goto_1
    :try_start_2
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k;->O:Lcom/tkay/expressad/exoplayer/k/c;

    invoke-interface {v2}, Lcom/tkay/expressad/exoplayer/k/c;->a()J

    move-result-wide v2

    sub-long v2, v0, v2

    goto :goto_0

    :cond_1
    if-eqz v4, :cond_2

    .line 244
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->interrupt()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 246
    :cond_2
    monitor-exit p0

    return-void

    .line 228
    :cond_3
    :goto_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final a(I)V
    .locals 2

    .line 192
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/16 v1, 0xc

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(II)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/ac;)V
    .locals 2

    .line 209
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/4 v1, 0x5

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/ae;IJ)V
    .locals 2

    .line 200
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    new-instance v1, Lcom/tkay/expressad/exoplayer/k$d;

    invoke-direct {v1, p1, p2, p3, p4}, Lcom/tkay/expressad/exoplayer/k$d;-><init>(Lcom/tkay/expressad/exoplayer/ae;IJ)V

    const/4 p1, 0x3

    invoke-interface {v0, p1, v1}, Lcom/tkay/expressad/exoplayer/k/k;->a(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    .line 201
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/r;)V
    .locals 2

    .line 264
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/16 v1, 0x9

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 2

    .line 256
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    new-instance v1, Lcom/tkay/expressad/exoplayer/k$a;

    invoke-direct {v1, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/k$a;-><init>(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    const/16 p1, 0x8

    invoke-interface {v0, p1, v1}, Lcom/tkay/expressad/exoplayer/k/k;->a(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    .line 257
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/s;ZZ)V
    .locals 1

    .line 182
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    .line 183
    invoke-interface {v0, p2, p3, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(IILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    .line 184
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final synthetic a(Lcom/tkay/expressad/exoplayer/h/z;)V
    .locals 2

    .line 52
    check-cast p1, Lcom/tkay/expressad/exoplayer/h/r;

    .line 25269
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/16 v1, 0xa

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/v;)V
    .locals 5

    .line 283
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->F:Landroid/os/Handler;

    const/4 v1, 0x1

    invoke-virtual {v0, v1, p1}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/Message;->sendToTarget()V

    .line 284
    iget p1, p1, Lcom/tkay/expressad/exoplayer/v;->b:F

    .line 2081
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/s;->e()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v0

    :goto_0
    if-eqz v0, :cond_2

    .line 2083
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    if-eqz v1, :cond_1

    .line 2084
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/i/g;->a()[Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object v1

    .line 2085
    array-length v2, v1

    const/4 v3, 0x0

    :goto_1
    if-ge v3, v2, :cond_1

    aget-object v4, v1, v3

    if-eqz v4, :cond_0

    .line 2087
    invoke-interface {v4, p1}, Lcom/tkay/expressad/exoplayer/i/f;->a(F)V

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 2091
    :cond_1
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    goto :goto_0

    :cond_2
    return-void
.end method

.method public final declared-synchronized a(Lcom/tkay/expressad/exoplayer/x;)V
    .locals 2

    monitor-enter p0

    .line 218
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/k;->U:Z

    if-eqz v0, :cond_0

    const-string v0, "ExoPlayerImplInternal"

    const-string v1, "Ignoring messages sent after release."

    .line 219
    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    .line 220
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/x;->a(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 221
    monitor-exit p0

    return-void

    .line 223
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/16 v1, 0xe

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 224
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Z)V
    .locals 2

    .line 188
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/4 v1, 0x1

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(II)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final b()Landroid/os/Looper;
    .locals 1

    .line 249
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->E:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    return-object v0
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/v;)V
    .locals 2

    .line 205
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/4 v1, 0x4

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final b(Z)V
    .locals 2

    .line 196
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/16 v1, 0xd

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(II)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final c()V
    .locals 2

    .line 276
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/16 v1, 0xb

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z

    return-void
.end method

.method public final c(Z)V
    .locals 2

    .line 213
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    const/4 v1, 0x6

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/k;->a(II)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final handleMessage(Landroid/os/Message;)Z
    .locals 31

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    const-string v3, "ExoPlayerImplInternal"

    const/4 v4, 0x2

    const/4 v5, 0x0

    const/4 v6, 0x1

    .line 293
    :try_start_0
    iget v7, v2, Landroid/os/Message;->what:I
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_0 .. :try_end_0} :catch_1a
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_19
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_18

    const/4 v8, 0x0

    const/4 v10, 0x4

    const-wide/16 v11, 0x0

    const-wide v13, -0x7fffffffffffffffL    # -4.9E-324

    packed-switch v7, :pswitch_data_0

    move v2, v5

    return v2

    .line 340
    :pswitch_0
    :try_start_1
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Lcom/tkay/expressad/exoplayer/x;

    .line 12855
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/x;->e()Landroid/os/Handler;

    move-result-object v7

    .line 12856
    new-instance v8, Lcom/tkay/expressad/exoplayer/k$1;

    invoke-direct {v8, v1, v2}, Lcom/tkay/expressad/exoplayer/k$1;-><init>(Lcom/tkay/expressad/exoplayer/k;Lcom/tkay/expressad/exoplayer/x;)V

    invoke-virtual {v7, v8}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto/16 :goto_38

    .line 337
    :pswitch_1
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Lcom/tkay/expressad/exoplayer/x;

    .line 12823
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/x;->f()J

    move-result-wide v7

    cmp-long v7, v7, v13

    if-nez v7, :cond_0

    .line 12825
    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->d(Lcom/tkay/expressad/exoplayer/x;)V

    goto/16 :goto_38

    .line 12826
    :cond_0
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    if-eqz v7, :cond_3

    iget v7, v1, Lcom/tkay/expressad/exoplayer/k;->Z:I

    if-lez v7, :cond_1

    goto :goto_0

    .line 12830
    :cond_1
    new-instance v7, Lcom/tkay/expressad/exoplayer/k$b;

    invoke-direct {v7, v2}, Lcom/tkay/expressad/exoplayer/k$b;-><init>(Lcom/tkay/expressad/exoplayer/x;)V

    .line 12831
    invoke-direct {v1, v7}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/k$b;)Z

    move-result v8

    if-eqz v8, :cond_2

    .line 12832
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v2, v7}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 12834
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-static {v2}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    goto/16 :goto_38

    .line 12836
    :cond_2
    invoke-virtual {v2, v5}, Lcom/tkay/expressad/exoplayer/x;->a(Z)V

    goto/16 :goto_38

    .line 12828
    :cond_3
    :goto_0
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    new-instance v8, Lcom/tkay/expressad/exoplayer/k$b;

    invoke-direct {v8, v2}, Lcom/tkay/expressad/exoplayer/k$b;-><init>(Lcom/tkay/expressad/exoplayer/x;)V

    invoke-virtual {v7, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto/16 :goto_38

    .line 307
    :pswitch_2
    iget v2, v2, Landroid/os/Message;->arg1:I

    if-eqz v2, :cond_4

    move v2, v6

    goto :goto_1

    :cond_4
    move v2, v5

    .line 2435
    :goto_1
    iput-boolean v2, v1, Lcom/tkay/expressad/exoplayer/k;->Y:Z

    .line 2436
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v7, v2}, Lcom/tkay/expressad/exoplayer/s;->a(Z)Z

    move-result v2

    if-nez v2, :cond_61

    .line 2437
    invoke-direct {v1, v6}, Lcom/tkay/expressad/exoplayer/k;->g(Z)V

    goto/16 :goto_38

    .line 304
    :pswitch_3
    iget v2, v2, Landroid/os/Message;->arg1:I

    .line 2427
    iput v2, v1, Lcom/tkay/expressad/exoplayer/k;->X:I

    .line 2428
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v7, v2}, Lcom/tkay/expressad/exoplayer/s;->a(I)Z

    move-result v2

    if-nez v2, :cond_61

    .line 2429
    invoke-direct {v1, v6}, Lcom/tkay/expressad/exoplayer/k;->g(Z)V

    goto/16 :goto_38

    .line 11990
    :pswitch_4
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v2

    if-eqz v2, :cond_61

    .line 11994
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/e;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v2

    iget v2, v2, Lcom/tkay/expressad/exoplayer/v;->b:F

    .line 11996
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v7}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v7

    .line 11997
    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v8}, Lcom/tkay/expressad/exoplayer/s;->d()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v8

    move v9, v6

    :goto_2
    if-eqz v7, :cond_61

    .line 12000
    iget-boolean v11, v7, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-nez v11, :cond_5

    goto/16 :goto_38

    .line 12004
    :cond_5
    invoke-virtual {v7, v2}, Lcom/tkay/expressad/exoplayer/q;->a(F)Z

    move-result v11

    if-nez v11, :cond_7

    if-ne v7, v8, :cond_6

    move v9, v5

    .line 12012
    :cond_6
    iget-object v7, v7, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    goto :goto_2

    :cond_7
    if-eqz v9, :cond_e

    .line 12017
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v2

    .line 12018
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v7, v2}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;)Z

    move-result v7

    .line 12020
    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v8, v8

    new-array v8, v8, [Z

    .line 12021
    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v11, v9, Lcom/tkay/expressad/exoplayer/u;->j:J

    .line 12022
    invoke-virtual {v2, v11, v12, v7, v8}, Lcom/tkay/expressad/exoplayer/q;->a(JZ[Z)J

    move-result-wide v11

    .line 12024
    iget-object v7, v2, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    invoke-direct {v1, v7}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/i/i;)V

    .line 12026
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v7, v7, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-eq v7, v10, :cond_8

    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v13, v7, Lcom/tkay/expressad/exoplayer/u;->j:J

    cmp-long v7, v11, v13

    if-eqz v7, :cond_8

    .line 12028
    iget-object v13, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v14, v7, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;
    :try_end_1
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_1 .. :try_end_1} :catch_1a
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_19
    .catch Ljava/lang/RuntimeException; {:try_start_1 .. :try_end_1} :catch_0

    :try_start_2
    iget-wide v5, v7, Lcom/tkay/expressad/exoplayer/u;->e:J

    move-wide v15, v11

    move-wide/from16 v17, v5

    invoke-virtual/range {v13 .. v18}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v5

    iput-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 12030
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    invoke-virtual {v5, v10}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V

    .line 12031
    invoke-direct {v1, v11, v12}, Lcom/tkay/expressad/exoplayer/k;->a(J)V

    .line 12035
    :cond_8
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v5, v5

    new-array v5, v5, [Z

    const/4 v6, 0x0

    const/4 v7, 0x0

    .line 12036
    :goto_3
    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v9, v9

    if-ge v6, v9, :cond_d

    .line 12037
    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    aget-object v9, v9, v6

    .line 12038
    invoke-interface {v9}, Lcom/tkay/expressad/exoplayer/y;->a_()I

    move-result v11

    if-eqz v11, :cond_9

    const/4 v11, 0x1

    goto :goto_4

    :cond_9
    const/4 v11, 0x0

    :goto_4
    aput-boolean v11, v5, v6

    .line 12039
    iget-object v11, v2, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v11, v11, v6

    if-eqz v11, :cond_a

    add-int/lit8 v7, v7, 0x1

    .line 12043
    :cond_a
    aget-boolean v12, v5, v6

    if-eqz v12, :cond_c

    .line 12044
    invoke-interface {v9}, Lcom/tkay/expressad/exoplayer/y;->f()Lcom/tkay/expressad/exoplayer/h/y;

    move-result-object v12

    if-eq v11, v12, :cond_b

    .line 12046
    invoke-direct {v1, v9}, Lcom/tkay/expressad/exoplayer/k;->b(Lcom/tkay/expressad/exoplayer/y;)V

    goto :goto_5

    .line 12047
    :cond_b
    aget-boolean v11, v8, v6

    if-eqz v11, :cond_c

    .line 12049
    iget-wide v11, v1, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-interface {v9, v11, v12}, Lcom/tkay/expressad/exoplayer/y;->a(J)V

    :cond_c
    :goto_5
    add-int/lit8 v6, v6, 0x1

    goto :goto_3

    .line 12053
    :cond_d
    iget-object v6, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v8, v2, Lcom/tkay/expressad/exoplayer/q;->j:Lcom/tkay/expressad/exoplayer/h/af;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 12054
    invoke-virtual {v6, v8, v2}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/af;Lcom/tkay/expressad/exoplayer/i/i;)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 12056
    invoke-direct {v1, v5, v7}, Lcom/tkay/expressad/exoplayer/k;->a([ZI)V

    goto :goto_6

    .line 12059
    :cond_e
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2, v7}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/q;)Z

    .line 12060
    iget-boolean v2, v7, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-eqz v2, :cond_f

    .line 12061
    iget-object v2, v7, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v5, v2, Lcom/tkay/expressad/exoplayer/r;->b:J

    iget-wide v8, v1, Lcom/tkay/expressad/exoplayer/k;->ab:J

    .line 12106
    iget-wide v11, v7, Lcom/tkay/expressad/exoplayer/q;->e:J

    sub-long/2addr v8, v11

    .line 12062
    invoke-static {v5, v6, v8, v9}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v5

    .line 12064
    invoke-virtual {v7, v5, v6}, Lcom/tkay/expressad/exoplayer/q;->b(J)J

    .line 12065
    iget-object v2, v7, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/i/i;)V

    .line 12068
    :cond_f
    :goto_6
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/u;->f:I

    if-eq v2, v10, :cond_61

    .line 12069
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->r()V

    .line 12070
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->g()V

    .line 12071
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {v2, v4}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z

    goto/16 :goto_38

    :catch_0
    move-exception v0

    move-object v4, v0

    move v2, v5

    goto/16 :goto_3c

    .line 331
    :pswitch_5
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Lcom/tkay/expressad/exoplayer/h/r;

    .line 11534
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v5, v2}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/r;)Z

    move-result v2

    if-eqz v2, :cond_61

    .line 11538
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v5, v1, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-virtual {v2, v5, v6}, Lcom/tkay/expressad/exoplayer/s;->a(J)V

    .line 11539
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->r()V

    goto/16 :goto_38

    .line 325
    :pswitch_6
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Lcom/tkay/expressad/exoplayer/h/r;

    .line 7516
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v5, v2}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/r;)Z

    move-result v2

    if-eqz v2, :cond_61

    .line 7520
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->b()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v2

    .line 7521
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/e;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v5

    iget v5, v5, Lcom/tkay/expressad/exoplayer/v;->b:F

    const/4 v6, 0x1

    .line 8142
    iput-boolean v6, v2, Lcom/tkay/expressad/exoplayer/q;->f:Z

    .line 8143
    iget-object v6, v2, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {v6}, Lcom/tkay/expressad/exoplayer/h/r;->b()Lcom/tkay/expressad/exoplayer/h/af;

    move-result-object v6

    iput-object v6, v2, Lcom/tkay/expressad/exoplayer/q;->j:Lcom/tkay/expressad/exoplayer/h/af;

    .line 8144
    invoke-virtual {v2, v5}, Lcom/tkay/expressad/exoplayer/q;->a(F)Z

    .line 8145
    iget-object v5, v2, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v5, v5, Lcom/tkay/expressad/exoplayer/r;->b:J

    invoke-virtual {v2, v5, v6}, Lcom/tkay/expressad/exoplayer/q;->b(J)J

    move-result-wide v21

    .line 8146
    iget-wide v5, v2, Lcom/tkay/expressad/exoplayer/q;->e:J

    iget-object v7, v2, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v9, v7, Lcom/tkay/expressad/exoplayer/r;->b:J

    sub-long v9, v9, v21

    add-long/2addr v5, v9

    iput-wide v5, v2, Lcom/tkay/expressad/exoplayer/q;->e:J

    .line 8147
    iget-object v5, v2, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 9089
    new-instance v6, Lcom/tkay/expressad/exoplayer/r;

    iget-object v7, v5, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v9, v5, Lcom/tkay/expressad/exoplayer/r;->c:J

    iget-wide v11, v5, Lcom/tkay/expressad/exoplayer/r;->d:J

    iget-wide v13, v5, Lcom/tkay/expressad/exoplayer/r;->e:J

    iget-boolean v15, v5, Lcom/tkay/expressad/exoplayer/r;->f:Z

    iget-boolean v5, v5, Lcom/tkay/expressad/exoplayer/r;->g:Z

    move-object/from16 v19, v6

    move-object/from16 v20, v7

    move-wide/from16 v23, v9

    move-wide/from16 v25, v11

    move-wide/from16 v27, v13

    move/from16 v29, v15

    move/from16 v30, v5

    invoke-direct/range {v19 .. v30}, Lcom/tkay/expressad/exoplayer/r;-><init>(Lcom/tkay/expressad/exoplayer/h/s$a;JJJJZZ)V

    .line 8147
    iput-object v6, v2, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 7522
    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/i/i;)V

    .line 7524
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v2

    if-nez v2, :cond_10

    .line 7526
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->h()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v2

    .line 7527
    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v5, v2, Lcom/tkay/expressad/exoplayer/r;->b:J

    invoke-direct {v1, v5, v6}, Lcom/tkay/expressad/exoplayer/k;->a(J)V

    .line 7528
    invoke-direct {v1, v8}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/q;)V

    .line 7530
    :cond_10
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->r()V

    goto/16 :goto_38

    .line 328
    :pswitch_7
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Lcom/tkay/expressad/exoplayer/k$a;

    .line 9143
    iget-object v5, v2, Lcom/tkay/expressad/exoplayer/k$a;->a:Lcom/tkay/expressad/exoplayer/h/s;

    iget-object v6, v1, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    if-ne v5, v6, :cond_61

    .line 9148
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 9149
    iget-object v6, v2, Lcom/tkay/expressad/exoplayer/k$a;->b:Lcom/tkay/expressad/exoplayer/ae;

    .line 9150
    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/k$a;->c:Ljava/lang/Object;

    .line 9151
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v7, v6}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/ae;)V

    .line 9152
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {v7, v6, v2}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 9882
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    const/4 v7, 0x1

    sub-int/2addr v2, v7

    :goto_7
    if-ltz v2, :cond_12

    .line 9883
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v7, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/expressad/exoplayer/k$b;

    invoke-direct {v1, v7}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/k$b;)Z

    move-result v7

    if-nez v7, :cond_11

    .line 9885
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v7, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/expressad/exoplayer/k$b;

    iget-object v7, v7, Lcom/tkay/expressad/exoplayer/k$b;->a:Lcom/tkay/expressad/exoplayer/x;
    :try_end_2
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_2 .. :try_end_2} :catch_c
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_b
    .catch Ljava/lang/RuntimeException; {:try_start_2 .. :try_end_2} :catch_15

    const/4 v9, 0x0

    :try_start_3
    invoke-virtual {v7, v9}, Lcom/tkay/expressad/exoplayer/x;->a(Z)V
    :try_end_3
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_3 .. :try_end_3} :catch_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2
    .catch Ljava/lang/RuntimeException; {:try_start_3 .. :try_end_3} :catch_1

    .line 9886
    :try_start_4
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-virtual {v7, v2}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    goto :goto_8

    :catch_1
    move-exception v0

    move-object v4, v0

    move v2, v9

    goto/16 :goto_3c

    :catch_2
    move-exception v0

    move-object v5, v0

    move v2, v9

    goto/16 :goto_3e

    :catch_3
    move-exception v0

    move-object v5, v0

    move v2, v9

    goto/16 :goto_40

    :cond_11
    :goto_8
    add-int/lit8 v2, v2, -0x1

    goto :goto_7

    .line 9890
    :cond_12
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->N:Ljava/util/ArrayList;

    invoke-static {v2}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    .line 9155
    iget v2, v1, Lcom/tkay/expressad/exoplayer/k;->Z:I

    if-lez v2, :cond_18

    .line 9156
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    iget v5, v1, Lcom/tkay/expressad/exoplayer/k;->Z:I

    invoke-virtual {v2, v5}, Lcom/tkay/expressad/exoplayer/k$c;->a(I)V
    :try_end_4
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_4 .. :try_end_4} :catch_c
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_b
    .catch Ljava/lang/RuntimeException; {:try_start_4 .. :try_end_4} :catch_15

    const/4 v2, 0x0

    .line 9157
    :try_start_5
    iput v2, v1, Lcom/tkay/expressad/exoplayer/k;->Z:I
    :try_end_5
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_5 .. :try_end_5} :catch_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_4
    .catch Ljava/lang/RuntimeException; {:try_start_5 .. :try_end_5} :catch_d

    .line 9158
    :try_start_6
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->aa:Lcom/tkay/expressad/exoplayer/k$d;

    if-eqz v2, :cond_15

    .line 9159
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->aa:Lcom/tkay/expressad/exoplayer/k$d;

    const/4 v5, 0x1

    .line 9160
    invoke-direct {v1, v2, v5}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/k$d;Z)Landroid/util/Pair;

    move-result-object v2

    .line 9161
    iput-object v8, v1, Lcom/tkay/expressad/exoplayer/k;->aa:Lcom/tkay/expressad/exoplayer/k$d;

    if-nez v2, :cond_13

    .line 9165
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->o()V

    goto/16 :goto_38

    .line 9167
    :cond_13
    iget-object v5, v2, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v5, Ljava/lang/Integer;

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    .line 9168
    iget-object v2, v2, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    .line 9169
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2, v5, v6, v7}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v14

    .line 9170
    iget-object v13, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 9172
    invoke-virtual {v14}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v2

    if-eqz v2, :cond_14

    move-wide v15, v11

    goto :goto_9

    :cond_14
    move-wide v15, v6

    :goto_9
    move-wide/from16 v17, v6

    .line 9171
    invoke-virtual/range {v13 .. v18}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    goto/16 :goto_38

    .line 9174
    :cond_15
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v7, v2, Lcom/tkay/expressad/exoplayer/u;->d:J

    cmp-long v2, v7, v13

    if-nez v2, :cond_61

    .line 9175
    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v2

    if-eqz v2, :cond_16

    .line 9176
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->o()V

    goto/16 :goto_38

    .line 9178
    :cond_16
    iget-boolean v2, v1, Lcom/tkay/expressad/exoplayer/k;->Y:Z

    .line 9179
    invoke-virtual {v6, v2}, Lcom/tkay/expressad/exoplayer/ae;->b(Z)I

    move-result v2

    .line 9178
    invoke-direct {v1, v6, v2}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/ae;I)Landroid/util/Pair;

    move-result-object v2

    .line 9180
    iget-object v5, v2, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v5, Ljava/lang/Integer;

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    .line 9181
    iget-object v2, v2, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    .line 9182
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2, v5, v6, v7}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v14

    .line 9183
    iget-object v13, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 9186
    invoke-virtual {v14}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v2

    if-eqz v2, :cond_17

    move-wide v15, v11

    goto :goto_a

    :cond_17
    move-wide v15, v6

    :goto_a
    move-wide/from16 v17, v6

    .line 9184
    invoke-virtual/range {v13 .. v18}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    goto/16 :goto_38

    :catch_4
    move-exception v0

    goto/16 :goto_3d

    :catch_5
    move-exception v0

    goto/16 :goto_3f

    .line 9193
    :cond_18
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    .line 9194
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v7, v7, Lcom/tkay/expressad/exoplayer/u;->e:J

    .line 9195
    invoke-virtual {v5}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v9

    if-eqz v9, :cond_1a

    .line 9197
    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v5

    if-nez v5, :cond_61

    .line 9198
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    .line 9199
    invoke-virtual {v5, v2, v7, v8}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v14

    .line 9200
    iget-object v13, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 9202
    invoke-virtual {v14}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v2

    if-eqz v2, :cond_19

    move-wide v15, v11

    goto :goto_b

    :cond_19
    move-wide v15, v7

    :goto_b
    move-wide/from16 v17, v7

    .line 9201
    invoke-virtual/range {v13 .. v18}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    goto/16 :goto_38

    .line 9206
    :cond_1a
    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v9}, Lcom/tkay/expressad/exoplayer/s;->e()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v9

    if-nez v9, :cond_1b

    .line 9208
    iget-object v10, v1, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v13, 0x1

    invoke-virtual {v5, v2, v10, v13}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v10

    iget-object v10, v10, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    goto :goto_c

    :cond_1b
    iget-object v10, v9, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    .line 9209
    :goto_c
    invoke-virtual {v6, v10}, Lcom/tkay/expressad/exoplayer/ae;->a(Ljava/lang/Object;)I

    move-result v10

    const/4 v13, -0x1

    if-ne v10, v13, :cond_20

    .line 9213
    invoke-direct {v1, v2, v5, v6}, Lcom/tkay/expressad/exoplayer/k;->a(ILcom/tkay/expressad/exoplayer/ae;Lcom/tkay/expressad/exoplayer/ae;)I

    move-result v2

    if-ne v2, v13, :cond_1c

    .line 9216
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->o()V

    goto/16 :goto_38

    .line 9220
    :cond_1c
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;
    :try_end_6
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_6 .. :try_end_6} :catch_c
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_b
    .catch Ljava/lang/RuntimeException; {:try_start_6 .. :try_end_6} :catch_15

    const/4 v7, 0x0

    .line 10750
    :try_start_7
    invoke-virtual {v6, v2, v5, v7}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v2
    :try_end_7
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_7 .. :try_end_7} :catch_8
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_7
    .catch Ljava/lang/RuntimeException; {:try_start_7 .. :try_end_7} :catch_6

    .line 9221
    :try_start_8
    iget v2, v2, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    .line 9220
    invoke-direct {v1, v6, v2}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/ae;I)Landroid/util/Pair;

    move-result-object v2

    .line 9222
    iget-object v5, v2, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v5, Ljava/lang/Integer;

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    .line 9223
    iget-object v2, v2, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v7

    .line 9224
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2, v5, v7, v8}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v14

    .line 9225
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v10, 0x1

    invoke-virtual {v6, v5, v2, v10}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    if-eqz v9, :cond_1e

    .line 9229
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 9230
    iget-object v6, v9, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/r;->a()Lcom/tkay/expressad/exoplayer/r;

    move-result-object v6

    iput-object v6, v9, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    .line 9231
    :goto_d
    iget-object v6, v9, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v6, :cond_1e

    .line 9232
    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    .line 9233
    iget-object v6, v9, Lcom/tkay/expressad/exoplayer/q;->b:Ljava/lang/Object;

    invoke-virtual {v6, v2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_1d

    .line 9234
    iget-object v6, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-object v10, v9, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    invoke-virtual {v6, v10, v5}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/r;I)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v6

    iput-object v6, v9, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    goto :goto_d

    .line 9236
    :cond_1d
    iget-object v6, v9, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/r;->a()Lcom/tkay/expressad/exoplayer/r;

    move-result-object v6

    iput-object v6, v9, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    goto :goto_d

    .line 9241
    :cond_1e
    invoke-virtual {v14}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v2

    if-eqz v2, :cond_1f

    goto :goto_e

    :cond_1f
    move-wide v11, v7

    :goto_e
    invoke-direct {v1, v14, v11, v12}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/h/s$a;J)J

    move-result-wide v15

    .line 9242
    iget-object v13, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    move-wide/from16 v17, v7

    invoke-virtual/range {v13 .. v18}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    goto/16 :goto_38

    :catch_6
    move-exception v0

    move-object v4, v0

    move v2, v7

    goto/16 :goto_3c

    :catch_7
    move-exception v0

    move-object v5, v0

    move v2, v7

    goto/16 :goto_3e

    :catch_8
    move-exception v0

    move-object v5, v0

    move v2, v7

    goto/16 :goto_40

    :cond_20
    if-eq v10, v2, :cond_21

    .line 9248
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {v2, v10}, Lcom/tkay/expressad/exoplayer/u;->a(I)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 9251
    :cond_21
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 9252
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v5

    if-eqz v5, :cond_23

    .line 9253
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v5, v10, v7, v8}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v14

    .line 9254
    invoke-virtual {v14, v2}, Lcom/tkay/expressad/exoplayer/h/s$a;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_23

    .line 9257
    invoke-virtual {v14}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v2

    if-eqz v2, :cond_22

    goto :goto_f

    :cond_22
    move-wide v11, v7

    :goto_f
    invoke-direct {v1, v14, v11, v12}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/h/s$a;J)J

    move-result-wide v15

    .line 9258
    iget-object v13, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    move-wide/from16 v17, v7

    invoke-virtual/range {v13 .. v18}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    goto/16 :goto_38

    .line 9263
    :cond_23
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v6, v1, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-virtual {v5, v2, v6, v7}, Lcom/tkay/expressad/exoplayer/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;J)Z

    move-result v2
    :try_end_8
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_8 .. :try_end_8} :catch_c
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_b
    .catch Ljava/lang/RuntimeException; {:try_start_8 .. :try_end_8} :catch_15

    if-nez v2, :cond_61

    const/4 v2, 0x0

    .line 9264
    :try_start_9
    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->g(Z)V
    :try_end_9
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_9 .. :try_end_9} :catch_5
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_4
    .catch Ljava/lang/RuntimeException; {:try_start_9 .. :try_end_9} :catch_d

    goto/16 :goto_38

    .line 343
    :pswitch_8
    :try_start_a
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->i()V

    const/4 v2, 0x1

    return v2

    .line 322
    :pswitch_9
    iget v2, v2, Landroid/os/Message;->arg1:I

    if-eqz v2, :cond_24

    const/4 v2, 0x1

    goto :goto_10

    :cond_24
    const/4 v2, 0x0

    :goto_10
    const/4 v5, 0x1

    invoke-direct {v1, v2, v5}, Lcom/tkay/expressad/exoplayer/k;->a(ZZ)V

    goto/16 :goto_38

    .line 319
    :pswitch_a
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Lcom/tkay/expressad/exoplayer/ac;

    .line 6736
    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->Q:Lcom/tkay/expressad/exoplayer/ac;

    goto/16 :goto_38

    .line 316
    :pswitch_b
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Lcom/tkay/expressad/exoplayer/v;

    .line 6732
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    invoke-virtual {v5, v2}, Lcom/tkay/expressad/exoplayer/e;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    goto/16 :goto_38

    .line 313
    :pswitch_c
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Lcom/tkay/expressad/exoplayer/k$d;

    .line 6588
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    const/4 v6, 0x1

    invoke-virtual {v5, v6}, Lcom/tkay/expressad/exoplayer/k$c;->a(I)V

    .line 6595
    invoke-direct {v1, v2, v6}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/k$d;Z)Landroid/util/Pair;

    move-result-object v5

    if-nez v5, :cond_25

    .line 6599
    new-instance v5, Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->j()I

    move-result v6

    invoke-direct {v5, v6}, Lcom/tkay/expressad/exoplayer/h/s$a;-><init>(I)V

    move-object v6, v5

    move-wide v7, v13

    move-wide/from16 v23, v7

    :goto_11
    const/4 v4, 0x1

    goto :goto_13

    .line 6605
    :cond_25
    iget-object v6, v5, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v6, Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    .line 6606
    iget-object v7, v5, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v7, Ljava/lang/Long;

    invoke-virtual {v7}, Ljava/lang/Long;->longValue()J

    move-result-wide v7

    .line 6607
    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v9, v6, v7, v8}, Lcom/tkay/expressad/exoplayer/s;->a(IJ)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v6

    .line 6608
    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v9

    if-eqz v9, :cond_26

    move-wide/from16 v23, v7

    move-wide v7, v11

    goto :goto_11

    .line 6612
    :cond_26
    iget-object v5, v5, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v5, Ljava/lang/Long;

    invoke-virtual {v5}, Ljava/lang/Long;->longValue()J

    move-result-wide v15
    :try_end_a
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_a .. :try_end_a} :catch_c
    .catch Ljava/io/IOException; {:try_start_a .. :try_end_a} :catch_b
    .catch Ljava/lang/RuntimeException; {:try_start_a .. :try_end_a} :catch_15

    .line 6613
    :try_start_b
    iget-wide v4, v2, Lcom/tkay/expressad/exoplayer/k$d;->c:J
    :try_end_b
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_b .. :try_end_b} :catch_17
    .catch Ljava/io/IOException; {:try_start_b .. :try_end_b} :catch_16
    .catch Ljava/lang/RuntimeException; {:try_start_b .. :try_end_b} :catch_15

    cmp-long v4, v4, v13

    if-nez v4, :cond_27

    const/4 v4, 0x1

    goto :goto_12

    :cond_27
    const/4 v4, 0x0

    :goto_12
    move-wide/from16 v23, v7

    move-wide v7, v15

    .line 6618
    :goto_13
    :try_start_c
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    if-eqz v5, :cond_2e

    iget v5, v1, Lcom/tkay/expressad/exoplayer/k;->Z:I

    if-lez v5, :cond_28

    goto/16 :goto_17

    :cond_28
    cmp-long v2, v7, v13

    if-nez v2, :cond_29

    .line 6623
    invoke-direct {v1, v10}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    const/4 v2, 0x0

    const/4 v5, 0x1

    .line 6624
    invoke-direct {v1, v2, v5, v2}, Lcom/tkay/expressad/exoplayer/k;->a(ZZZ)V

    goto :goto_18

    .line 6629
    :cond_29
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-virtual {v6, v2}, Lcom/tkay/expressad/exoplayer/h/s$a;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2b

    .line 6630
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v2

    if-eqz v2, :cond_2a

    cmp-long v5, v7, v11

    if-eqz v5, :cond_2a

    .line 6632
    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->Q:Lcom/tkay/expressad/exoplayer/ac;

    .line 6633
    invoke-interface {v2, v7, v8, v5}, Lcom/tkay/expressad/exoplayer/h/r;->a(JLcom/tkay/expressad/exoplayer/ac;)J

    move-result-wide v9

    goto :goto_14

    :cond_2a
    move-wide v9, v7

    .line 6636
    :goto_14
    invoke-static {v9, v10}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v11

    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v13, v2, Lcom/tkay/expressad/exoplayer/u;->j:J

    invoke-static {v13, v14}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v13

    cmp-long v2, v11, v13

    if-nez v2, :cond_2c

    .line 6638
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v7, v2, Lcom/tkay/expressad/exoplayer/u;->j:J
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_0

    .line 6647
    :try_start_d
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    move-object/from16 v19, v2

    move-object/from16 v20, v6

    move-wide/from16 v21, v7

    invoke-virtual/range {v19 .. v24}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    if-eqz v4, :cond_61

    .line 6649
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;
    :try_end_d
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_d .. :try_end_d} :catch_17
    .catch Ljava/io/IOException; {:try_start_d .. :try_end_d} :catch_16
    .catch Ljava/lang/RuntimeException; {:try_start_d .. :try_end_d} :catch_15

    const/4 v4, 0x2

    :goto_15
    :try_start_e
    invoke-virtual {v2, v4}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V
    :try_end_e
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_e .. :try_end_e} :catch_c
    .catch Ljava/io/IOException; {:try_start_e .. :try_end_e} :catch_b
    .catch Ljava/lang/RuntimeException; {:try_start_e .. :try_end_e} :catch_15

    goto/16 :goto_38

    :cond_2b
    move-wide v9, v7

    .line 6642
    :cond_2c
    :try_start_f
    invoke-direct {v1, v6, v9, v10}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/h/s$a;J)J

    move-result-wide v9

    cmp-long v2, v7, v9

    if-eqz v2, :cond_2d

    const/4 v2, 0x1

    goto :goto_16

    :cond_2d
    const/4 v2, 0x0

    :goto_16
    or-int/2addr v4, v2

    move-wide/from16 v21, v9

    goto :goto_19

    .line 6620
    :cond_2e
    :goto_17
    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->aa:Lcom/tkay/expressad/exoplayer/k$d;
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_0

    :goto_18
    move-wide/from16 v21, v7

    .line 6647
    :goto_19
    :try_start_10
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    move-object/from16 v19, v2

    move-object/from16 v20, v6

    invoke-virtual/range {v19 .. v24}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    if-eqz v4, :cond_61

    .line 6649
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    const/4 v4, 0x2

    goto :goto_15

    :catchall_0
    move-exception v0

    move-object v2, v0

    .line 6647
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    move-object/from16 v19, v5

    move-object/from16 v20, v6

    move-wide/from16 v21, v7

    invoke-virtual/range {v19 .. v24}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v5

    iput-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    if-eqz v4, :cond_2f

    .line 6649
    iget-object v4, v1, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;
    :try_end_10
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_10 .. :try_end_10} :catch_17
    .catch Ljava/io/IOException; {:try_start_10 .. :try_end_10} :catch_16
    .catch Ljava/lang/RuntimeException; {:try_start_10 .. :try_end_10} :catch_15

    const/4 v5, 0x2

    :try_start_11
    invoke-virtual {v4, v5}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V
    :try_end_11
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_11 .. :try_end_11} :catch_a
    .catch Ljava/io/IOException; {:try_start_11 .. :try_end_11} :catch_9
    .catch Ljava/lang/RuntimeException; {:try_start_11 .. :try_end_11} :catch_15

    goto :goto_1a

    :catch_9
    move-exception v0

    move v4, v5

    const/4 v2, 0x0

    goto/16 :goto_3d

    :catch_a
    move-exception v0

    move v4, v5

    const/4 v2, 0x0

    goto/16 :goto_3f

    .line 6651
    :cond_2f
    :goto_1a
    :try_start_12
    throw v2

    :catch_b
    move-exception v0

    move-object v5, v0

    :goto_1b
    const/4 v2, 0x0

    goto/16 :goto_3e

    :catch_c
    move-exception v0

    move-object v5, v0

    :goto_1c
    const/4 v2, 0x0

    goto/16 :goto_40

    .line 2503
    :pswitch_d
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->O:Lcom/tkay/expressad/exoplayer/k/c;

    invoke-interface {v2}, Lcom/tkay/expressad/exoplayer/k/c;->b()J

    move-result-wide v4

    .line 3370
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    if-eqz v2, :cond_42

    .line 3374
    iget v2, v1, Lcom/tkay/expressad/exoplayer/k;->Z:I

    if-lez v2, :cond_30

    .line 3376
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-interface {v2}, Lcom/tkay/expressad/exoplayer/h/s;->b()V

    goto/16 :goto_28

    .line 3494
    :cond_30
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v6, v1, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-virtual {v2, v6, v7}, Lcom/tkay/expressad/exoplayer/s;->a(J)V

    .line 3495
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->a()Z

    move-result v2

    if-eqz v2, :cond_32

    .line 3496
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-wide v6, v1, Lcom/tkay/expressad/exoplayer/k;->ab:J

    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    invoke-virtual {v2, v6, v7, v8}, Lcom/tkay/expressad/exoplayer/s;->a(JLcom/tkay/expressad/exoplayer/u;)Lcom/tkay/expressad/exoplayer/r;

    move-result-object v2

    if-nez v2, :cond_31

    .line 3498
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-interface {v2}, Lcom/tkay/expressad/exoplayer/h/s;->b()V

    goto :goto_1d

    .line 3500
    :cond_31
    iget-object v6, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v7, v2, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v7, v7, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/k;->I:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v11, 0x1

    invoke-virtual {v6, v7, v8, v11}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v6

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    .line 3501
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/k;->z:[Lcom/tkay/expressad/exoplayer/z;

    iget-object v11, v1, Lcom/tkay/expressad/exoplayer/k;->A:Lcom/tkay/expressad/exoplayer/i/h;

    iget-object v12, v1, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    .line 3505
    invoke-interface {v12}, Lcom/tkay/expressad/exoplayer/p;->d()Lcom/tkay/expressad/exoplayer/j/b;

    move-result-object v22

    iget-object v12, v1, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;

    move-object/from16 v19, v7

    move-object/from16 v20, v8

    move-object/from16 v21, v11

    move-object/from16 v23, v12

    move-object/from16 v24, v6

    move-object/from16 v25, v2

    .line 3502
    invoke-virtual/range {v19 .. v25}, Lcom/tkay/expressad/exoplayer/s;->a([Lcom/tkay/expressad/exoplayer/z;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/j/b;Lcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/r;)Lcom/tkay/expressad/exoplayer/h/r;

    move-result-object v6

    .line 3509
    iget-wide v7, v2, Lcom/tkay/expressad/exoplayer/r;->b:J

    invoke-interface {v6, v1, v7, v8}, Lcom/tkay/expressad/exoplayer/h/r;->a(Lcom/tkay/expressad/exoplayer/h/r$a;J)V

    const/4 v2, 0x1

    .line 3510
    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->d(Z)V

    .line 3382
    :cond_32
    :goto_1d
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->b()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v2

    if-eqz v2, :cond_34

    .line 3383
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/q;->a()Z

    move-result v2

    if-eqz v2, :cond_33

    goto :goto_1e

    .line 3385
    :cond_33
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-boolean v2, v2, Lcom/tkay/expressad/exoplayer/u;->g:Z

    if-nez v2, :cond_35

    .line 3386
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->r()V
    :try_end_12
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_12 .. :try_end_12} :catch_17
    .catch Ljava/io/IOException; {:try_start_12 .. :try_end_12} :catch_16
    .catch Ljava/lang/RuntimeException; {:try_start_12 .. :try_end_12} :catch_15

    goto :goto_1f

    :cond_34
    :goto_1e
    const/4 v2, 0x0

    .line 3384
    :try_start_13
    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->d(Z)V
    :try_end_13
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_13 .. :try_end_13} :catch_f
    .catch Ljava/io/IOException; {:try_start_13 .. :try_end_13} :catch_e
    .catch Ljava/lang/RuntimeException; {:try_start_13 .. :try_end_13} :catch_d

    .line 3389
    :cond_35
    :goto_1f
    :try_start_14
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v2

    if-eqz v2, :cond_42

    .line 3395
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v2

    .line 3396
    iget-object v6, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/s;->d()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v6

    const/4 v7, 0x0

    .line 3398
    :goto_20
    iget-boolean v8, v1, Lcom/tkay/expressad/exoplayer/k;->V:Z

    if-eqz v8, :cond_38

    if-eq v2, v6, :cond_38

    iget-wide v11, v1, Lcom/tkay/expressad/exoplayer/k;->ab:J

    iget-object v8, v2, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-wide v9, v8, Lcom/tkay/expressad/exoplayer/q;->e:J

    cmp-long v8, v11, v9

    if-ltz v8, :cond_38

    if-eqz v7, :cond_36

    .line 3404
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->d()V

    .line 3407
    :cond_36
    iget-object v7, v2, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v7, v7, Lcom/tkay/expressad/exoplayer/r;->f:Z

    if-eqz v7, :cond_37

    const/4 v7, 0x0

    goto :goto_21

    :cond_37
    const/4 v7, 0x3

    .line 3411
    :goto_21
    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v8}, Lcom/tkay/expressad/exoplayer/s;->h()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v8

    .line 3412
    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/q;)V

    .line 3413
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-object v9, v8, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/r;->a:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object v10, v8, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v10, v10, Lcom/tkay/expressad/exoplayer/r;->b:J

    iget-object v12, v8, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v13, v12, Lcom/tkay/expressad/exoplayer/r;->d:J

    move-object/from16 v19, v2

    move-object/from16 v20, v9

    move-wide/from16 v21, v10

    move-wide/from16 v23, v13

    invoke-virtual/range {v19 .. v24}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    .line 3415
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->M:Lcom/tkay/expressad/exoplayer/k$c;

    invoke-virtual {v2, v7}, Lcom/tkay/expressad/exoplayer/k$c;->b(I)V

    .line 3416
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->g()V

    move-object v2, v8

    const/4 v7, 0x1

    const/4 v10, 0x4

    const-wide v13, -0x7fffffffffffffffL    # -4.9E-324

    goto :goto_20

    .line 3420
    :cond_38
    iget-object v2, v6, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v2, v2, Lcom/tkay/expressad/exoplayer/r;->g:Z

    if-eqz v2, :cond_3a

    const/4 v2, 0x0

    .line 3421
    :goto_22
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v7, v7

    if-ge v2, v7, :cond_42

    .line 3422
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    aget-object v7, v7, v2

    .line 3423
    iget-object v8, v6, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v8, v8, v2

    if-eqz v8, :cond_39

    .line 3426
    invoke-interface {v7}, Lcom/tkay/expressad/exoplayer/y;->f()Lcom/tkay/expressad/exoplayer/h/y;

    move-result-object v9

    if-ne v9, v8, :cond_39

    .line 3427
    invoke-interface {v7}, Lcom/tkay/expressad/exoplayer/y;->g()Z

    move-result v8

    if-eqz v8, :cond_39

    .line 3428
    invoke-interface {v7}, Lcom/tkay/expressad/exoplayer/y;->h()V

    :cond_39
    add-int/lit8 v2, v2, 0x1

    goto :goto_22

    .line 3435
    :cond_3a
    iget-object v2, v6, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v2, :cond_42

    iget-object v2, v6, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-boolean v2, v2, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-nez v2, :cond_3b

    goto/16 :goto_28

    :cond_3b
    const/4 v2, 0x0

    .line 3440
    :goto_23
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v7, v7

    if-ge v2, v7, :cond_3d

    .line 3441
    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    aget-object v7, v7, v2

    .line 3442
    iget-object v8, v6, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v8, v8, v2

    .line 3443
    invoke-interface {v7}, Lcom/tkay/expressad/exoplayer/y;->f()Lcom/tkay/expressad/exoplayer/h/y;

    move-result-object v9

    if-ne v9, v8, :cond_42

    if-eqz v8, :cond_3c

    .line 3444
    invoke-interface {v7}, Lcom/tkay/expressad/exoplayer/y;->g()Z

    move-result v7

    if-nez v7, :cond_3c

    goto/16 :goto_28

    :cond_3c
    add-int/lit8 v2, v2, 0x1

    goto :goto_23

    .line 3450
    :cond_3d
    iget-object v2, v6, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 3451
    iget-object v6, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/s;->g()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v6

    .line 3452
    iget-object v7, v6, Lcom/tkay/expressad/exoplayer/q;->k:Lcom/tkay/expressad/exoplayer/i/i;

    .line 3454
    iget-object v8, v6, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    .line 3455
    invoke-interface {v8}, Lcom/tkay/expressad/exoplayer/h/r;->c()J

    move-result-wide v8

    const-wide v10, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v8, v8, v10

    if-eqz v8, :cond_3e

    const/4 v8, 0x1

    goto :goto_24

    :cond_3e
    const/4 v8, 0x0

    :goto_24
    const/4 v9, 0x0

    .line 3456
    :goto_25
    iget-object v10, v1, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    array-length v10, v10

    if-ge v9, v10, :cond_42

    .line 3457
    iget-object v10, v1, Lcom/tkay/expressad/exoplayer/k;->y:[Lcom/tkay/expressad/exoplayer/y;

    aget-object v10, v10, v9

    .line 3458
    invoke-virtual {v2, v9}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v11

    if-eqz v11, :cond_41

    if-nez v8, :cond_40

    .line 3465
    invoke-interface {v10}, Lcom/tkay/expressad/exoplayer/y;->i()Z

    move-result v11

    if-nez v11, :cond_41

    .line 3466
    iget-object v11, v7, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    invoke-virtual {v11, v9}, Lcom/tkay/expressad/exoplayer/i/g;->a(I)Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object v11

    .line 3467
    invoke-virtual {v7, v9}, Lcom/tkay/expressad/exoplayer/i/i;->a(I)Z

    move-result v12

    .line 3468
    iget-object v13, v1, Lcom/tkay/expressad/exoplayer/k;->z:[Lcom/tkay/expressad/exoplayer/z;

    aget-object v13, v13, v9

    invoke-interface {v13}, Lcom/tkay/expressad/exoplayer/z;->a()I

    move-result v13

    const/4 v14, 0x5

    if-ne v13, v14, :cond_3f

    const/4 v13, 0x1

    goto :goto_26

    :cond_3f
    const/4 v13, 0x0

    .line 3469
    :goto_26
    iget-object v14, v2, Lcom/tkay/expressad/exoplayer/i/i;->b:[Lcom/tkay/expressad/exoplayer/aa;

    aget-object v14, v14, v9

    .line 3470
    iget-object v15, v7, Lcom/tkay/expressad/exoplayer/i/i;->b:[Lcom/tkay/expressad/exoplayer/aa;

    aget-object v15, v15, v9

    if-eqz v12, :cond_40

    .line 3471
    invoke-virtual {v15, v14}, Lcom/tkay/expressad/exoplayer/aa;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_40

    if-nez v13, :cond_40

    .line 3478
    invoke-static {v11}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/i/f;)[Lcom/tkay/expressad/exoplayer/m;

    move-result-object v11

    .line 3479
    iget-object v12, v6, Lcom/tkay/expressad/exoplayer/q;->c:[Lcom/tkay/expressad/exoplayer/h/y;

    aget-object v12, v12, v9

    .line 4106
    iget-wide v13, v6, Lcom/tkay/expressad/exoplayer/q;->e:J

    .line 3479
    invoke-interface {v10, v11, v12, v13, v14}, Lcom/tkay/expressad/exoplayer/y;->a([Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/h/y;J)V

    goto :goto_27

    .line 3487
    :cond_40
    invoke-interface {v10}, Lcom/tkay/expressad/exoplayer/y;->h()V

    :cond_41
    :goto_27
    add-int/lit8 v9, v9, 0x1

    goto :goto_25

    :catch_d
    move-exception v0

    goto/16 :goto_3b

    :catch_e
    move-exception v0

    move-object v5, v0

    goto/16 :goto_39

    :catch_f
    move-exception v0

    move-object v5, v0

    goto/16 :goto_3a

    .line 2505
    :cond_42
    :goto_28
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->f()Z

    move-result v2

    const-wide/16 v6, 0xa

    if-nez v2, :cond_43

    .line 2507
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->n()V

    .line 2508
    invoke-direct {v1, v4, v5, v6, v7}, Lcom/tkay/expressad/exoplayer/k;->a(JJ)V

    goto/16 :goto_38

    .line 2511
    :cond_43
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->c()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v2

    const-string v8, "doSomeWork"

    .line 2513
    invoke-static {v8}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    .line 2515
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->g()V

    .line 2516
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v8

    const-wide/16 v10, 0x3e8

    mul-long/2addr v8, v10

    .line 2518
    iget-object v12, v2, Lcom/tkay/expressad/exoplayer/q;->a:Lcom/tkay/expressad/exoplayer/h/r;

    iget-object v13, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v13, v13, Lcom/tkay/expressad/exoplayer/u;->j:J

    iget-wide v10, v1, Lcom/tkay/expressad/exoplayer/k;->J:J

    sub-long/2addr v13, v10

    iget-boolean v10, v1, Lcom/tkay/expressad/exoplayer/k;->K:Z

    invoke-interface {v12, v13, v14, v10}, Lcom/tkay/expressad/exoplayer/h/r;->a(JZ)V

    .line 2523
    iget-object v10, v1, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v11, v10

    const/4 v12, 0x0

    const/4 v13, 0x1

    const/4 v14, 0x1

    :goto_29
    if-ge v12, v11, :cond_4a

    aget-object v15, v10, v12

    .line 2527
    iget-wide v6, v1, Lcom/tkay/expressad/exoplayer/k;->ab:J

    invoke-interface {v15, v6, v7, v8, v9}, Lcom/tkay/expressad/exoplayer/y;->a(JJ)V

    if-eqz v14, :cond_44

    .line 2528
    invoke-interface {v15}, Lcom/tkay/expressad/exoplayer/y;->v()Z

    move-result v6

    if-eqz v6, :cond_44

    const/4 v14, 0x1

    goto :goto_2a

    :cond_44
    const/4 v14, 0x0

    .line 2533
    :goto_2a
    invoke-interface {v15}, Lcom/tkay/expressad/exoplayer/y;->u()Z

    move-result v6

    if-nez v6, :cond_47

    invoke-interface {v15}, Lcom/tkay/expressad/exoplayer/y;->v()Z

    move-result v6

    if-nez v6, :cond_47

    .line 4632
    iget-object v6, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/s;->d()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v6

    .line 4633
    iget-object v7, v6, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    if-eqz v7, :cond_45

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/q;->i:Lcom/tkay/expressad/exoplayer/q;

    iget-boolean v6, v6, Lcom/tkay/expressad/exoplayer/q;->f:Z

    if-eqz v6, :cond_45

    .line 4634
    invoke-interface {v15}, Lcom/tkay/expressad/exoplayer/y;->g()Z

    move-result v6

    if-eqz v6, :cond_45

    const/4 v6, 0x1

    goto :goto_2b

    :cond_45
    const/4 v6, 0x0

    :goto_2b
    if-eqz v6, :cond_46

    goto :goto_2c

    :cond_46
    const/4 v6, 0x0

    goto :goto_2d

    :cond_47
    :goto_2c
    const/4 v6, 0x1

    :goto_2d
    if-nez v6, :cond_48

    .line 2536
    invoke-interface {v15}, Lcom/tkay/expressad/exoplayer/y;->j()V

    :cond_48
    if-eqz v13, :cond_49

    if-eqz v6, :cond_49

    const/4 v13, 0x1

    goto :goto_2e

    :cond_49
    const/4 v13, 0x0

    :goto_2e
    add-int/lit8 v12, v12, 0x1

    const-wide/16 v6, 0xa

    goto :goto_29

    :cond_4a
    if-nez v13, :cond_4b

    .line 2541
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->n()V

    .line 2544
    :cond_4b
    iget-object v6, v2, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-wide v6, v6, Lcom/tkay/expressad/exoplayer/r;->e:J

    if-eqz v14, :cond_4d

    const-wide v8, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v8, v6, v8

    if-eqz v8, :cond_4c

    .line 2545
    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v8, v8, Lcom/tkay/expressad/exoplayer/u;->j:J

    cmp-long v6, v6, v8

    if-gtz v6, :cond_4d

    :cond_4c
    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v2, v2, Lcom/tkay/expressad/exoplayer/r;->g:Z

    if-eqz v2, :cond_4d

    const/4 v2, 0x4

    .line 2549
    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    .line 2550
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->f()V

    goto/16 :goto_32

    .line 2551
    :cond_4d
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v6, 0x2

    if-ne v2, v6, :cond_53

    .line 5096
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v2, v2

    if-nez v2, :cond_4e

    .line 5098
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->m()Z

    move-result v2

    goto :goto_31

    :cond_4e
    if-eqz v13, :cond_52

    .line 5103
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget-boolean v2, v2, Lcom/tkay/expressad/exoplayer/u;->g:Z

    if-nez v2, :cond_50

    :cond_4f
    :goto_2f
    const/4 v2, 0x1

    goto :goto_31

    .line 5109
    :cond_50
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->P:Lcom/tkay/expressad/exoplayer/s;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/s;->b()Lcom/tkay/expressad/exoplayer/q;

    move-result-object v2

    .line 5110
    iget-object v6, v2, Lcom/tkay/expressad/exoplayer/q;->h:Lcom/tkay/expressad/exoplayer/r;

    iget-boolean v6, v6, Lcom/tkay/expressad/exoplayer/r;->g:Z

    if-nez v6, :cond_51

    const/4 v6, 0x1

    goto :goto_30

    :cond_51
    const/4 v6, 0x0

    :goto_30
    invoke-virtual {v2, v6}, Lcom/tkay/expressad/exoplayer/q;->a(Z)J

    move-result-wide v6

    const-wide/high16 v8, -0x8000000000000000L

    cmp-long v8, v6, v8

    if-eqz v8, :cond_4f

    .line 5111
    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    iget-wide v9, v1, Lcom/tkay/expressad/exoplayer/k;->ab:J

    .line 6106
    iget-wide v11, v2, Lcom/tkay/expressad/exoplayer/q;->e:J

    sub-long/2addr v9, v11

    sub-long/2addr v6, v9

    .line 5113
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->L:Lcom/tkay/expressad/exoplayer/e;

    .line 5114
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/e;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v2

    iget v2, v2, Lcom/tkay/expressad/exoplayer/v;->b:F

    iget-boolean v9, v1, Lcom/tkay/expressad/exoplayer/k;->W:Z

    .line 5112
    invoke-interface {v8, v6, v7, v2, v9}, Lcom/tkay/expressad/exoplayer/p;->a(JFZ)Z

    move-result v2

    if-eqz v2, :cond_52

    goto :goto_2f

    :cond_52
    const/4 v2, 0x0

    :goto_31
    if-eqz v2, :cond_53

    const/4 v2, 0x3

    .line 2553
    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    .line 2554
    iget-boolean v2, v1, Lcom/tkay/expressad/exoplayer/k;->V:Z

    if-eqz v2, :cond_56

    .line 2555
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->e()V

    goto :goto_32

    .line 2557
    :cond_53
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v6, 0x3

    if-ne v2, v6, :cond_56

    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v2, v2

    if-nez v2, :cond_54

    .line 2558
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->m()Z

    move-result v2

    if-eqz v2, :cond_55

    goto :goto_32

    :cond_54
    if-nez v13, :cond_56

    .line 2559
    :cond_55
    iget-boolean v2, v1, Lcom/tkay/expressad/exoplayer/k;->V:Z

    iput-boolean v2, v1, Lcom/tkay/expressad/exoplayer/k;->W:Z
    :try_end_14
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_14 .. :try_end_14} :catch_17
    .catch Ljava/io/IOException; {:try_start_14 .. :try_end_14} :catch_16
    .catch Ljava/lang/RuntimeException; {:try_start_14 .. :try_end_14} :catch_15

    const/4 v2, 0x2

    .line 2560
    :try_start_15
    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->b(I)V
    :try_end_15
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_15 .. :try_end_15} :catch_14
    .catch Ljava/io/IOException; {:try_start_15 .. :try_end_15} :catch_13
    .catch Ljava/lang/RuntimeException; {:try_start_15 .. :try_end_15} :catch_15

    .line 2561
    :try_start_16
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->f()V

    .line 2564
    :cond_56
    :goto_32
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v6, 0x2

    if-ne v2, v6, :cond_57

    .line 2565
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v6, v2

    const/4 v7, 0x0

    :goto_33
    if-ge v7, v6, :cond_57

    aget-object v8, v2, v7

    .line 2566
    invoke-interface {v8}, Lcom/tkay/expressad/exoplayer/y;->j()V

    add-int/lit8 v7, v7, 0x1

    goto :goto_33

    .line 2570
    :cond_57
    iget-boolean v2, v1, Lcom/tkay/expressad/exoplayer/k;->V:Z

    if-eqz v2, :cond_58

    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v6, 0x3

    if-eq v2, v6, :cond_59

    :cond_58
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v6, 0x2

    if-ne v2, v6, :cond_5a

    :cond_59
    const-wide/16 v6, 0xa

    .line 2572
    invoke-direct {v1, v4, v5, v6, v7}, Lcom/tkay/expressad/exoplayer/k;->a(JJ)V

    goto :goto_34

    .line 2573
    :cond_5a
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->T:[Lcom/tkay/expressad/exoplayer/y;

    array-length v2, v2

    if-eqz v2, :cond_5b

    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v6, 0x4

    if-eq v2, v6, :cond_5b

    const-wide/16 v6, 0x3e8

    .line 2574
    invoke-direct {v1, v4, v5, v6, v7}, Lcom/tkay/expressad/exoplayer/k;->a(JJ)V

    goto :goto_34

    .line 2576
    :cond_5b
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {v2}, Lcom/tkay/expressad/exoplayer/k/k;->b()V

    .line 2579
    :goto_34
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    goto/16 :goto_38

    .line 301
    :pswitch_e
    iget v2, v2, Landroid/os/Message;->arg1:I
    :try_end_16
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_16 .. :try_end_16} :catch_17
    .catch Ljava/io/IOException; {:try_start_16 .. :try_end_16} :catch_16
    .catch Ljava/lang/RuntimeException; {:try_start_16 .. :try_end_16} :catch_15

    if-eqz v2, :cond_5c

    const/4 v2, 0x1

    goto :goto_35

    :cond_5c
    const/4 v2, 0x0

    :goto_35
    const/4 v4, 0x0

    .line 2410
    :try_start_17
    iput-boolean v4, v1, Lcom/tkay/expressad/exoplayer/k;->W:Z
    :try_end_17
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_17 .. :try_end_17} :catch_12
    .catch Ljava/io/IOException; {:try_start_17 .. :try_end_17} :catch_11
    .catch Ljava/lang/RuntimeException; {:try_start_17 .. :try_end_17} :catch_10

    .line 2411
    :try_start_18
    iput-boolean v2, v1, Lcom/tkay/expressad/exoplayer/k;->V:Z

    if-nez v2, :cond_5d

    .line 2413
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->f()V

    .line 2414
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->g()V

    goto :goto_38

    .line 2416
    :cond_5d
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/u;->f:I

    const/4 v4, 0x3

    if-ne v2, v4, :cond_5e

    .line 2417
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->e()V

    .line 2418
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;
    :try_end_18
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_18 .. :try_end_18} :catch_17
    .catch Ljava/io/IOException; {:try_start_18 .. :try_end_18} :catch_16
    .catch Ljava/lang/RuntimeException; {:try_start_18 .. :try_end_18} :catch_15

    const/4 v4, 0x2

    :try_start_19
    invoke-interface {v2, v4}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z
    :try_end_19
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_19 .. :try_end_19} :catch_c
    .catch Ljava/io/IOException; {:try_start_19 .. :try_end_19} :catch_b
    .catch Ljava/lang/RuntimeException; {:try_start_19 .. :try_end_19} :catch_15

    goto :goto_38

    .line 2419
    :cond_5e
    :try_start_1a
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->R:Lcom/tkay/expressad/exoplayer/u;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/u;->f:I
    :try_end_1a
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_1a .. :try_end_1a} :catch_17
    .catch Ljava/io/IOException; {:try_start_1a .. :try_end_1a} :catch_16
    .catch Ljava/lang/RuntimeException; {:try_start_1a .. :try_end_1a} :catch_15

    const/4 v4, 0x2

    if-ne v2, v4, :cond_61

    .line 2420
    :try_start_1b
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {v2, v4}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z
    :try_end_1b
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_1b .. :try_end_1b} :catch_c
    .catch Ljava/io/IOException; {:try_start_1b .. :try_end_1b} :catch_b
    .catch Ljava/lang/RuntimeException; {:try_start_1b .. :try_end_1b} :catch_15

    goto :goto_38

    :catch_10
    move-exception v0

    move v2, v4

    goto/16 :goto_3b

    :catch_11
    move-exception v0

    move-object v5, v0

    move v2, v4

    goto :goto_39

    :catch_12
    move-exception v0

    move-object v5, v0

    move v2, v4

    goto :goto_3a

    .line 295
    :pswitch_f
    :try_start_1c
    iget-object v4, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v4, Lcom/tkay/expressad/exoplayer/h/s;

    iget v5, v2, Landroid/os/Message;->arg1:I

    if-eqz v5, :cond_5f

    const/4 v5, 0x1

    goto :goto_36

    :cond_5f
    const/4 v5, 0x0

    :goto_36
    iget v2, v2, Landroid/os/Message;->arg2:I

    if-eqz v2, :cond_60

    const/4 v2, 0x1

    goto :goto_37

    :cond_60
    const/4 v2, 0x0

    .line 2400
    :goto_37
    iget v6, v1, Lcom/tkay/expressad/exoplayer/k;->Z:I

    const/4 v7, 0x1

    add-int/2addr v6, v7

    iput v6, v1, Lcom/tkay/expressad/exoplayer/k;->Z:I

    .line 2401
    invoke-direct {v1, v7, v5, v2}, Lcom/tkay/expressad/exoplayer/k;->a(ZZZ)V

    .line 2402
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->C:Lcom/tkay/expressad/exoplayer/p;

    invoke-interface {v2}, Lcom/tkay/expressad/exoplayer/p;->a()V

    .line 2403
    iput-object v4, v1, Lcom/tkay/expressad/exoplayer/k;->S:Lcom/tkay/expressad/exoplayer/h/s;
    :try_end_1c
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_1c .. :try_end_1c} :catch_17
    .catch Ljava/io/IOException; {:try_start_1c .. :try_end_1c} :catch_16
    .catch Ljava/lang/RuntimeException; {:try_start_1c .. :try_end_1c} :catch_15

    const/4 v2, 0x2

    .line 2404
    :try_start_1d
    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/k;->b(I)V

    .line 2405
    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/k;->G:Lcom/tkay/expressad/exoplayer/h;

    const/4 v6, 0x1

    invoke-interface {v4, v5, v6, v1}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h;ZLcom/tkay/expressad/exoplayer/h/s$b;)V

    .line 2406
    iget-object v4, v1, Lcom/tkay/expressad/exoplayer/k;->D:Lcom/tkay/expressad/exoplayer/k/k;

    invoke-interface {v4, v2}, Lcom/tkay/expressad/exoplayer/k/k;->b(I)Z
    :try_end_1d
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_1d .. :try_end_1d} :catch_14
    .catch Ljava/io/IOException; {:try_start_1d .. :try_end_1d} :catch_13
    .catch Ljava/lang/RuntimeException; {:try_start_1d .. :try_end_1d} :catch_15

    .line 349
    :cond_61
    :goto_38
    :try_start_1e
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->d()V
    :try_end_1e
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_1e .. :try_end_1e} :catch_17
    .catch Ljava/io/IOException; {:try_start_1e .. :try_end_1e} :catch_16
    .catch Ljava/lang/RuntimeException; {:try_start_1e .. :try_end_1e} :catch_15

    goto/16 :goto_41

    :catch_13
    move-exception v0

    move-object v5, v0

    move v4, v2

    goto/16 :goto_1b

    :catch_14
    move-exception v0

    move-object v5, v0

    move v4, v2

    goto/16 :goto_1c

    :catch_15
    move-exception v0

    move-object v4, v0

    const/4 v2, 0x0

    goto :goto_3c

    :catch_16
    move-exception v0

    move-object v5, v0

    const/4 v2, 0x0

    :goto_39
    const/4 v4, 0x2

    goto :goto_3e

    :catch_17
    move-exception v0

    move-object v5, v0

    const/4 v2, 0x0

    :goto_3a
    const/4 v4, 0x2

    goto :goto_40

    :catch_18
    move-exception v0

    move v2, v5

    :goto_3b
    move-object v4, v0

    :goto_3c
    const-string v5, "Internal runtime error."

    .line 361
    invoke-static {v3, v5, v4}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 362
    invoke-direct {v1, v2, v2}, Lcom/tkay/expressad/exoplayer/k;->a(ZZ)V

    .line 363
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->F:Landroid/os/Handler;

    invoke-static {v4}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/RuntimeException;)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v3

    const/4 v4, 0x2

    invoke-virtual {v2, v4, v3}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object v2

    .line 364
    invoke-virtual {v2}, Landroid/os/Message;->sendToTarget()V

    .line 365
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->d()V

    goto :goto_41

    :catch_19
    move-exception v0

    move v2, v5

    :goto_3d
    move-object v5, v0

    :goto_3e
    const-string v6, "Source error."

    .line 356
    invoke-static {v3, v6, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 357
    invoke-direct {v1, v2, v2}, Lcom/tkay/expressad/exoplayer/k;->a(ZZ)V

    .line 358
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->F:Landroid/os/Handler;

    invoke-static {v5}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/io/IOException;)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v3

    invoke-virtual {v2, v4, v3}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object v2

    invoke-virtual {v2}, Landroid/os/Message;->sendToTarget()V

    .line 359
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->d()V

    goto :goto_41

    :catch_1a
    move-exception v0

    move v2, v5

    :goto_3f
    move-object v5, v0

    :goto_40
    const-string v6, "Playback error."

    .line 351
    invoke-static {v3, v6, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 352
    invoke-direct {v1, v2, v2}, Lcom/tkay/expressad/exoplayer/k;->a(ZZ)V

    .line 353
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/k;->F:Landroid/os/Handler;

    invoke-virtual {v2, v4, v5}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object v2

    invoke-virtual {v2}, Landroid/os/Message;->sendToTarget()V

    .line 354
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k;->d()V

    :goto_41
    const/4 v2, 0x1

    return v2

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
