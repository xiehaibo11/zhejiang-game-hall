.class public final enum Lcom/igexin/b/a/b/a/a/q;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/igexin/b/a/b/a/a/q;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/igexin/b/a/b/a/a/q;

.field public static final enum b:Lcom/igexin/b/a/b/a/a/q;

.field public static final enum c:Lcom/igexin/b/a/b/a/a/q;

.field public static final enum d:Lcom/igexin/b/a/b/a/a/q;

.field public static final enum e:Lcom/igexin/b/a/b/a/a/q;

.field public static final enum f:Lcom/igexin/b/a/b/a/a/q;

.field public static final enum g:Lcom/igexin/b/a/b/a/a/q;

.field private static final synthetic h:[Lcom/igexin/b/a/b/a/a/q;


# direct methods
.method static constructor <clinit>()V
    .locals 10

    new-instance v0, Lcom/igexin/b/a/b/a/a/q;

    const/4 v1, 0x0

    const-string v2, "TCP_IO_EXCEPTION"

    invoke-direct {v0, v2, v1}, Lcom/igexin/b/a/b/a/a/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/b/a/b/a/a/q;->a:Lcom/igexin/b/a/b/a/a/q;

    new-instance v0, Lcom/igexin/b/a/b/a/a/q;

    const/4 v2, 0x1

    const-string v3, "TCP_DISCONNECT_SUCCESS"

    invoke-direct {v0, v3, v2}, Lcom/igexin/b/a/b/a/a/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/b/a/b/a/a/q;->b:Lcom/igexin/b/a/b/a/a/q;

    new-instance v0, Lcom/igexin/b/a/b/a/a/q;

    const/4 v3, 0x2

    const-string v4, "TCP_CONNECT_SUCCESS"

    invoke-direct {v0, v4, v3}, Lcom/igexin/b/a/b/a/a/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/b/a/b/a/a/q;->c:Lcom/igexin/b/a/b/a/a/q;

    new-instance v0, Lcom/igexin/b/a/b/a/a/q;

    const/4 v4, 0x3

    const-string v5, "TCP_START_CONNECT"

    invoke-direct {v0, v5, v4}, Lcom/igexin/b/a/b/a/a/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/b/a/b/a/a/q;->d:Lcom/igexin/b/a/b/a/a/q;

    new-instance v0, Lcom/igexin/b/a/b/a/a/q;

    const/4 v5, 0x4

    const-string v6, "TCP_CREATE_SUCCESS"

    invoke-direct {v0, v6, v5}, Lcom/igexin/b/a/b/a/a/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/b/a/b/a/a/q;->e:Lcom/igexin/b/a/b/a/a/q;

    new-instance v0, Lcom/igexin/b/a/b/a/a/q;

    const/4 v6, 0x5

    const-string v7, "INTERRUPT_SUCCESS"

    invoke-direct {v0, v7, v6}, Lcom/igexin/b/a/b/a/a/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/b/a/b/a/a/q;->f:Lcom/igexin/b/a/b/a/a/q;

    new-instance v0, Lcom/igexin/b/a/b/a/a/q;

    const/4 v7, 0x6

    const-string v8, "TCP_DISCONNECT"

    invoke-direct {v0, v8, v7}, Lcom/igexin/b/a/b/a/a/q;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/b/a/b/a/a/q;->g:Lcom/igexin/b/a/b/a/a/q;

    const/4 v8, 0x7

    new-array v8, v8, [Lcom/igexin/b/a/b/a/a/q;

    sget-object v9, Lcom/igexin/b/a/b/a/a/q;->a:Lcom/igexin/b/a/b/a/a/q;

    aput-object v9, v8, v1

    sget-object v1, Lcom/igexin/b/a/b/a/a/q;->b:Lcom/igexin/b/a/b/a/a/q;

    aput-object v1, v8, v2

    sget-object v1, Lcom/igexin/b/a/b/a/a/q;->c:Lcom/igexin/b/a/b/a/a/q;

    aput-object v1, v8, v3

    sget-object v1, Lcom/igexin/b/a/b/a/a/q;->d:Lcom/igexin/b/a/b/a/a/q;

    aput-object v1, v8, v4

    sget-object v1, Lcom/igexin/b/a/b/a/a/q;->e:Lcom/igexin/b/a/b/a/a/q;

    aput-object v1, v8, v5

    sget-object v1, Lcom/igexin/b/a/b/a/a/q;->f:Lcom/igexin/b/a/b/a/a/q;

    aput-object v1, v8, v6

    aput-object v0, v8, v7

    sput-object v8, Lcom/igexin/b/a/b/a/a/q;->h:[Lcom/igexin/b/a/b/a/a/q;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static a()[Lcom/igexin/b/a/b/a/a/q;
    .locals 1

    sget-object v0, Lcom/igexin/b/a/b/a/a/q;->h:[Lcom/igexin/b/a/b/a/a/q;

    invoke-virtual {v0}, [Lcom/igexin/b/a/b/a/a/q;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/igexin/b/a/b/a/a/q;

    return-object v0
.end method
