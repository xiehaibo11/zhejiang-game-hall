.class public final enum Lcom/igexin/push/c/g;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/igexin/push/c/g;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/igexin/push/c/g;

.field public static final enum b:Lcom/igexin/push/c/g;

.field public static final enum c:Lcom/igexin/push/c/g;

.field private static final synthetic d:[Lcom/igexin/push/c/g;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/igexin/push/c/g;

    const/4 v1, 0x0

    const-string v2, "SUCCESS"

    invoke-direct {v0, v2, v1}, Lcom/igexin/push/c/g;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/c/g;->a:Lcom/igexin/push/c/g;

    new-instance v0, Lcom/igexin/push/c/g;

    const/4 v2, 0x1

    const-string v3, "FAILED"

    invoke-direct {v0, v3, v2}, Lcom/igexin/push/c/g;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/c/g;->b:Lcom/igexin/push/c/g;

    new-instance v0, Lcom/igexin/push/c/g;

    const/4 v3, 0x2

    const-string v4, "EXCEPTION"

    invoke-direct {v0, v4, v3}, Lcom/igexin/push/c/g;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/igexin/push/c/g;->c:Lcom/igexin/push/c/g;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/igexin/push/c/g;

    sget-object v5, Lcom/igexin/push/c/g;->a:Lcom/igexin/push/c/g;

    aput-object v5, v4, v1

    sget-object v1, Lcom/igexin/push/c/g;->b:Lcom/igexin/push/c/g;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/igexin/push/c/g;->d:[Lcom/igexin/push/c/g;

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
