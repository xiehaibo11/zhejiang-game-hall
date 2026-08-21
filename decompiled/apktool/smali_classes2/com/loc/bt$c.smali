.class public final enum Lcom/loc/bt$c;
.super Ljava/lang/Enum;
.source "Request.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/bt;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "c"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/loc/bt$c;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/loc/bt$c;

.field public static final enum b:Lcom/loc/bt$c;

.field private static final synthetic d:[Lcom/loc/bt$c;


# instance fields
.field private c:I


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Lcom/loc/bt$c;

    const/4 v1, 0x0

    const-string v2, "HTTP"

    invoke-direct {v0, v2, v1, v1}, Lcom/loc/bt$c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$c;->a:Lcom/loc/bt$c;

    new-instance v0, Lcom/loc/bt$c;

    const/4 v2, 0x1

    const-string v3, "HTTPS"

    invoke-direct {v0, v3, v2, v2}, Lcom/loc/bt$c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$c;->b:Lcom/loc/bt$c;

    const/4 v3, 0x2

    new-array v3, v3, [Lcom/loc/bt$c;

    sget-object v4, Lcom/loc/bt$c;->a:Lcom/loc/bt$c;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/loc/bt$c;->d:[Lcom/loc/bt$c;

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

    iput p3, p0, Lcom/loc/bt$c;->c:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/loc/bt$c;
    .locals 1

    const-class v0, Lcom/loc/bt$c;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/loc/bt$c;

    return-object p0
.end method

.method public static values()[Lcom/loc/bt$c;
    .locals 1

    sget-object v0, Lcom/loc/bt$c;->d:[Lcom/loc/bt$c;

    invoke-virtual {v0}, [Lcom/loc/bt$c;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/loc/bt$c;

    return-object v0
.end method
