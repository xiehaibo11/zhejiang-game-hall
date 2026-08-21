.class public final enum Lcom/mbridge/msdk/widget/custom/a$a;
.super Ljava/lang/Enum;
.source "CustomViewRenderListener.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/widget/custom/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mbridge/msdk/widget/custom/a$a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/mbridge/msdk/widget/custom/a$a;

.field public static final enum b:Lcom/mbridge/msdk/widget/custom/a$a;

.field public static final enum c:Lcom/mbridge/msdk/widget/custom/a$a;

.field private static final synthetic d:[Lcom/mbridge/msdk/widget/custom/a$a;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 8
    new-instance v0, Lcom/mbridge/msdk/widget/custom/a$a;

    const/4 v1, 0x0

    const-string v2, "CLICK_EVENT_OPEN_PRIVACY"

    invoke-direct {v0, v2, v1}, Lcom/mbridge/msdk/widget/custom/a$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mbridge/msdk/widget/custom/a$a;->a:Lcom/mbridge/msdk/widget/custom/a$a;

    .line 12
    new-instance v0, Lcom/mbridge/msdk/widget/custom/a$a;

    const/4 v2, 0x1

    const-string v3, "CLICK_EVENT_DOWNLOAD"

    invoke-direct {v0, v3, v2}, Lcom/mbridge/msdk/widget/custom/a$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mbridge/msdk/widget/custom/a$a;->b:Lcom/mbridge/msdk/widget/custom/a$a;

    .line 16
    new-instance v0, Lcom/mbridge/msdk/widget/custom/a$a;

    const/4 v3, 0x2

    const-string v4, "CLICK_EVENT_CLOSE"

    invoke-direct {v0, v4, v3}, Lcom/mbridge/msdk/widget/custom/a$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mbridge/msdk/widget/custom/a$a;->c:Lcom/mbridge/msdk/widget/custom/a$a;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/mbridge/msdk/widget/custom/a$a;

    .line 4
    sget-object v5, Lcom/mbridge/msdk/widget/custom/a$a;->a:Lcom/mbridge/msdk/widget/custom/a$a;

    aput-object v5, v4, v1

    sget-object v1, Lcom/mbridge/msdk/widget/custom/a$a;->b:Lcom/mbridge/msdk/widget/custom/a$a;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/mbridge/msdk/widget/custom/a$a;->d:[Lcom/mbridge/msdk/widget/custom/a$a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 4
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mbridge/msdk/widget/custom/a$a;
    .locals 1

    .line 4
    const-class v0, Lcom/mbridge/msdk/widget/custom/a$a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/mbridge/msdk/widget/custom/a$a;

    return-object p0
.end method

.method public static values()[Lcom/mbridge/msdk/widget/custom/a$a;
    .locals 1

    .line 4
    sget-object v0, Lcom/mbridge/msdk/widget/custom/a$a;->d:[Lcom/mbridge/msdk/widget/custom/a$a;

    invoke-virtual {v0}, [Lcom/mbridge/msdk/widget/custom/a$a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mbridge/msdk/widget/custom/a$a;

    return-object v0
.end method
