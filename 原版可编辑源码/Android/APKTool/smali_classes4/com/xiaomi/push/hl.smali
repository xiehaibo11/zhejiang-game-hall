.class public final enum Lcom/xiaomi/push/hl;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/xiaomi/push/hl;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/xiaomi/push/hl;

.field private static final synthetic a:[Lcom/xiaomi/push/hl;

.field public static final enum b:Lcom/xiaomi/push/hl;

.field public static final enum c:Lcom/xiaomi/push/hl;

.field public static final enum d:Lcom/xiaomi/push/hl;

.field public static final enum e:Lcom/xiaomi/push/hl;

.field public static final enum f:Lcom/xiaomi/push/hl;

.field public static final enum g:Lcom/xiaomi/push/hl;

.field public static final enum h:Lcom/xiaomi/push/hl;

.field public static final enum i:Lcom/xiaomi/push/hl;

.field public static final enum j:Lcom/xiaomi/push/hl;

.field public static final enum k:Lcom/xiaomi/push/hl;

.field public static final enum l:Lcom/xiaomi/push/hl;

.field public static final enum m:Lcom/xiaomi/push/hl;

.field public static final enum n:Lcom/xiaomi/push/hl;

.field public static final enum o:Lcom/xiaomi/push/hl;

.field public static final enum p:Lcom/xiaomi/push/hl;

.field public static final enum q:Lcom/xiaomi/push/hl;

.field public static final enum r:Lcom/xiaomi/push/hl;

.field public static final enum s:Lcom/xiaomi/push/hl;

.field public static final enum t:Lcom/xiaomi/push/hl;

.field public static final enum u:Lcom/xiaomi/push/hl;

.field public static final enum v:Lcom/xiaomi/push/hl;

.field public static final enum w:Lcom/xiaomi/push/hl;

.field public static final enum x:Lcom/xiaomi/push/hl;


# instance fields
.field private final a:I


# direct methods
.method static constructor <clinit>()V
    .locals 16

    new-instance v0, Lcom/xiaomi/push/hl;

    const/4 v1, 0x1

    const-string v2, "DeviceInfo"

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3, v1}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->a:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/4 v2, 0x2

    const-string v3, "AppInstallList"

    invoke-direct {v0, v3, v1, v2}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->b:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/4 v3, 0x3

    const-string v4, "AppActiveList"

    invoke-direct {v0, v4, v2, v3}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->c:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/4 v4, 0x4

    const-string v5, "Bluetooth"

    invoke-direct {v0, v5, v3, v4}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->d:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/4 v5, 0x5

    const-string v6, "Location"

    invoke-direct {v0, v6, v4, v5}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->e:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/4 v6, 0x6

    const-string v7, "Account"

    invoke-direct {v0, v7, v5, v6}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->f:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/4 v7, 0x7

    const-string v8, "WIFI"

    invoke-direct {v0, v8, v6, v7}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->g:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v8, 0x8

    const-string v9, "Cellular"

    invoke-direct {v0, v9, v7, v8}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->h:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v9, 0x9

    const-string v10, "TopApp"

    invoke-direct {v0, v10, v8, v9}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->i:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v10, 0xa

    const-string v11, "BroadcastAction"

    invoke-direct {v0, v11, v9, v10}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->j:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v11, 0xb

    const-string v12, "BroadcastActionAdded"

    invoke-direct {v0, v12, v10, v11}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->k:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v12, 0xc

    const-string v13, "BroadcastActionRemoved"

    invoke-direct {v0, v13, v11, v12}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->l:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v13, 0xd

    const-string v14, "BroadcastActionReplaced"

    invoke-direct {v0, v14, v12, v13}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->m:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v14, 0xe

    const-string v15, "BroadcastActionDataCleared"

    invoke-direct {v0, v15, v13, v14}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->n:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v15, 0xf

    const-string v13, "BroadcastActionRestarted"

    invoke-direct {v0, v13, v14, v15}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->o:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v13, 0x10

    const-string v14, "BroadcastActionChanged"

    invoke-direct {v0, v14, v15, v13}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->p:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v14, 0x11

    const-string v15, "AppPermission"

    invoke-direct {v0, v15, v13, v14}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->q:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v15, 0x12

    const-string v13, "WifiDevicesMac"

    invoke-direct {v0, v13, v14, v15}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->r:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v13, 0x13

    const-string v14, "ActivityActiveTimeStamp"

    invoke-direct {v0, v14, v15, v13}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->s:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v14, 0x14

    const-string v15, "DeviceBaseInfo"

    invoke-direct {v0, v15, v13, v14}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->t:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v15, 0x15

    const-string v13, "DeviceInfoV2"

    invoke-direct {v0, v13, v14, v15}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->u:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const/16 v13, 0x16

    const-string v14, "Battery"

    invoke-direct {v0, v14, v15, v13}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->v:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const-string v14, "Storage"

    const/16 v15, 0x17

    invoke-direct {v0, v14, v13, v15}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->w:Lcom/xiaomi/push/hl;

    new-instance v0, Lcom/xiaomi/push/hl;

    const-string v14, "AppIsInstalled"

    const/16 v13, 0x18

    invoke-direct {v0, v14, v15, v13}, Lcom/xiaomi/push/hl;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/hl;->x:Lcom/xiaomi/push/hl;

    new-array v13, v13, [Lcom/xiaomi/push/hl;

    sget-object v14, Lcom/xiaomi/push/hl;->a:Lcom/xiaomi/push/hl;

    const/4 v15, 0x0

    aput-object v14, v13, v15

    sget-object v14, Lcom/xiaomi/push/hl;->b:Lcom/xiaomi/push/hl;

    aput-object v14, v13, v1

    sget-object v1, Lcom/xiaomi/push/hl;->c:Lcom/xiaomi/push/hl;

    aput-object v1, v13, v2

    sget-object v1, Lcom/xiaomi/push/hl;->d:Lcom/xiaomi/push/hl;

    aput-object v1, v13, v3

    sget-object v1, Lcom/xiaomi/push/hl;->e:Lcom/xiaomi/push/hl;

    aput-object v1, v13, v4

    sget-object v1, Lcom/xiaomi/push/hl;->f:Lcom/xiaomi/push/hl;

    aput-object v1, v13, v5

    sget-object v1, Lcom/xiaomi/push/hl;->g:Lcom/xiaomi/push/hl;

    aput-object v1, v13, v6

    sget-object v1, Lcom/xiaomi/push/hl;->h:Lcom/xiaomi/push/hl;

    aput-object v1, v13, v7

    sget-object v1, Lcom/xiaomi/push/hl;->i:Lcom/xiaomi/push/hl;

    aput-object v1, v13, v8

    sget-object v1, Lcom/xiaomi/push/hl;->j:Lcom/xiaomi/push/hl;

    aput-object v1, v13, v9

    sget-object v1, Lcom/xiaomi/push/hl;->k:Lcom/xiaomi/push/hl;

    aput-object v1, v13, v10

    sget-object v1, Lcom/xiaomi/push/hl;->l:Lcom/xiaomi/push/hl;

    aput-object v1, v13, v11

    sget-object v1, Lcom/xiaomi/push/hl;->m:Lcom/xiaomi/push/hl;

    aput-object v1, v13, v12

    sget-object v1, Lcom/xiaomi/push/hl;->n:Lcom/xiaomi/push/hl;

    const/16 v2, 0xd

    aput-object v1, v13, v2

    sget-object v1, Lcom/xiaomi/push/hl;->o:Lcom/xiaomi/push/hl;

    const/16 v2, 0xe

    aput-object v1, v13, v2

    sget-object v1, Lcom/xiaomi/push/hl;->p:Lcom/xiaomi/push/hl;

    const/16 v2, 0xf

    aput-object v1, v13, v2

    sget-object v1, Lcom/xiaomi/push/hl;->q:Lcom/xiaomi/push/hl;

    const/16 v2, 0x10

    aput-object v1, v13, v2

    sget-object v1, Lcom/xiaomi/push/hl;->r:Lcom/xiaomi/push/hl;

    const/16 v2, 0x11

    aput-object v1, v13, v2

    sget-object v1, Lcom/xiaomi/push/hl;->s:Lcom/xiaomi/push/hl;

    const/16 v2, 0x12

    aput-object v1, v13, v2

    sget-object v1, Lcom/xiaomi/push/hl;->t:Lcom/xiaomi/push/hl;

    const/16 v2, 0x13

    aput-object v1, v13, v2

    sget-object v1, Lcom/xiaomi/push/hl;->u:Lcom/xiaomi/push/hl;

    const/16 v2, 0x14

    aput-object v1, v13, v2

    sget-object v1, Lcom/xiaomi/push/hl;->v:Lcom/xiaomi/push/hl;

    const/16 v2, 0x15

    aput-object v1, v13, v2

    sget-object v1, Lcom/xiaomi/push/hl;->w:Lcom/xiaomi/push/hl;

    const/16 v2, 0x16

    aput-object v1, v13, v2

    const/16 v1, 0x17

    aput-object v0, v13, v1

    sput-object v13, Lcom/xiaomi/push/hl;->a:[Lcom/xiaomi/push/hl;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/xiaomi/push/hl;->a:I

    return-void
.end method

.method public static a(I)Lcom/xiaomi/push/hl;
    .locals 0

    packed-switch p0, :pswitch_data_0

    const/4 p0, 0x0

    return-object p0

    :pswitch_0
    sget-object p0, Lcom/xiaomi/push/hl;->x:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_1
    sget-object p0, Lcom/xiaomi/push/hl;->w:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_2
    sget-object p0, Lcom/xiaomi/push/hl;->v:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_3
    sget-object p0, Lcom/xiaomi/push/hl;->u:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_4
    sget-object p0, Lcom/xiaomi/push/hl;->t:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_5
    sget-object p0, Lcom/xiaomi/push/hl;->s:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_6
    sget-object p0, Lcom/xiaomi/push/hl;->r:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_7
    sget-object p0, Lcom/xiaomi/push/hl;->q:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_8
    sget-object p0, Lcom/xiaomi/push/hl;->p:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_9
    sget-object p0, Lcom/xiaomi/push/hl;->o:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_a
    sget-object p0, Lcom/xiaomi/push/hl;->n:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_b
    sget-object p0, Lcom/xiaomi/push/hl;->m:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_c
    sget-object p0, Lcom/xiaomi/push/hl;->l:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_d
    sget-object p0, Lcom/xiaomi/push/hl;->k:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_e
    sget-object p0, Lcom/xiaomi/push/hl;->j:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_f
    sget-object p0, Lcom/xiaomi/push/hl;->i:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_10
    sget-object p0, Lcom/xiaomi/push/hl;->h:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_11
    sget-object p0, Lcom/xiaomi/push/hl;->g:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_12
    sget-object p0, Lcom/xiaomi/push/hl;->f:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_13
    sget-object p0, Lcom/xiaomi/push/hl;->e:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_14
    sget-object p0, Lcom/xiaomi/push/hl;->d:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_15
    sget-object p0, Lcom/xiaomi/push/hl;->c:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_16
    sget-object p0, Lcom/xiaomi/push/hl;->b:Lcom/xiaomi/push/hl;

    return-object p0

    :pswitch_17
    sget-object p0, Lcom/xiaomi/push/hl;->a:Lcom/xiaomi/push/hl;

    return-object p0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_17
        :pswitch_16
        :pswitch_15
        :pswitch_14
        :pswitch_13
        :pswitch_12
        :pswitch_11
        :pswitch_10
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

.method public static valueOf(Ljava/lang/String;)Lcom/xiaomi/push/hl;
    .locals 1

    const-class v0, Lcom/xiaomi/push/hl;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/xiaomi/push/hl;

    return-object p0
.end method

.method public static values()[Lcom/xiaomi/push/hl;
    .locals 1

    sget-object v0, Lcom/xiaomi/push/hl;->a:[Lcom/xiaomi/push/hl;

    invoke-virtual {v0}, [Lcom/xiaomi/push/hl;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/xiaomi/push/hl;

    return-object v0
.end method


# virtual methods
.method public a()I
    .locals 1

    iget v0, p0, Lcom/xiaomi/push/hl;->a:I

    return v0
.end method
