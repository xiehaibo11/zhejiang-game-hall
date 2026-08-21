.class public Lcom/xiaomi/push/hn;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/xiaomi/push/iu;
.implements Ljava/io/Serializable;
.implements Ljava/lang/Cloneable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/xiaomi/push/iu<",
        "Lcom/xiaomi/push/hn;",
        "Ljava/lang/Object;",
        ">;",
        "Ljava/io/Serializable;",
        "Ljava/lang/Cloneable;"
    }
.end annotation


# static fields
.field private static final a:Lcom/xiaomi/push/jc;

.field private static final a:Lcom/xiaomi/push/jk;

.field private static final b:Lcom/xiaomi/push/jc;

.field private static final c:Lcom/xiaomi/push/jc;

.field private static final d:Lcom/xiaomi/push/jc;

.field private static final e:Lcom/xiaomi/push/jc;

.field private static final f:Lcom/xiaomi/push/jc;

.field private static final g:Lcom/xiaomi/push/jc;

.field private static final h:Lcom/xiaomi/push/jc;

.field private static final i:Lcom/xiaomi/push/jc;

.field private static final j:Lcom/xiaomi/push/jc;

.field private static final k:Lcom/xiaomi/push/jc;


# instance fields
.field public a:J

.field public a:Ljava/lang/String;

.field private a:Ljava/util/BitSet;

.field public a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public a:Z

.field public b:J

.field public b:Ljava/lang/String;

.field public c:Ljava/lang/String;

.field public d:Ljava/lang/String;

.field public e:Ljava/lang/String;

.field public f:Ljava/lang/String;

.field public g:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/xiaomi/push/jk;

    const-string v1, "ClientUploadDataItem"

    invoke-direct {v0, v1}, Lcom/xiaomi/push/jk;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/xiaomi/push/hn;->a:Lcom/xiaomi/push/jk;

    new-instance v0, Lcom/xiaomi/push/jc;

    const/16 v1, 0xb

    const-string v2, ""

    const/4 v3, 0x1

    invoke-direct {v0, v2, v1, v3}, Lcom/xiaomi/push/jc;-><init>(Ljava/lang/String;BS)V

    sput-object v0, Lcom/xiaomi/push/hn;->a:Lcom/xiaomi/push/jc;

    new-instance v0, Lcom/xiaomi/push/jc;

    const/4 v3, 0x2

    invoke-direct {v0, v2, v1, v3}, Lcom/xiaomi/push/jc;-><init>(Ljava/lang/String;BS)V

    sput-object v0, Lcom/xiaomi/push/hn;->b:Lcom/xiaomi/push/jc;

    new-instance v0, Lcom/xiaomi/push/jc;

    const/4 v4, 0x3

    invoke-direct {v0, v2, v1, v4}, Lcom/xiaomi/push/jc;-><init>(Ljava/lang/String;BS)V

    sput-object v0, Lcom/xiaomi/push/hn;->c:Lcom/xiaomi/push/jc;

    new-instance v0, Lcom/xiaomi/push/jc;

    const/16 v4, 0xa

    const/4 v5, 0x4

    invoke-direct {v0, v2, v4, v5}, Lcom/xiaomi/push/jc;-><init>(Ljava/lang/String;BS)V

    sput-object v0, Lcom/xiaomi/push/hn;->d:Lcom/xiaomi/push/jc;

    new-instance v0, Lcom/xiaomi/push/jc;

    const/4 v5, 0x5

    invoke-direct {v0, v2, v4, v5}, Lcom/xiaomi/push/jc;-><init>(Ljava/lang/String;BS)V

    sput-object v0, Lcom/xiaomi/push/hn;->e:Lcom/xiaomi/push/jc;

    new-instance v0, Lcom/xiaomi/push/jc;

    const/4 v5, 0x6

    invoke-direct {v0, v2, v3, v5}, Lcom/xiaomi/push/jc;-><init>(Ljava/lang/String;BS)V

    sput-object v0, Lcom/xiaomi/push/hn;->f:Lcom/xiaomi/push/jc;

    new-instance v0, Lcom/xiaomi/push/jc;

    const/4 v3, 0x7

    invoke-direct {v0, v2, v1, v3}, Lcom/xiaomi/push/jc;-><init>(Ljava/lang/String;BS)V

    sput-object v0, Lcom/xiaomi/push/hn;->g:Lcom/xiaomi/push/jc;

    new-instance v0, Lcom/xiaomi/push/jc;

    const/16 v3, 0x8

    invoke-direct {v0, v2, v1, v3}, Lcom/xiaomi/push/jc;-><init>(Ljava/lang/String;BS)V

    sput-object v0, Lcom/xiaomi/push/hn;->h:Lcom/xiaomi/push/jc;

    new-instance v0, Lcom/xiaomi/push/jc;

    const/16 v3, 0x9

    invoke-direct {v0, v2, v1, v3}, Lcom/xiaomi/push/jc;-><init>(Ljava/lang/String;BS)V

    sput-object v0, Lcom/xiaomi/push/hn;->i:Lcom/xiaomi/push/jc;

    new-instance v0, Lcom/xiaomi/push/jc;

    const/16 v3, 0xd

    invoke-direct {v0, v2, v3, v4}, Lcom/xiaomi/push/jc;-><init>(Ljava/lang/String;BS)V

    sput-object v0, Lcom/xiaomi/push/hn;->j:Lcom/xiaomi/push/jc;

    new-instance v0, Lcom/xiaomi/push/jc;

    invoke-direct {v0, v2, v1, v1}, Lcom/xiaomi/push/jc;-><init>(Ljava/lang/String;BS)V

    sput-object v0, Lcom/xiaomi/push/hn;->k:Lcom/xiaomi/push/jc;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/BitSet;

    const/4 v1, 0x3

    invoke-direct {v0, v1}, Ljava/util/BitSet;-><init>(I)V

    iput-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/BitSet;

    return-void
