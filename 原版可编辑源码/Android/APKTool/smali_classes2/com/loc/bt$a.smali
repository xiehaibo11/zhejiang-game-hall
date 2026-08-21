.class public final enum Lcom/loc/bt$a;
.super Ljava/lang/Enum;
.source "Request.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/bt;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/loc/bt$a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/loc/bt$a;

.field public static final enum b:Lcom/loc/bt$a;

.field public static final enum c:Lcom/loc/bt$a;

.field public static final enum d:Lcom/loc/bt$a;

.field public static final enum e:Lcom/loc/bt$a;

.field private static final synthetic g:[Lcom/loc/bt$a;


# instance fields
.field private f:I


# direct methods
.method static constructor <clinit>()V
    .locals 8

    new-instance v0, Lcom/loc/bt$a;

    const/4 v1, 0x0

    const-string v2, "NORMAL"

    invoke-direct {v0, v2, v1, v1}, Lcom/loc/bt$a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$a;->a:Lcom/loc/bt$a;

    new-instance v0, Lcom/loc/bt$a;

    const/4 v2, 0x1

    const-string v3, "INTERRUPT_IO"

    invoke-direct {v0, v3, v2, v2}, Lcom/loc/bt$a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$a;->b:Lcom/loc/bt$a;

    new-instance v0, Lcom/loc/bt$a;

    const/4 v3, 0x2

    const-string v4, "NEVER"

    invoke-direct {v0, v4, v3, v3}, Lcom/loc/bt$a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$a;->c:Lcom/loc/bt$a;

    new-instance v0, Lcom/loc/bt$a;

    const/4 v4, 0x3

    const-string v5, "FIX"

    invoke-direct {v0, v5, v4, v4}, Lcom/loc/bt$a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$a;->d:Lcom/loc/bt$a;

    new-instance v0, Lcom/loc/bt$a;

    const/4 v5, 0x4

    const-string v6, "SINGLE"

    invoke-direct {v0, v6, v5, v5}, Lcom/loc/bt$a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$a;->e:Lcom/loc/bt$a;

    const/4 v6, 0x5

    new-array v6, v6, [Lcom/loc/bt$a;

    sget-object v7, Lcom/loc/bt$a;->a:Lcom/loc/bt$a;

    aput-object v7, v6, v1

    sget-object v1, Lcom/loc/bt$a;->b:Lcom/loc/bt$a;

    aput-object v1, v6, v2

    sget-object v1, Lcom/loc/bt$a;->c:Lcom/loc/bt$a;

    aput-object v1, v6, v3

    sget-object v1, Lcom/loc/bt$a;->d:Lcom/loc/bt$a;

    aput-object v1, v6, v4

    aput-object v0, v6, v5

    sput-object v6, Lcom/loc/bt$a;->g:[Lcom/loc/bt$a;

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

    iput p3, p0, Lcom/loc/bt$a;->f:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/loc/bt$a;
    .locals 1

    const-class v0, Lcom/loc/bt$a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/loc/bt$a;

    return-object p0
.end method

.method public static values()[Lcom/loc/bt$a;
    .locals 1

    sget-object v0, Lcom/loc/bt$a;->g:[Lcom/loc/bt$a;

    invoke-virtual {v0}, [Lcom/loc/bt$a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/loc/bt$a;

    return-object v0
.end method
