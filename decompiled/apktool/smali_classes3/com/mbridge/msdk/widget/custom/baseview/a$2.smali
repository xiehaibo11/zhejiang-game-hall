.class final Lcom/mbridge/msdk/widget/custom/baseview/a$2;
.super Landroid/util/Property;
.source "CircularAnimatedDrawable.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/widget/custom/baseview/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/util/Property<",
        "Lcom/mbridge/msdk/widget/custom/baseview/a;",
        "Ljava/lang/Float;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/widget/custom/baseview/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/baseview/a;Ljava/lang/Class;Ljava/lang/String;)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/a$2;->a:Lcom/mbridge/msdk/widget/custom/baseview/a;

    invoke-direct {p0, p2, p3}, Landroid/util/Property;-><init>(Ljava/lang/Class;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final synthetic get(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 103
    check-cast p1, Lcom/mbridge/msdk/widget/custom/baseview/a;

    .line 1106
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/a;->b()F

    move-result p1

    invoke-static {p1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p1

    return-object p1
.end method

.method public final synthetic set(Ljava/lang/Object;Ljava/lang/Object;)V
    .locals 0

    .line 103
    check-cast p1, Lcom/mbridge/msdk/widget/custom/baseview/a;

    check-cast p2, Ljava/lang/Float;

    .line 1111
    invoke-virtual {p2}, Ljava/lang/Float;->floatValue()F

    move-result p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/widget/custom/baseview/a;->b(F)V

    return-void
.end method