.end method


# virtual methods
.method public a(Lcom/xiaomi/push/hn;)I
    .locals 4

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/String;->compareTo(Ljava/lang/String;)I

    move-result p1

    return p1

    :cond_0
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->a()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->a()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Boolean;->compareTo(Ljava/lang/Boolean;)I

    move-result v0

    if-eqz v0, :cond_1

    return v0

    :cond_1
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->a()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/lang/String;

    iget-object v1, p1, Lcom/xiaomi/push/hn;->a:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/xiaomi/push/iv;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-eqz v0, :cond_2

    return v0

    :cond_2
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->b()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->b()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Boolean;->compareTo(Ljava/lang/Boolean;)I

    move-result v0

    if-eqz v0, :cond_3

    return v0

    :cond_3
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->b()Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/xiaomi/push/hn;->b:Ljava/lang/String;

    iget-object v1, p1, Lcom/xiaomi/push/hn;->b:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/xiaomi/push/iv;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-eqz v0, :cond_4

    return v0

    :cond_4
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->c()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->c()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Boolean;->compareTo(Ljava/lang/Boolean;)I

    move-result v0

    if-eqz v0, :cond_5

    return v0

    :cond_5
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->c()Z

    move-result v0

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/xiaomi/push/hn;->c:Ljava/lang/String;

    iget-object v1, p1, Lcom/xiaomi/push/hn;->c:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/xiaomi/push/iv;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-eqz v0, :cond_6

    return v0

    :cond_6
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->d()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->d()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Boolean;->compareTo(Ljava/lang/Boolean;)I

    move-result v0

    if-eqz v0, :cond_7

    return v0

    :cond_7
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->d()Z

    move-result v0

    if-eqz v0, :cond_8

    iget-wide v0, p0, Lcom/xiaomi/push/hn;->a:J

    iget-wide v2, p1, Lcom/xiaomi/push/hn;->a:J

    invoke-static {v0, v1, v2, v3}, Lcom/xiaomi/push/iv;->a(JJ)I

    move-result v0

    if-eqz v0, :cond_8

    return v0

    :cond_8
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->e()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->e()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Boolean;->compareTo(Ljava/lang/Boolean;)I

    move-result v0

    if-eqz v0, :cond_9

    return v0

    :cond_9
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->e()Z

    move-result v0

    if-eqz v0, :cond_a

    iget-wide v0, p0, Lcom/xiaomi/push/hn;->b:J

    iget-wide v2, p1, Lcom/xiaomi/push/hn;->b:J

    invoke-static {v0, v1, v2, v3}, Lcom/xiaomi/push/iv;->a(JJ)I

    move-result v0

    if-eqz v0, :cond_a

    return v0

    :cond_a
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->f()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->f()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Boolean;->compareTo(Ljava/lang/Boolean;)I

    move-result v0

    if-eqz v0, :cond_b

    return v0

    :cond_b
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->f()Z

    move-result v0

    if-eqz v0, :cond_c

    iget-boolean v0, p0, Lcom/xiaomi/push/hn;->a:Z

    iget-boolean v1, p1, Lcom/xiaomi/push/hn;->a:Z

    invoke-static {v0, v1}, Lcom/xiaomi/push/iv;->a(ZZ)I

    move-result v0

    if-eqz v0, :cond_c

    return v0

    :cond_c
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->g()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->g()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Boolean;->compareTo(Ljava/lang/Boolean;)I

    move-result v0

    if-eqz v0, :cond_d

    return v0

    :cond_d
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->g()Z

    move-result v0

    if-eqz v0, :cond_e

    iget-object v0, p0, Lcom/xiaomi/push/hn;->d:Ljava/lang/String;

    iget-object v1, p1, Lcom/xiaomi/push/hn;->d:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/xiaomi/push/iv;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-eqz v0, :cond_e

    return v0

    :cond_e
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->h()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->h()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Boolean;->compareTo(Ljava/lang/Boolean;)I

    move-result v0

    if-eqz v0, :cond_f

    return v0

    :cond_f
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->h()Z

    move-result v0

    if-eqz v0, :cond_10

    iget-object v0, p0, Lcom/xiaomi/push/hn;->e:Ljava/lang/String;

    iget-object v1, p1, Lcom/xiaomi/push/hn;->e:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/xiaomi/push/iv;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-eqz v0, :cond_10

    return v0

    :cond_10
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->i()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->i()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Boolean;->compareTo(Ljava/lang/Boolean;)I

    move-result v0

    if-eqz v0, :cond_11

    return v0

    :cond_11
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->i()Z

    move-result v0

    if-eqz v0, :cond_12

    iget-object v0, p0, Lcom/xiaomi/push/hn;->f:Ljava/lang/String;

    iget-object v1, p1, Lcom/xiaomi/push/hn;->f:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/xiaomi/push/iv;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-eqz v0, :cond_12

    return v0

    :cond_12
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->j()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->j()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Boolean;->compareTo(Ljava/lang/Boolean;)I

    move-result v0

    if-eqz v0, :cond_13

    return v0

    :cond_13
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->j()Z

    move-result v0

    if-eqz v0, :cond_14

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    iget-object v1, p1, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    invoke-static {v0, v1}, Lcom/xiaomi/push/iv;->a(Ljava/util/Map;Ljava/util/Map;)I

    move-result v0

    if-eqz v0, :cond_14

    return v0

    :cond_14
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->k()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->k()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Boolean;->compareTo(Ljava/lang/Boolean;)I

    move-result v0

    if-eqz v0, :cond_15

    return v0

    :cond_15
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->k()Z

    move-result v0

    if-eqz v0, :cond_16

    iget-object v0, p0, Lcom/xiaomi/push/hn;->g:Ljava/lang/String;

    iget-object p1, p1, Lcom/xiaomi/push/hn;->g:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/xiaomi/push/iv;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    if-eqz p1, :cond_16

    return p1

    :cond_16
    const/4 p1, 0x0

    return p1
