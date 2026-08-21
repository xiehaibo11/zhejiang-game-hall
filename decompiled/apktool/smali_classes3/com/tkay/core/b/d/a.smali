.class public Lcom/tkay/core/b/d/a;
.super Ljava/lang/Object;


# static fields
.field static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 20
    const-class v0, Lcom/tkay/core/b/d/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/b/d/a;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;ILjava/util/List;JII)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Lcom/tkay/core/c/d;",
            "Ljava/lang/String;",
            "I",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;JII)V"
        }
    .end annotation

    .line 23
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v11, Lcom/tkay/core/b/d/a$1;

    move-object v1, v11

    move-object v2, p0

    move-object v3, p2

    move-object v4, p1

    move v5, p3

    move-wide/from16 v6, p5

    move/from16 v8, p7

    move/from16 v9, p8

    move-object/from16 v10, p4

    invoke-direct/range {v1 .. v10}, Lcom/tkay/core/b/d/a$1;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;IJIILjava/util/List;)V

    invoke-virtual {v0, v11}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
