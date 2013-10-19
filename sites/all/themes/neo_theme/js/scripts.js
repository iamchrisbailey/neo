
(function($) {
$(document).ready(function() {		
			$(window).scroll(function(){
				var scrollTop = $(window).scrollTop();
				if(scrollTop >= 150) {
					$('.states').stop().css({ opacity: 1 });
				}
				else   {
					$('.states').stop().css({ opacity: 0 });
				}
			});
		});
}(jQuery));