.end method

.method public a()J
    .locals 2

    iget-wide v0, p0, Lcom/xiaomi/push/hn;->b:J

    return-wide v0
.end method

.method public a(J)Lcom/xiaomi/push/hn;
    .locals 0

    iput-wide p1, p0, Lcom/xiaomi/push/hn;->a:J

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/xiaomi/push/hn;->a(Z)V

    return-object p0
.end method

.method public a(Ljava/lang/String;)Lcom/xiaomi/push/hn;
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/hn;->a:Ljava/lang/String;

    return-object p0
.end method

.method public a(Ljava/util/Map;)Lcom/xiaomi/push/hn;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/xiaomi/push/hn;"
        }
    .end annotation

    iput-object p1, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    return-object p0
.end method

.method public a(Z)Lcom/xiaomi/push/hn;
    .locals 0

    iput-boolean p1, p0, Lcom/xiaomi/push/hn;->a:Z

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/xiaomi/push/hn;->c(Z)V

    return-object p0
.end method

.method public a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/lang/String;

    return-object v0
.end method

.method public a()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    return-object v0
.end method

.method public a()V
    .locals 0

    return-void
.end method

.method public a(Lcom/xiaomi/push/jf;)V
    .locals 6

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Lcom/xiaomi/push/jk;

    :goto_0
    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Lcom/xiaomi/push/jc;

    move-result-object v0

    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    if-nez v1, :cond_0

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->f()V

    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->a()V

    return-void

    :cond_0
    iget-short v1, v0, Lcom/xiaomi/push/jc;->a:S

    const/4 v2, 0x2

    const/16 v3, 0xa

    const/4 v4, 0x1

    const/16 v5, 0xb

    packed-switch v1, :pswitch_data_0

    :cond_1
    iget-byte v0, v0, Lcom/xiaomi/push/jc;->a:B

    invoke-static {p1, v0}, Lcom/xiaomi/push/ji;->a(Lcom/xiaomi/push/jf;B)V

    goto/16 :goto_2

    :pswitch_0
    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    if-ne v1, v5, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/xiaomi/push/hn;->g:Ljava/lang/String;

    goto/16 :goto_2

    :pswitch_1
    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    const/16 v3, 0xd

    if-ne v1, v3, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Lcom/xiaomi/push/je;

    move-result-object v0

    new-instance v1, Ljava/util/HashMap;

    iget v3, v0, Lcom/xiaomi/push/je;->a:I

    mul-int/2addr v3, v2

    invoke-direct {v1, v3}, Ljava/util/HashMap;-><init>(I)V

    iput-object v1, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    const/4 v1, 0x0

    :goto_1
    iget v2, v0, Lcom/xiaomi/push/je;->a:I

    if-ge v1, v2, :cond_2

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    invoke-interface {v4, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    :cond_2
    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->h()V

    goto/16 :goto_2

    :pswitch_2
    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    if-ne v1, v5, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/xiaomi/push/hn;->f:Ljava/lang/String;

    goto :goto_2

    :pswitch_3
    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    if-ne v1, v5, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/xiaomi/push/hn;->e:Ljava/lang/String;

    goto :goto_2

    :pswitch_4
    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    if-ne v1, v5, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/xiaomi/push/hn;->d:Ljava/lang/String;

    goto :goto_2

    :pswitch_5
    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    if-ne v1, v2, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Z

    move-result v0

    iput-boolean v0, p0, Lcom/xiaomi/push/hn;->a:Z

    invoke-virtual {p0, v4}, Lcom/xiaomi/push/hn;->c(Z)V

    goto :goto_2

    :pswitch_6
    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    if-ne v1, v3, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/xiaomi/push/hn;->b:J

    invoke-virtual {p0, v4}, Lcom/xiaomi/push/hn;->b(Z)V

    goto :goto_2

    :pswitch_7
    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    if-ne v1, v3, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/xiaomi/push/hn;->a:J

    invoke-virtual {p0, v4}, Lcom/xiaomi/push/hn;->a(Z)V

    goto :goto_2

    :pswitch_8
    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    if-ne v1, v5, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/xiaomi/push/hn;->c:Ljava/lang/String;

    goto :goto_2

    :pswitch_9
    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    if-ne v1, v5, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/xiaomi/push/hn;->b:Ljava/lang/String;

    goto :goto_2

    :pswitch_a
    iget-byte v1, v0, Lcom/xiaomi/push/jc;->a:B

    if-ne v1, v5, :cond_1

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/lang/String;

    :goto_2
    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->g()V

    goto/16 :goto_0

    :pswitch_data_0
    .packed-switch 0x1
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

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    :cond_0
    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public a(Z)V
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/BitSet;

    const/4 v1, 0x0

    invoke-virtual {v0, v1, p1}, Ljava/util/BitSet;->set(IZ)V

    return-void
.end method

.method public a()Z
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/lang/String;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public a(Lcom/xiaomi/push/hn;)Z
    .locals 5

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->a()Z

    move-result v1

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->a()Z

    move-result v2

    if-nez v1, :cond_1

    if-eqz v2, :cond_3

    :cond_1
    if-eqz v1, :cond_22

    if-nez v2, :cond_2

    goto/16 :goto_0

    :cond_2
    iget-object v1, p0, Lcom/xiaomi/push/hn;->a:Ljava/lang/String;

    iget-object v2, p1, Lcom/xiaomi/push/hn;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_3

    return v0

    :cond_3
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->b()Z

    move-result v1

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->b()Z

    move-result v2

    if-nez v1, :cond_4

    if-eqz v2, :cond_6

    :cond_4
    if-eqz v1, :cond_22

    if-nez v2, :cond_5

    goto/16 :goto_0

    :cond_5
    iget-object v1, p0, Lcom/xiaomi/push/hn;->b:Ljava/lang/String;

    iget-object v2, p1, Lcom/xiaomi/push/hn;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_6

    return v0

    :cond_6
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->c()Z

    move-result v1

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->c()Z

    move-result v2

    if-nez v1, :cond_7

    if-eqz v2, :cond_9

    :cond_7
    if-eqz v1, :cond_22

    if-nez v2, :cond_8

    goto/16 :goto_0

    :cond_8
    iget-object v1, p0, Lcom/xiaomi/push/hn;->c:Ljava/lang/String;

    iget-object v2, p1, Lcom/xiaomi/push/hn;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_9

    return v0

    :cond_9
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->d()Z

    move-result v1

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->d()Z

    move-result v2

    if-nez v1, :cond_a

    if-eqz v2, :cond_c

    :cond_a
    if-eqz v1, :cond_22

    if-nez v2, :cond_b

    goto/16 :goto_0

    :cond_b
    iget-wide v1, p0, Lcom/xiaomi/push/hn;->a:J

    iget-wide v3, p1, Lcom/xiaomi/push/hn;->a:J

    cmp-long v1, v1, v3

    if-eqz v1, :cond_c

    return v0

    :cond_c
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->e()Z

    move-result v1

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->e()Z

    move-result v2

    if-nez v1, :cond_d

    if-eqz v2, :cond_f

    :cond_d
    if-eqz v1, :cond_22

    if-nez v2, :cond_e

    goto/16 :goto_0

    :cond_e
    iget-wide v1, p0, Lcom/xiaomi/push/hn;->b:J

    iget-wide v3, p1, Lcom/xiaomi/push/hn;->b:J

    cmp-long v1, v1, v3

    if-eqz v1, :cond_f

    return v0

    :cond_f
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->f()Z

    move-result v1

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->f()Z

    move-result v2

    if-nez v1, :cond_10

    if-eqz v2, :cond_12

    :cond_10
    if-eqz v1, :cond_22

    if-nez v2, :cond_11

    goto/16 :goto_0

    :cond_11
    iget-boolean v1, p0, Lcom/xiaomi/push/hn;->a:Z

    iget-boolean v2, p1, Lcom/xiaomi/push/hn;->a:Z

    if-eq v1, v2, :cond_12

    return v0

    :cond_12
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->g()Z

    move-result v1

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->g()Z

    move-result v2

    if-nez v1, :cond_13

    if-eqz v2, :cond_15

    :cond_13
    if-eqz v1, :cond_22

    if-nez v2, :cond_14

    goto/16 :goto_0

    :cond_14
    iget-object v1, p0, Lcom/xiaomi/push/hn;->d:Ljava/lang/String;

    iget-object v2, p1, Lcom/xiaomi/push/hn;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_15

    return v0

    :cond_15
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->h()Z

    move-result v1

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->h()Z

    move-result v2

    if-nez v1, :cond_16

    if-eqz v2, :cond_18

    :cond_16
    if-eqz v1, :cond_22

    if-nez v2, :cond_17

    goto :goto_0

    :cond_17
    iget-object v1, p0, Lcom/xiaomi/push/hn;->e:Ljava/lang/String;

    iget-object v2, p1, Lcom/xiaomi/push/hn;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_18

    return v0

    :cond_18
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->i()Z

    move-result v1

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->i()Z

    move-result v2

    if-nez v1, :cond_19

    if-eqz v2, :cond_1b

    :cond_19
    if-eqz v1, :cond_22

    if-nez v2, :cond_1a

    goto :goto_0

    :cond_1a
    iget-object v1, p0, Lcom/xiaomi/push/hn;->f:Ljava/lang/String;

    iget-object v2, p1, Lcom/xiaomi/push/hn;->f:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1b

    return v0

    :cond_1b
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->j()Z

    move-result v1

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->j()Z

    move-result v2

    if-nez v1, :cond_1c

    if-eqz v2, :cond_1e

    :cond_1c
    if-eqz v1, :cond_22

    if-nez v2, :cond_1d

    goto :goto_0

    :cond_1d
    iget-object v1, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    iget-object v2, p1, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    invoke-interface {v1, v2}, Ljava/util/Map;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1e

    return v0

    :cond_1e
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->k()Z

    move-result v1

    invoke-virtual {p1}, Lcom/xiaomi/push/hn;->k()Z

    move-result v2

    if-nez v1, :cond_1f

    if-eqz v2, :cond_21

    :cond_1f
    if-eqz v1, :cond_22

    if-nez v2, :cond_20

    goto :goto_0

    :cond_20
    iget-object v1, p0, Lcom/xiaomi/push/hn;->g:Ljava/lang/String;

    iget-object p1, p1, Lcom/xiaomi/push/hn;->g:Ljava/lang/String;

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_21

    return v0

    :cond_21
    const/4 p1, 0x1

    return p1

    :cond_22
    :goto_0
    return v0
.end method

.method public b(J)Lcom/xiaomi/push/hn;
    .locals 0

    iput-wide p1, p0, Lcom/xiaomi/push/hn;->b:J

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/xiaomi/push/hn;->b(Z)V

    return-object p0
.end method

.method public b(Ljava/lang/String;)Lcom/xiaomi/push/hn;
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/hn;->b:Ljava/lang/String;

    return-object p0
.end method

.method public b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->c:Ljava/lang/String;

    return-object v0
.end method

.method public b(Lcom/xiaomi/push/jf;)V
    .locals 3

    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->a()V

    sget-object v0, Lcom/xiaomi/push/hn;->a:Lcom/xiaomi/push/jk;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jk;)V

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/lang/String;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/xiaomi/push/hn;->a:Lcom/xiaomi/push/jc;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jc;)V

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->b()V

    :cond_0
    iget-object v0, p0, Lcom/xiaomi/push/hn;->b:Ljava/lang/String;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->b()Z

    move-result v0

    if-eqz v0, :cond_1

    sget-object v0, Lcom/xiaomi/push/hn;->b:Lcom/xiaomi/push/jc;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jc;)V

    iget-object v0, p0, Lcom/xiaomi/push/hn;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->b()V

    :cond_1
    iget-object v0, p0, Lcom/xiaomi/push/hn;->c:Ljava/lang/String;

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->c()Z

    move-result v0

    if-eqz v0, :cond_2

    sget-object v0, Lcom/xiaomi/push/hn;->c:Lcom/xiaomi/push/jc;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jc;)V

    iget-object v0, p0, Lcom/xiaomi/push/hn;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->b()V

    :cond_2
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->d()Z

    move-result v0

    if-eqz v0, :cond_3

    sget-object v0, Lcom/xiaomi/push/hn;->d:Lcom/xiaomi/push/jc;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jc;)V

    iget-wide v0, p0, Lcom/xiaomi/push/hn;->a:J

    invoke-virtual {p1, v0, v1}, Lcom/xiaomi/push/jf;->a(J)V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->b()V

    :cond_3
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->e()Z

    move-result v0

    if-eqz v0, :cond_4

    sget-object v0, Lcom/xiaomi/push/hn;->e:Lcom/xiaomi/push/jc;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jc;)V

    iget-wide v0, p0, Lcom/xiaomi/push/hn;->b:J

    invoke-virtual {p1, v0, v1}, Lcom/xiaomi/push/jf;->a(J)V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->b()V

    :cond_4
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->f()Z

    move-result v0

    if-eqz v0, :cond_5

    sget-object v0, Lcom/xiaomi/push/hn;->f:Lcom/xiaomi/push/jc;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jc;)V

    iget-boolean v0, p0, Lcom/xiaomi/push/hn;->a:Z

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Z)V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->b()V

    :cond_5
    iget-object v0, p0, Lcom/xiaomi/push/hn;->d:Ljava/lang/String;

    if-eqz v0, :cond_6

    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->g()Z

    move-result v0

    if-eqz v0, :cond_6

    sget-object v0, Lcom/xiaomi/push/hn;->g:Lcom/xiaomi/push/jc;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jc;)V

    iget-object v0, p0, Lcom/xiaomi/push/hn;->d:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->b()V

    :cond_6
    iget-object v0, p0, Lcom/xiaomi/push/hn;->e:Ljava/lang/String;

    if-eqz v0, :cond_7

    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->h()Z

    move-result v0

    if-eqz v0, :cond_7

    sget-object v0, Lcom/xiaomi/push/hn;->h:Lcom/xiaomi/push/jc;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jc;)V

    iget-object v0, p0, Lcom/xiaomi/push/hn;->e:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->b()V

    :cond_7
    iget-object v0, p0, Lcom/xiaomi/push/hn;->f:Ljava/lang/String;

    if-eqz v0, :cond_8

    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->i()Z

    move-result v0

    if-eqz v0, :cond_8

    sget-object v0, Lcom/xiaomi/push/hn;->i:Lcom/xiaomi/push/jc;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jc;)V

    iget-object v0, p0, Lcom/xiaomi/push/hn;->f:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->b()V

    :cond_8
    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    if-eqz v0, :cond_a

    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->j()Z

    move-result v0

    if-eqz v0, :cond_a

    sget-object v0, Lcom/xiaomi/push/hn;->j:Lcom/xiaomi/push/jc;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jc;)V

    new-instance v0, Lcom/xiaomi/push/je;

    iget-object v1, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    const/16 v2, 0xb

    invoke-direct {v0, v2, v2, v1}, Lcom/xiaomi/push/je;-><init>(BBI)V

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/je;)V

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_9

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {p1, v2}, Lcom/xiaomi/push/jf;->a(Ljava/lang/String;)V

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {p1, v1}, Lcom/xiaomi/push/jf;->a(Ljava/lang/String;)V

    goto :goto_0

    :cond_9
    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->d()V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->b()V

    :cond_a
    iget-object v0, p0, Lcom/xiaomi/push/hn;->g:Ljava/lang/String;

    if-eqz v0, :cond_b

    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->k()Z

    move-result v0

    if-eqz v0, :cond_b

    sget-object v0, Lcom/xiaomi/push/hn;->k:Lcom/xiaomi/push/jc;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Lcom/xiaomi/push/jc;)V

    iget-object v0, p0, Lcom/xiaomi/push/hn;->g:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/jf;->a(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->b()V

    :cond_b
    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->c()V

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->a()V

    return-void
.end method

.method public b(Z)V
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/BitSet;

    const/4 v1, 0x1

    invoke-virtual {v0, v1, p1}, Ljava/util/BitSet;->set(IZ)V

    return-void
.end method

.method public b()Z
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->b:Ljava/lang/String;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public c(Ljava/lang/String;)Lcom/xiaomi/push/hn;
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/hn;->c:Ljava/lang/String;

    return-object p0
.end method

.method public c()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->e:Ljava/lang/String;

    return-object v0
.end method

.method public c(Z)V
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/BitSet;

    const/4 v1, 0x2

    invoke-virtual {v0, v1, p1}, Ljava/util/BitSet;->set(IZ)V

    return-void
.end method

.method public c()Z
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->c:Ljava/lang/String;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/xiaomi/push/hn;

    invoke-virtual {p0, p1}, Lcom/xiaomi/push/hn;->a(Lcom/xiaomi/push/hn;)I

    move-result p1

    return p1
.end method

.method public d(Ljava/lang/String;)Lcom/xiaomi/push/hn;
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/hn;->d:Ljava/lang/String;

    return-object p0
.end method

.method public d()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->f:Ljava/lang/String;

    return-object v0
.end method

.method public d()Z
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/BitSet;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/BitSet;->get(I)Z

    move-result v0

    return v0
.end method

.method public e(Ljava/lang/String;)Lcom/xiaomi/push/hn;
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/hn;->e:Ljava/lang/String;

    return-object p0
.end method

.method public e()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->g:Ljava/lang/String;

    return-object v0
.end method

.method public e()Z
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/BitSet;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/BitSet;->get(I)Z

    move-result v0

    return v0
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/xiaomi/push/hn;

    if-eqz v1, :cond_1

    check-cast p1, Lcom/xiaomi/push/hn;

    invoke-virtual {p0, p1}, Lcom/xiaomi/push/hn;->a(Lcom/xiaomi/push/hn;)Z

    move-result p1

    return p1

    :cond_1
    return v0
.end method

.method public f(Ljava/lang/String;)Lcom/xiaomi/push/hn;
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/hn;->f:Ljava/lang/String;

    return-object p0
.end method

.method public f()Z
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/BitSet;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Ljava/util/BitSet;->get(I)Z

    move-result v0

    return v0
.end method

.method public g(Ljava/lang/String;)Lcom/xiaomi/push/hn;
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/hn;->g:Ljava/lang/String;

    return-object p0
.end method

.method public g()Z
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->d:Ljava/lang/String;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public h()Z
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->e:Ljava/lang/String;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public hashCode()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public i()Z
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->f:Ljava/lang/String;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public j()Z
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public k()Z
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/hn;->g:Ljava/lang/String;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 8

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ClientUploadDataItem("

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->a()Z

    move-result v1

    const-string v2, "null"

    const/4 v3, 0x0

    if-eqz v1, :cond_1

    const-string v1, "channel:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/xiaomi/push/hn;->a:Ljava/lang/String;

    if-nez v1, :cond_0

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_0
    move v1, v3

    goto :goto_1

    :cond_1
    const/4 v1, 0x1

    :goto_1
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->b()Z

    move-result v4

    const-string v5, ", "

    if-eqz v4, :cond_4

    if-nez v1, :cond_2

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    const-string v1, "data:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/xiaomi/push/hn;->b:Ljava/lang/String;

    if-nez v1, :cond_3

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_3
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_2
    move v1, v3

    :cond_4
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->c()Z

    move-result v4

    if-eqz v4, :cond_7

    if-nez v1, :cond_5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_5
    const-string v1, "name:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/xiaomi/push/hn;->c:Ljava/lang/String;

    if-nez v1, :cond_6

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_3

    :cond_6
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_3
    move v1, v3

    :cond_7
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->d()Z

    move-result v4

    if-eqz v4, :cond_9

    if-nez v1, :cond_8

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_8
    const-string v1, "counter:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v6, p0, Lcom/xiaomi/push/hn;->a:J

    invoke-virtual {v0, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    move v1, v3

    :cond_9
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->e()Z

    move-result v4

    if-eqz v4, :cond_b

    if-nez v1, :cond_a

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_a
    const-string v1, "timestamp:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v6, p0, Lcom/xiaomi/push/hn;->b:J

    invoke-virtual {v0, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    move v1, v3

    :cond_b
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->f()Z

    move-result v4

    if-eqz v4, :cond_d

    if-nez v1, :cond_c

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_c
    const-string v1, "fromSdk:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/xiaomi/push/hn;->a:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move v1, v3

    :cond_d
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->g()Z

    move-result v4

    if-eqz v4, :cond_10

    if-nez v1, :cond_e

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_e
    const-string v1, "category:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/xiaomi/push/hn;->d:Ljava/lang/String;

    if-nez v1, :cond_f

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_4

    :cond_f
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_4
    move v1, v3

    :cond_10
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->h()Z

    move-result v4

    if-eqz v4, :cond_13

    if-nez v1, :cond_11

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_11
    const-string v1, "sourcePackage:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/xiaomi/push/hn;->e:Ljava/lang/String;

    if-nez v1, :cond_12

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_5

    :cond_12
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_5
    move v1, v3

    :cond_13
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->i()Z

    move-result v4

    if-eqz v4, :cond_16

    if-nez v1, :cond_14

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_14
    const-string v1, "id:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/xiaomi/push/hn;->f:Ljava/lang/String;

    if-nez v1, :cond_15

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_6

    :cond_15
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_6
    move v1, v3

    :cond_16
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->j()Z

    move-result v4

    if-eqz v4, :cond_19

    if-nez v1, :cond_17

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_17
    const-string v1, "extra:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/xiaomi/push/hn;->a:Ljava/util/Map;

    if-nez v1, :cond_18

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_7

    :cond_18
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    goto :goto_7

    :cond_19
    move v3, v1

    :goto_7
    invoke-virtual {p0}, Lcom/xiaomi/push/hn;->k()Z

    move-result v1

    if-eqz v1, :cond_1c

    if-nez v3, :cond_1a

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1a
    const-string v1, "pkgName:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/xiaomi/push/hn;->g:Ljava/lang/String;

    if-nez v1, :cond_1b

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_8

    :cond_1b
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1c
    :goto_8
    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
