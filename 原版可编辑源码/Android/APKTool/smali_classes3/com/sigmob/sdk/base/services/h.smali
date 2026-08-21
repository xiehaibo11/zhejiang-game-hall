.class public Lcom/sigmob/sdk/base/services/h;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/hardware/SensorEventListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/services/h$a;
    }
.end annotation


# static fields
.field private static b:Landroid/os/Handler; = null

.field private static c:I = 0x1f4


# instance fields
.field a:Ljava/text/DecimalFormat;

.field private d:Lcom/sigmob/sdk/base/services/g;

.field private e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/services/g;",
            ">;"
        }
    .end annotation
.end field

.field private f:Landroid/hardware/SensorManager;

.field private g:I

.field private h:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/text/DecimalFormat;

    const-string v1, "#######.######"

    invoke-direct {v0, v1}, Ljava/text/DecimalFormat;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    new-instance v0, Lcom/sigmob/sdk/base/services/g;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/services/g;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/h;->d:Lcom/sigmob/sdk/base/services/g;

    const/16 v0, 0x12c

    iput v0, p0, Lcom/sigmob/sdk/base/services/h;->g:I

    const/16 v0, 0x32

    iput v0, p0, Lcom/sigmob/sdk/base/services/h;->h:I

    return-void
.end method

.method public static a()Lcom/sigmob/sdk/base/services/h;
    .locals 1

    invoke-static {}, Lcom/sigmob/sdk/base/services/h$a;->a()Lcom/sigmob/sdk/base/services/h;

    move-result-object v0

    return-object v0
.end method

