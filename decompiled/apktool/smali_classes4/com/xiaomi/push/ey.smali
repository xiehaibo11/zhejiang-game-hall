.class public final enum Lcom/xiaomi/push/ey;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/xiaomi/push/ey;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/xiaomi/push/ey;

.field private static final synthetic a:[Lcom/xiaomi/push/ey;

.field public static final enum b:Lcom/xiaomi/push/ey;

.field public static final enum c:Lcom/xiaomi/push/ey;

.field public static final enum d:Lcom/xiaomi/push/ey;

.field public static final enum e:Lcom/xiaomi/push/ey;

.field public static final enum f:Lcom/xiaomi/push/ey;

.field public static final enum g:Lcom/xiaomi/push/ey;

.field public static final enum h:Lcom/xiaomi/push/ey;

.field public static final enum i:Lcom/xiaomi/push/ey;

.field public static final enum j:Lcom/xiaomi/push/ey;


# instance fields
.field public final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 13

    new-instance v0, Lcom/xiaomi/push/ey;

    const/4 v1, 0x0

    const-string v2, "COMMAND_REGISTER"

    const-string v3, "register"

    invoke-direct {v0, v2, v1, v3}, Lcom/xiaomi/push/ey;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/xiaomi/push/ey;->a:Lcom/xiaomi/push/ey;

    new-instance v0, Lcom/xiaomi/push/ey;

    const/4 v2, 0x1

    const-string v3, "COMMAND_UNREGISTER"

    const-string v4, "unregister"

    invoke-direct {v0, v3, v2, v4}, Lcom/xiaomi/push/ey;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/xiaomi/push/ey;->b:Lcom/xiaomi/push/ey;

    new-instance v0, Lcom/xiaomi/push/ey;

    const/4 v3, 0x2

    const-string v4, "COMMAND_SET_ALIAS"

    const-string v5, "set-alias"

    invoke-direct {v0, v4, v3, v5}, Lcom/xiaomi/push/ey;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/xiaomi/push/ey;->c:Lcom/xiaomi/push/ey;

    new-instance v0, Lcom/xiaomi/push/ey;

    const/4 v4, 0x3

    const-string v5, "COMMAND_UNSET_ALIAS"

    const-string v6, "unset-alias"

    invoke-direct {v0, v5, v4, v6}, Lcom/xiaomi/push/ey;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/xiaomi/push/ey;->d:Lcom/xiaomi/push/ey;

    new-instance v0, Lcom/xiaomi/push/ey;

    const/4 v5, 0x4

    const-string v6, "COMMAND_SET_ACCOUNT"

    const-string v7, "set-account"

    invoke-direct {v0, v6, v5, v7}, Lcom/xiaomi/push/ey;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/xiaomi/push/ey;->e:Lcom/xiaomi/push/ey;

    new-instance v0, Lcom/xiaomi/push/ey;

    const/4 v6, 0x5

    const-string v7, "COMMAND_UNSET_ACCOUNT"

    const-string v8, "unset-account"

    invoke-direct {v0, v7, v6, v8}, Lcom/xiaomi/push/ey;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/xiaomi/push/ey;->f:Lcom/xiaomi/push/ey;

    new-instance v0, Lcom/xiaomi/push/ey;

    const/4 v7, 0x6

    const-string v8, "COMMAND_SUBSCRIBE_TOPIC"

    const-string v9, "subscribe-topic"

    invoke-direct {v0, v8, v7, v9}, Lcom/xiaomi/push/ey;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/xiaomi/push/ey;->g:Lcom/xiaomi/push/ey;

    new-instance v0, Lcom/xiaomi/push/ey;

    const/4 v8, 0x7

    const-string v9, "COMMAND_UNSUBSCRIBE_TOPIC"

    const-string v10, "unsubscibe-topic"

    invoke-direct {v0, v9, v8, v10}, Lcom/xiaomi/push/ey;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/xiaomi/push/ey;->h:Lcom/xiaomi/push/ey;

    new-instance v0, Lcom/xiaomi/push/ey;

    const/16 v9, 0x8

    const-string v10, "COMMAND_SET_ACCEPT_TIME"

    const-string v11, "accept-time"

    invoke-direct {v0, v10, v9, v11}, Lcom/xiaomi/push/ey;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/xiaomi/push/ey;->i:Lcom/xiaomi/push/ey;

    new-instance v0, Lcom/xiaomi/push/ey;

    const/16 v10, 0x9

    const-string v11, "COMMAND_CHK_VDEVID"

    const-string v12, "check-vdeviceid"

    invoke-direct {v0, v11, v10, v12}, Lcom/xiaomi/push/ey;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/xiaomi/push/ey;->j:Lcom/xiaomi/push/ey;

    const/16 v11, 0xa

    new-array v11, v11, [Lcom/xiaomi/push/ey;

    sget-object v12, Lcom/xiaomi/push/ey;->a:Lcom/xiaomi/push/ey;

    aput-object v12, v11, v1

    sget-object v1, Lcom/xiaomi/push/ey;->b:Lcom/xiaomi/push/ey;

    aput-object v1, v11, v2

    sget-object v1, Lcom/xiaomi/push/ey;->c:Lcom/xiaomi/push/ey;

    aput-object v1, v11, v3

    sget-object v1, Lcom/xiaomi/push/ey;->d:Lcom/xiaomi/push/ey;

    aput-object v1, v11, v4

    sget-object v1, Lcom/xiaomi/push/ey;->e:Lcom/xiaomi/push/ey;

    aput-object v1, v11, v5

    sget-object v1, Lcom/xiaomi/push/ey;->f:Lcom/xiaomi/push/ey;

    aput-object v1, v11, v6

    sget-object v1, Lcom/xiaomi/push/ey;->g:Lcom/xiaomi/push/ey;

    aput-object v1, v11, v7

    sget-object v1, Lcom/xiaomi/push/ey;->h:Lcom/xiaomi/push/ey;

    aput-object v1, v11, v8

    sget-object v1, Lcom/xiaomi/push/ey;->i:Lcom/xiaomi/push/ey;

    aput-object v1, v11, v9

    aput-object v0, v11, v10

    sput-object v11, Lcom/xiaomi/push/ey;->a:[Lcom/xiaomi/push/ey;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILjava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput-object p3, p0, Lcom/xiaomi/push/ey;->a:Ljava/lang/String;

    return-void
.end method

.method public static a(Ljava/lang/String;)I
    .locals 6

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, -0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-static {}, Lcom/xiaomi/push/ey;->values()[Lcom/xiaomi/push/ey;

    move-result-object v0

    array-length v2, v0

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_2

    aget-object v4, v0, v3

    iget-object v5, v4, Lcom/xiaomi/push/ey;->a:Ljava/lang/String;

    invoke-virtual {v5, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    invoke-static {v4}, Lcom/xiaomi/push/en;->a(Ljava/lang/Enum;)I

    move-result v1

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    return v1
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/xiaomi/push/ey;
    .locals 1

    const-class v0, Lcom/xiaomi/push/ey;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/xiaomi/push/ey;

    return-object p0
.end method

.method public static values()[Lcom/xiaomi/push/ey;
    .locals 1

    sget-object v0, Lcom/xiaomi/push/ey;->a:[Lcom/xiaomi/push/ey;

    invoke-virtual {v0}, [Lcom/xiaomi/push/ey;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/xiaomi/push/ey;

    return-object v0
.end method
