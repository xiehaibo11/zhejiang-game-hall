.class public final enum Lcom/tkay/expressad/video/dynview/c/b;
.super Ljava/lang/Enum;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/c/a;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/tkay/expressad/video/dynview/c/b;",
        ">;",
        "Lcom/tkay/expressad/video/dynview/c/a;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/tkay/expressad/video/dynview/c/b;

.field public static final enum b:Lcom/tkay/expressad/video/dynview/c/b;

.field public static final enum c:Lcom/tkay/expressad/video/dynview/c/b;

.field public static final enum d:Lcom/tkay/expressad/video/dynview/c/b;

.field public static final enum e:Lcom/tkay/expressad/video/dynview/c/b;

.field public static final enum f:Lcom/tkay/expressad/video/dynview/c/b;

.field private static final synthetic i:[Lcom/tkay/expressad/video/dynview/c/b;


# instance fields
.field private g:I

.field private h:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 10

    .line 11
    new-instance v0, Lcom/tkay/expressad/video/dynview/c/b;

    const/4 v1, 0x0

    const-string v2, "NOT_FOUND_VIEWOPTION"

    const/4 v3, -0x1

    const-string v4, "ViewOption is null"

    invoke-direct {v0, v2, v1, v3, v4}, Lcom/tkay/expressad/video/dynview/c/b;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/tkay/expressad/video/dynview/c/b;->a:Lcom/tkay/expressad/video/dynview/c/b;

    .line 12
    new-instance v0, Lcom/tkay/expressad/video/dynview/c/b;

    const/4 v2, 0x1

    const-string v3, "NOT_FOUND_CONTEXT"

    const/4 v4, -0x2

    const-string v5, "Context is null"

    invoke-direct {v0, v3, v2, v4, v5}, Lcom/tkay/expressad/video/dynview/c/b;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/tkay/expressad/video/dynview/c/b;->b:Lcom/tkay/expressad/video/dynview/c/b;

    .line 13
    new-instance v0, Lcom/tkay/expressad/video/dynview/c/b;

    const/4 v3, 0x2

    const-string v4, "NOT_FOUND_LAYOUTNAME"

    const/4 v5, -0x3

    const-string v6, "layout xml name is null"

    invoke-direct {v0, v4, v3, v5, v6}, Lcom/tkay/expressad/video/dynview/c/b;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/tkay/expressad/video/dynview/c/b;->c:Lcom/tkay/expressad/video/dynview/c/b;

    .line 14
    new-instance v0, Lcom/tkay/expressad/video/dynview/c/b;

    const/4 v4, 0x3

    const-string v5, "CAMPAIGNEX_IS_NULL"

    const/4 v6, -0x4

    const-string v7, "Campaign size only one"

    invoke-direct {v0, v5, v4, v6, v7}, Lcom/tkay/expressad/video/dynview/c/b;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/tkay/expressad/video/dynview/c/b;->d:Lcom/tkay/expressad/video/dynview/c/b;

    .line 15
    new-instance v0, Lcom/tkay/expressad/video/dynview/c/b;

    const/4 v5, 0x4

    const-string v6, "VIEW_CREATE_ERROR"

    const/4 v7, -0x5

    const-string v8, "view create error"

    invoke-direct {v0, v6, v5, v7, v8}, Lcom/tkay/expressad/video/dynview/c/b;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/tkay/expressad/video/dynview/c/b;->e:Lcom/tkay/expressad/video/dynview/c/b;

    .line 16
    new-instance v0, Lcom/tkay/expressad/video/dynview/c/b;

    const/4 v6, 0x5

    const-string v7, "NOT_FOUND_ROOTVIEW"

    const/4 v8, -0x6

    const-string v9, "rootview is null"

    invoke-direct {v0, v7, v6, v8, v9}, Lcom/tkay/expressad/video/dynview/c/b;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/tkay/expressad/video/dynview/c/b;->f:Lcom/tkay/expressad/video/dynview/c/b;

    const/4 v7, 0x6

    new-array v7, v7, [Lcom/tkay/expressad/video/dynview/c/b;

    .line 9
    sget-object v8, Lcom/tkay/expressad/video/dynview/c/b;->a:Lcom/tkay/expressad/video/dynview/c/b;

    aput-object v8, v7, v1

    sget-object v1, Lcom/tkay/expressad/video/dynview/c/b;->b:Lcom/tkay/expressad/video/dynview/c/b;

    aput-object v1, v7, v2

    sget-object v1, Lcom/tkay/expressad/video/dynview/c/b;->c:Lcom/tkay/expressad/video/dynview/c/b;

    aput-object v1, v7, v3

    sget-object v1, Lcom/tkay/expressad/video/dynview/c/b;->d:Lcom/tkay/expressad/video/dynview/c/b;

    aput-object v1, v7, v4

    sget-object v1, Lcom/tkay/expressad/video/dynview/c/b;->e:Lcom/tkay/expressad/video/dynview/c/b;

    aput-object v1, v7, v5

    aput-object v0, v7, v6

    sput-object v7, Lcom/tkay/expressad/video/dynview/c/b;->i:[Lcom/tkay/expressad/video/dynview/c/b;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;IILjava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 21
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 22
    iput p3, p0, Lcom/tkay/expressad/video/dynview/c/b;->g:I

    .line 23
    iput-object p4, p0, Lcom/tkay/expressad/video/dynview/c/b;->h:Ljava/lang/String;

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c/b;
    .locals 1

    .line 9
    const-class v0, Lcom/tkay/expressad/video/dynview/c/b;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/tkay/expressad/video/dynview/c/b;

    return-object p0
.end method

.method public static values()[Lcom/tkay/expressad/video/dynview/c/b;
    .locals 1

    .line 9
    sget-object v0, Lcom/tkay/expressad/video/dynview/c/b;->i:[Lcom/tkay/expressad/video/dynview/c/b;

    invoke-virtual {v0}, [Lcom/tkay/expressad/video/dynview/c/b;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/expressad/video/dynview/c/b;

    return-object v0
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 27
    iget v0, p0, Lcom/tkay/expressad/video/dynview/c/b;->g:I

    return v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 31
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/c/b;->h:Ljava/lang/String;

    return-object v0
.end method