.method private a(Ljava/util/List;)Ljava/lang/String;
    .locals 27
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/services/g;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    if-eqz v1, :cond_9

    invoke-interface/range {p1 .. p1}, Ljava/util/List;->size()I

    move-result v3

    if-nez v3, :cond_0

    goto/16 :goto_7

    :cond_0
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    new-instance v6, Ljava/util/ArrayList;

    invoke-direct {v6}, Ljava/util/ArrayList;-><init>()V

    new-instance v7, Ljava/util/ArrayList;

    invoke-direct {v7}, Ljava/util/ArrayList;-><init>()V

    new-instance v8, Ljava/util/ArrayList;

    invoke-direct {v8}, Ljava/util/ArrayList;-><init>()V

    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V

    new-instance v10, Ljava/util/ArrayList;

    invoke-direct {v10}, Ljava/util/ArrayList;-><init>()V

    new-instance v11, Ljava/util/ArrayList;

    invoke-direct {v11}, Ljava/util/ArrayList;-><init>()V

    new-instance v12, Ljava/util/ArrayList;

    invoke-direct {v12}, Ljava/util/ArrayList;-><init>()V

    new-instance v13, Ljava/util/ArrayList;

    invoke-direct {v13}, Ljava/util/ArrayList;-><init>()V

    new-instance v14, Ljava/util/ArrayList;

    invoke-direct {v14}, Ljava/util/ArrayList;-><init>()V

    new-instance v15, Ljava/util/ArrayList;

    invoke-direct {v15}, Ljava/util/ArrayList;-><init>()V

    move-object/from16 v16, v2

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    move-object/from16 v17, v2

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    move-object/from16 v18, v2

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const/16 v19, 0x0

    move-object/from16 v20, v2

    move-object/from16 v21, v15

    move/from16 v2, v19

    :goto_0
    invoke-interface/range {p1 .. p1}, Ljava/util/List;->size()I

    move-result v15

    move-object/from16 v22, v14

    if-ge v2, v15, :cond_8

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/sigmob/sdk/base/services/g;

    iget-object v14, v15, Lcom/sigmob/sdk/base/services/g;->a:[F

    const-string v1, "0"

    if-eqz v14, :cond_1

    iget-object v14, v15, Lcom/sigmob/sdk/base/services/g;->a:[F

    array-length v14, v14

    move/from16 v24, v2

    const/4 v2, 0x2

    if-le v14, v2, :cond_2

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v14, v15, Lcom/sigmob/sdk/base/services/g;->a:[F

    aget v14, v14, v19

    move-object/from16 v25, v13

    float-to-double v13, v14

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v13, v15, Lcom/sigmob/sdk/base/services/g;->a:[F

    const/4 v14, 0x1

    aget v13, v13, v14

    float-to-double v13, v13

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v13, v15, Lcom/sigmob/sdk/base/services/g;->a:[F

    const/4 v14, 0x2

    aget v13, v13, v14

    float-to-double v13, v13

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    :cond_1
    move/from16 v24, v2

    :cond_2
    move-object/from16 v25, v13

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    :goto_1
    invoke-virtual {v5, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v15, Lcom/sigmob/sdk/base/services/g;->b:[F

    if-eqz v2, :cond_3

    iget-object v2, v15, Lcom/sigmob/sdk/base/services/g;->b:[F

    array-length v2, v2

    const/4 v13, 0x2

    if-le v2, v13, :cond_3

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v13, v15, Lcom/sigmob/sdk/base/services/g;->b:[F

    aget v13, v13, v19

    float-to-double v13, v13

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v6, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v13, v15, Lcom/sigmob/sdk/base/services/g;->b:[F

    const/4 v14, 0x1

    aget v13, v13, v14

    float-to-double v13, v13

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v7, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v13, v15, Lcom/sigmob/sdk/base/services/g;->b:[F

    const/4 v14, 0x2

    aget v13, v13, v14

    float-to-double v13, v13

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto :goto_2

    :cond_3
    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v6, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v7, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    :goto_2
    invoke-virtual {v8, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v15, Lcom/sigmob/sdk/base/services/g;->c:[F

    if-eqz v2, :cond_4

    iget-object v2, v15, Lcom/sigmob/sdk/base/services/g;->c:[F

    array-length v2, v2

    const/4 v13, 0x2

    if-le v2, v13, :cond_4

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v13, v15, Lcom/sigmob/sdk/base/services/g;->c:[F

    aget v13, v13, v19

    float-to-double v13, v13

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v9, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v13, v15, Lcom/sigmob/sdk/base/services/g;->c:[F

    const/4 v14, 0x1

    aget v13, v13, v14

    float-to-double v13, v13

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v10, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v13, v15, Lcom/sigmob/sdk/base/services/g;->c:[F

    const/4 v14, 0x2

    aget v13, v13, v14

    float-to-double v13, v13

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto :goto_3

    :cond_4
    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v9, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v10, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    :goto_3
    invoke-virtual {v11, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v15, Lcom/sigmob/sdk/base/services/g;->d:[F

    if-eqz v2, :cond_5

    iget-object v2, v15, Lcom/sigmob/sdk/base/services/g;->d:[F

    array-length v2, v2

    const/4 v13, 0x2

    if-le v2, v13, :cond_5

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v13, v15, Lcom/sigmob/sdk/base/services/g;->d:[F

    aget v13, v13, v19

    float-to-double v13, v13

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v13, v15, Lcom/sigmob/sdk/base/services/g;->d:[F

    const/4 v14, 0x1

    aget v13, v13, v14

    float-to-double v13, v13

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v13, v25

    invoke-virtual {v13, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v14, v15, Lcom/sigmob/sdk/base/services/g;->d:[F

    const/16 v23, 0x2

    aget v14, v14, v23

    move-object/from16 v25, v10

    move-object/from16 v26, v11

    float-to-double v10, v14

    invoke-virtual {v2, v10, v11}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v10, v22

    goto :goto_4

    :cond_5
    move-object/from16 v26, v11

    move-object/from16 v13, v25

    move-object/from16 v25, v10

    move-object/from16 v10, v22

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v13, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    :goto_4
    invoke-virtual {v10, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v15, Lcom/sigmob/sdk/base/services/g;->f:[F

    if-eqz v2, :cond_6

    iget-object v2, v15, Lcom/sigmob/sdk/base/services/g;->f:[F

    array-length v2, v2

    const/4 v11, 0x2

    if-le v2, v11, :cond_6

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v11, v15, Lcom/sigmob/sdk/base/services/g;->f:[F

    aget v11, v11, v19

    move-object/from16 v22, v10

    float-to-double v10, v11

    invoke-virtual {v2, v10, v11}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v10, v21

    invoke-virtual {v10, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v11, v15, Lcom/sigmob/sdk/base/services/g;->f:[F

    const/4 v14, 0x1

    aget v11, v11, v14

    move-object/from16 v21, v13

    float-to-double v13, v11

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v11, v17

    invoke-virtual {v11, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v13, v15, Lcom/sigmob/sdk/base/services/g;->f:[F

    const/4 v14, 0x2

    aget v13, v13, v14

    float-to-double v13, v13

    invoke-virtual {v2, v13, v14}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v13, v18

    goto :goto_5

    :cond_6
    move-object/from16 v22, v10

    move-object/from16 v11, v17

    move-object/from16 v10, v21

    move-object/from16 v21, v13

    move-object/from16 v13, v18

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v10, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v11, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    :goto_5
    invoke-virtual {v13, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v2, v15, Lcom/sigmob/sdk/base/services/g;->e:[F

    if-eqz v2, :cond_7

    iget-object v2, v15, Lcom/sigmob/sdk/base/services/g;->e:[F

    array-length v2, v2

    if-lez v2, :cond_7

    iget-object v1, v0, Lcom/sigmob/sdk/base/services/h;->a:Ljava/text/DecimalFormat;

    iget-object v2, v15, Lcom/sigmob/sdk/base/services/g;->e:[F

    aget v2, v2, v19

    float-to-double v14, v2

    invoke-virtual {v1, v14, v15}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    move-object/from16 v2, v20

    goto :goto_6

    :cond_7
    move-object/from16 v2, v20

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    :goto_6
    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v24, 0x1

    move-object/from16 v20, v2

    move-object/from16 v17, v11

    move-object/from16 v18, v13

    move-object/from16 v13, v21

    move-object/from16 v14, v22

    move-object/from16 v11, v26

    move v2, v1

    move-object/from16 v21, v10

    move-object/from16 v10, v25

    move-object/from16 v1, p1

    goto/16 :goto_0

    :cond_8
    move-object/from16 v25, v10

    move-object/from16 v26, v11

    move-object/from16 v11, v17

    move-object/from16 v2, v20

    move-object/from16 v10, v21

    move-object/from16 v21, v13

    move-object/from16 v13, v18

    const-string v1, "{"

    move-object/from16 v14, v16

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x1

    new-array v15, v1, [Ljava/lang/Object;

    const/4 v1, 0x3

    new-array v0, v1, [Ljava/lang/Object;

    invoke-virtual {v3}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v19

    invoke-virtual {v4}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    aput-object v3, v0, v4

    invoke-virtual {v5}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x2

    aput-object v3, v0, v5

    const-string v3, "\"x\":%s,\"y\":%s,\"z\":%s"

    invoke-static {v3, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    aput-object v0, v15, v19

    const-string v0, "\"gravity\":{%s}"

    invoke-static {v0, v15}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v14, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ","

    invoke-virtual {v14, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v5, v4, [Ljava/lang/Object;

    new-array v15, v1, [Ljava/lang/Object;

    invoke-virtual {v6}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v15, v19

    invoke-virtual {v7}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v15, v4

    invoke-virtual {v8}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x2

    aput-object v6, v15, v7

    invoke-static {v3, v15}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    aput-object v6, v5, v19

    const-string v6, "\"gyroscope\":{%s}"

    invoke-static {v6, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v5, v4, [Ljava/lang/Object;

    new-array v6, v1, [Ljava/lang/Object;

    invoke-virtual {v9}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v6, v19

    invoke-virtual/range {v25 .. v25}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v6, v4

    invoke-virtual/range {v26 .. v26}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v8, 0x2

    aput-object v7, v6, v8

    invoke-static {v3, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    aput-object v6, v5, v19

    const-string v6, "\"magnetic_field\":{%s}"

    invoke-static {v6, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v5, v4, [Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v5, v19

    const-string v2, "\"light\":%s"

    invoke-static {v2, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v2, v4, [Ljava/lang/Object;

    new-array v5, v1, [Ljava/lang/Object;

    invoke-virtual {v10}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v5, v19

    invoke-virtual {v11}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v5, v4

    invoke-virtual {v13}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x2

    aput-object v6, v5, v7

    invoke-static {v3, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v2, v19

    const-string v5, "\"linear_acceleration\":{%s}"

    invoke-static {v5, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v0, v4, [Ljava/lang/Object;

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {v12}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v19

    invoke-virtual/range {v21 .. v21}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v4

    invoke-virtual/range {v22 .. v22}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v4, 0x2

    aput-object v2, v1, v4

    invoke-static {v3, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    aput-object v1, v0, v19

    const-string v1, "\"accelerometer\":{%s}"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v14, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "}"

    invoke-virtual {v14, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v4}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_9
    :goto_7
    move-object v14, v2

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/services/h;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/services/h;->e:Ljava/util/List;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/services/h;Ljava/util/List;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/services/g;",
            ">;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/services/g;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySensor;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySensor;-><init>()V

    const-string v1, "101"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->setAc_type(Ljava/lang/String;)V

    invoke-virtual {v0, p3}, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->setCategory(Ljava/lang/String;)V

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->setMotion_before(Ljava/lang/String;)V

    invoke-direct {p0, p2}, Lcom/sigmob/sdk/base/services/h;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->setMotion_after(Ljava/lang/String;)V

    iget p1, p0, Lcom/sigmob/sdk/base/services/h;->g:I

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->setMotion_interval(Ljava/lang/String;)V

    invoke-virtual {v0, p4}, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->setLoad_id(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->commit()V

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/services/h;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/base/services/h;->g:I

    return p0
.end method

.method static synthetic b()Landroid/os/Handler;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/services/h;->b:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic c()I
    .locals 1

    sget v0, Lcom/sigmob/sdk/base/services/h;->c:I

    return v0
.end method

.method static synthetic c(Lcom/sigmob/sdk/base/services/h;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/base/services/h;->h:I

    return p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/base/services/h;)Lcom/sigmob/sdk/base/services/g;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/services/h;->d:Lcom/sigmob/sdk/base/services/g;

    return-object p0
.end method


# virtual methods
.method a(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    return-object p1
.end method

.method public a(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/services/h;->g:I

    return-void
.end method

.method public a(Landroid/content/Context;)V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/i;->v()Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    invoke-virtual {p1, p0}, Landroid/hardware/SensorManager;->unregisterListener(Landroid/hardware/SensorEventListener;)V

    sget-object p1, Lcom/sigmob/sdk/base/services/h;->b:Landroid/os/Handler;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/services/h;->e:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    :cond_0
    return-void

    :cond_1
    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->v()Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "start anti spam motion"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/h;->e:Ljava/util/List;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->x()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/base/services/h;->h:I

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->w()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/base/services/h;->g:I

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->y()I

    move-result v0

    sput v0, Lcom/sigmob/sdk/base/services/h;->c:I

    const-string v0, "sensor"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/hardware/SensorManager;

    iput-object p1, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    const/4 v0, 0x5

    invoke-virtual {p1, v0}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object v0

    const/4 v1, 0x3

    invoke-virtual {p1, p0, v0, v1}, Landroid/hardware/SensorManager;->registerListener(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z

    const-string p1, "\u5149\u7ebf\u4f20\u611f\u5668 "

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object v0

    invoke-virtual {p1, p0, v0, v1}, Landroid/hardware/SensorManager;->registerListener(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z

    const-string p1, "\u52a0\u901f\u4f20\u611f\u5668 "

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    const/4 v2, 0x2

    invoke-virtual {v0, v2}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object v0

    invoke-virtual {p1, p0, v0, v1}, Landroid/hardware/SensorManager;->registerListener(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z

    const-string p1, "\u78c1\u573a\u4f20\u611f\u5668 "

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    const/4 v2, 0x4

    invoke-virtual {v0, v2}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object v0

    invoke-virtual {p1, p0, v0, v1}, Landroid/hardware/SensorManager;->registerListener(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z

    const-string p1, "\u9640\u87ba\u4eea "

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    const/16 v2, 0x9

    invoke-virtual {v0, v2}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object v0

    invoke-virtual {p1, p0, v0, v1}, Landroid/hardware/SensorManager;->registerListener(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z

    const-string p1, "\u91cd\u529b\u4f20\u611f\u5668 "

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->f:Landroid/hardware/SensorManager;

    const/16 v2, 0xa

    invoke-virtual {v0, v2}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object v0

    invoke-virtual {p1, p0, v0, v1}, Landroid/hardware/SensorManager;->registerListener(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z

    const-string p1, "\u7ebf\u6027\u52a0\u901f\u5668 "

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    new-instance p1, Lcom/sigmob/sdk/base/services/h$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p1, p0, v0}, Lcom/sigmob/sdk/base/services/h$1;-><init>(Lcom/sigmob/sdk/base/services/h;Landroid/os/Looper;)V

    sput-object p1, Lcom/sigmob/sdk/base/services/h;->b:Landroid/os/Handler;

    new-instance p1, Landroid/os/Message;

    invoke-direct {p1}, Landroid/os/Message;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/services/f;->c:Lcom/sigmob/sdk/base/services/f;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/services/f;->a()I

    move-result v0

    iput v0, p1, Landroid/os/Message;->what:I

    sget-object v0, Lcom/sigmob/sdk/base/services/h;->b:Landroid/os/Handler;

    if-eqz v0, :cond_2

    sget-object v0, Lcom/sigmob/sdk/base/services/h;->b:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->v()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/i;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/services/h;->a(Landroid/content/Context;)V

    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    new-instance v1, Lcom/sigmob/sdk/base/services/i;

    invoke-direct {v1}, Lcom/sigmob/sdk/base/services/i;-><init>()V

    iput-object p1, v1, Lcom/sigmob/sdk/base/services/i;->b:Ljava/lang/String;

    iput-object p2, v1, Lcom/sigmob/sdk/base/services/i;->c:Ljava/lang/String;

    sget-object p1, Lcom/sigmob/sdk/base/services/f;->a:Lcom/sigmob/sdk/base/services/f;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/services/f;->a()I

    move-result p1

    iput p1, v0, Landroid/os/Message;->what:I

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    sget-object p1, Lcom/sigmob/sdk/base/services/h;->b:Landroid/os/Handler;

    if-eqz p1, :cond_0

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_0
    return-void
.end method

.method public onAccuracyChanged(Landroid/hardware/Sensor;I)V
    .locals 2

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {p1}, Landroid/hardware/Sensor;->getName()Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x0

    aput-object p1, v0, v1

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 p2, 0x1

    aput-object p1, v0, p2

    const-string p1, "name :%s, accuracy %d"

    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public onSensorChanged(Landroid/hardware/SensorEvent;)V
    .locals 2

    iget-object v0, p1, Landroid/hardware/SensorEvent;->sensor:Landroid/hardware/Sensor;

    invoke-virtual {v0}, Landroid/hardware/Sensor;->getType()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_5

    const/4 v1, 0x2

    if-eq v0, v1, :cond_4

    const/4 v1, 0x4

    if-eq v0, v1, :cond_3

    const/4 v1, 0x5

    if-eq v0, v1, :cond_2

    const/16 v1, 0x9

    if-eq v0, v1, :cond_1

    const/16 v1, 0xa

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->d:Lcom/sigmob/sdk/base/services/g;

    iget-object p1, p1, Landroid/hardware/SensorEvent;->values:[F

    invoke-virtual {p1}, [F->clone()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [F

    iput-object p1, v0, Lcom/sigmob/sdk/base/services/g;->f:[F

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->d:Lcom/sigmob/sdk/base/services/g;

    iget-object p1, p1, Landroid/hardware/SensorEvent;->values:[F

    invoke-virtual {p1}, [F->clone()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [F

    iput-object p1, v0, Lcom/sigmob/sdk/base/services/g;->a:[F

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->d:Lcom/sigmob/sdk/base/services/g;

    iget-object p1, p1, Landroid/hardware/SensorEvent;->values:[F

    invoke-virtual {p1}, [F->clone()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [F

    iput-object p1, v0, Lcom/sigmob/sdk/base/services/g;->e:[F

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->d:Lcom/sigmob/sdk/base/services/g;

    iget-object p1, p1, Landroid/hardware/SensorEvent;->values:[F

    invoke-virtual {p1}, [F->clone()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [F

    iput-object p1, v0, Lcom/sigmob/sdk/base/services/g;->b:[F

    goto :goto_0

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->d:Lcom/sigmob/sdk/base/services/g;

    iget-object p1, p1, Landroid/hardware/SensorEvent;->values:[F

    invoke-virtual {p1}, [F->clone()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [F

    iput-object p1, v0, Lcom/sigmob/sdk/base/services/g;->c:[F

    goto :goto_0

    :cond_5
    iget-object v0, p0, Lcom/sigmob/sdk/base/services/h;->d:Lcom/sigmob/sdk/base/services/g;

    iget-object p1, p1, Landroid/hardware/SensorEvent;->values:[F

    invoke-virtual {p1}, [F->clone()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [F

    iput-object p1, v0, Lcom/sigmob/sdk/base/services/g;->d:[F

    :goto_0
    return-void
.end method
